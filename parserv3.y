%{
#include "tabla.h"
#include <ctype.h>
#include <stdio.h>

int yylex();
void yyerror(const char* message);
extern FILE* yyin;
%}
%define parse.error verbose

%union{
        SymbolEntry* paraSymbolEntry;
        ListaId_T paraListaId;
        char* paraCadena;
        int paraEntero;
        float paraReal;
        NombreTipo paraNombreTipo;
        Booleano paraBooleano;
        emanem paraEmanem;
}

%token<paraCadena> TK_IDENTIFICADOR
%token TK_ALGORITMO TK_IDENTIFICADOR_B TK_FALGORITMO TK_SECUENCIAL 
%token TK_COMENTARIO

/*token declaraciones*/
%token TK_TIPO TK_FTIPO TK_CONST TK_FCONST TK_VAR TK_FVAR

/*token declaracion tipo*/
%token TK_CREACION_TIPO TK_TUPLA TK_FTUPLA TK_TABLA  TK_FINAL_ARRAY 
%token TK_DE TK_SUBRANGO TK_LITERAL_CARACTER TK_DEFINICION_TIPO
%token<paraNombreTipo> TK_TIPOBASE
%token TK_PUNTO TK_INICIO_ARRAY TK_REF
%left TK_PUNTO TK_INICIO_ARRAY TK_REF

/*toke declaracion constantes y variables*/
%token TK_ENTRADA TK_SALIDA /*ojo ojicardo al tipo_base k igual hay verbatim*/ TK_SEPARADOR

/*token espresiones*/
%token TK_SUMA TK_RESTA TK_MODULO TK_DIV  
%token TK_PRODUCTO TK_DIVISION /*mayor precedencia que + o -*/
%left TK_SUMA TK_RESTA 
%precedence UMENOS
%left TK_PRODUCTO TK_DIVISION TK_MODULO TK_DIV 

%token TK_LITERAL_NUMERICO TK_OPREL TK_APERTURA_PARENTESIS TK_CIERRE_PARENTESIS TK_O TK_Y TK_VERDADERO TK_FALSO
%token TK_LITERAL_CADENA TK_LITERAL_BOOLEANO
%nonassoc TK_OPREL
%left  TK_O TK_Y 
%token TK_NO /*mayor precedencia que y, o*/
%precedence NEGACION

/*toke instrucciones*/
%token TK_CONTINUAR TK_ASIGNACION TK_SI TK_ENTONCES TK_FSI TK_SINO 
%token TK_MIENTRAS TK_HACER TK_FMIENTRAS TK_PARA TK_HASTA TK_FPARA

/*acciones y funciones*/
%token TK_ACCION TK_FACCION TK_FUNCION TK_DEV TK_FFUNCION TK_ENTRADA_SALIDA

%type<paraListaId> lista_id
%type<paraNombreTipo> d_tipo
%type<paraSymbolEntry> exp_a, expresion, operando, operando_b
%type<paraBooleano> exp_b
%type<paraEmanem> M
%%

/*Seccion algoritmos*/

desc_algoritmo: TK_ALGORITMO TK_IDENTIFICADOR TK_SECUENCIAL cabecera_alg bloque_alg TK_FALGORITMO TK_PUNTO{;};

cabecera_alg: decl_globales decl_a_f decl_ent_sal TK_COMENTARIO{;};

bloque_alg: bloque TK_COMENTARIO{;};

decl_globales: declaracion_tipo decl_globales{;}
             | declaracion_cte decl_globales{;}
             | {;}
             ;

decl_a_f: accion_d decl_a_f{;}
        | funcion_d decl_a_f{;}
        | {;}
        ;

bloque: declaraciones instrucciones{;}

declaraciones: declaracion_tipo declaraciones{;}
             | declaracion_cte declaraciones{;}
             | declaracion_var declaraciones{;}
             | {;}
             ;

/*Seccion declaraciones*/

declaracion_tipo: TK_TIPO lista_d_tipo TK_FTIPO TK_SECUENCIAL{;};

declaracion_cte: TK_CONST lista_d_cte TK_FCONST TK_SECUENCIAL{;};

declaracion_var: TK_VAR lista_d_var TK_FVAR TK_SECUENCIAL{;};

/*Seccion declaraciones de tipo*/

lista_d_tipo: TK_IDENTIFICADOR TK_CREACION_TIPO d_tipo TK_SECUENCIAL lista_d_tipo{;}
            | {;}
            ;

d_tipo: TK_TUPLA lista_campos TK_FTUPLA{;}
      | TK_TABLA TK_INICIO_ARRAY expresion_t TK_SUBRANGO expresion_t TK_FINAL_ARRAY TK_DE d_tipo{;}
      | TK_IDENTIFICADOR{;}
      | expresion_t TK_SUBRANGO expresion_t{;}
      | TK_REF d_tipo{;}
      | TK_TIPOBASE{$$=$1} /*ojo ojimetro al tipo base, igual hay que hacer fijfushfiuahsfu*/
      ;

expresion_t: expresion{;}
           | TK_LITERAL_CARACTER{;}
           ;

lista_campos: TK_IDENTIFICADOR TK_DEFINICION_TIPO d_tipo TK_SECUENCIAL lista_campos{;}
            | {;}
            ;
/* Seccion declaracion de constantes y variables*/

/*Literal a ver todo tipo de literales*/
lista_d_cte: TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_BOOLEANO TK_SECUENCIAL lista_d_cte{;}
           | TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_CADENA TK_SECUENCIAL lista_d_cte{;}
           | TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_CARACTER TK_SECUENCIAL lista_d_cte{;}
           | TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_NUMERICO TK_SECUENCIAL lista_d_cte{;}
           | {;}
           ;
lista_d_var: lista_id TK_DEFINICION_TIPO d_tipo TK_SECUENCIAL lista_d_var
             {
                volcar_lista_id($1,$3);
             }
           | {;}
           ;

lista_id: TK_IDENTIFICADOR TK_SEPARADOR lista_id
        { 
                if (esta_tabla_id_vacia($3)) { //es necesaria la comprobacion?
                        inicializar_lista_id($3);
                        anhadir_a_lista_id($1,$$);
                } else {
                        anhadir_a_lista_id($1,$3);
                }
                $$ = $3;
        }
        | TK_IDENTIFICADOR 
        {
                inicializar_lista_id($$);
                anhadir_a_lista_id($1,$$);
        };

decl_ent_sal: decl_ent {;}
            | decl_ent decl_salida {;}
            | decl_salida{;}
            ;

decl_ent: TK_ENTRADA lista_d_var{;};

decl_salida: TK_SALIDA lista_d_var{;};

/* Seccion expresiones*/



expresion: exp_a{$$=$1;}
         | funcion_ll{;}
         ;

exp_a: exp_a TK_SUMA exp_a{
        SymbolEntry* t = newTemp();
        if($1.type == paraNombreTipo.T_ENTERO && $3.type == paraNombreTipo.T_ENTERO){
                t.type = paraNombreTipo.T_ENTERO;
                gen(NombreOperadores.O_SUMA, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_ENTERO && $3.type == paraNombreTipo.T_REAL){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_FTOI, lookup_symbol_idx(*$1), , lookup_symbol_idx(t));
                gen(NombreOperadores.O_SUMA, lookup_symbol_idx(t), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_REAL && $3.type == paraNombreTipo.T_ENTERO){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_ITOF, lookup_symbol_idx(*$3), , lookup_symbol_idx(t));
                gen(NombreOperadores.O_SUMA, lookup_symbol_idx(t), lookup_symbol_idx(*$1), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_REAL && $3.type == paraNombreTipo.T_REAL){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_SUMA, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        }
     | exp_a TK_RESTA exp_a{
        SymbolEntry* t = newTemp();
        if($1.type == paraNombreTipo.T_ENTERO && $3.type == paraNombreTipo.T_ENTERO){
                t.type = paraNombreTipo.T_ENTERO;
                gen(NombreOperadores.O_RESTA, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_ENTERO && $3.type == paraNombreTipo.T_REAL){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_FTOI, lookup_symbol_idx(*$1), , lookup_symbol_idx(t));
                gen(NombreOperadores.O_RESTA, lookup_symbol_idx(t), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_REAL && $3.type == paraNombreTipo.T_ENTERO){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_ITOF, lookup_symbol_idx(*$3), , lookup_symbol_idx(t));
                gen(NombreOperadores.O_RESTA, lookup_symbol_idx(t), lookup_symbol_idx(*$1), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_REAL && $3.type == paraNombreTipo.T_REAL){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_RESTA, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        };
     | exp_a TK_PRODUCTO exp_a{
        SymbolEntry* t = newTemp();
        if($1.type == paraNombreTipo.T_ENTERO && $3.type == paraNombreTipo.T_ENTERO){
                t.type = paraNombreTipo.T_ENTERO;
                gen(NombreOperadores.O_MUL, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_ENTERO && $3.type == paraNombreTipo.T_REAL){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_ITOF, lookup_symbol_idx(*$1), , lookup_symbol_idx(t));
                gen(NombreOperadores.O_MUL, lookup_symbol_idx(t), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_REAL && $3.type == paraNombreTipo.T_ENTERO){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_ITOF, lookup_symbol_idx(*$3), , lookup_symbol_idx(t));
                gen(NombreOperadores.O_MUL, lookup_symbol_idx(t), lookup_symbol_idx(*$1), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_REAL && $3.type == paraNombreTipo.T_REAL){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_MUL, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
     }
     | exp_a TK_DIVISION exp_a{
        SymbolEntry* t = newTemp();
        if($1.type == paraNombreTipo.T_ENTERO && $3.type == paraNombreTipo.T_ENTERO){
                t.type = paraNombreTipo.T_ENTERO;
                gen(NombreOperadores.O_DIVISION, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_ENTERO && $3.type == paraNombreTipo.T_REAL){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_ITOF, lookup_symbol_idx(*$1), , lookup_symbol_idx(t));
                gen(NombreOperadores.O_DIVISION, lookup_symbol_idx(t), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_REAL && $3.type == paraNombreTipo.T_ENTERO){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_ITOF, lookup_symbol_idx(*$3), , lookup_symbol_idx(t));
                gen(NombreOperadores.O_DIVISION, lookup_symbol_idx(t), lookup_symbol_idx(*$1), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1.type == paraNombreTipo.T_REAL && $3.type == paraNombreTipo.T_REAL){
                t.type = paraNombreTipo.T_REAL;
                gen(NombreOperadores.O_DIVISION, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        }
     | exp_a TK_MODULO exp_a{
        if($1.type == paraNombreTipo.T_ENTERO && $3.type == paraNombreTipo.T_ENTERO){
                SymbolEntry* t = newTemp();
                t.type = paraNombreTipo.T_ENTERO;
                gen(NombreOperadores.O_MOD, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }
        else{
                error();
        }
       }
     | exp_a TK_DIV exp_a{
        if($1.type == paraNombreTipo.T_ENTERO && $3.type == paraNombreTipo.T_ENTERO){
                SymbolEntry* t = newTemp();
                t.type = paraNombreTipo.T_ENTERO;
                gen(NombreOperadores.O_DIV, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
                $$ = t;
        }else{
                error();
        }
     }
     | TK_APERTURA_PARENTESIS exp_a TK_CIERRE_PARENTESIS{$$ = $2;}
     | operando{$$ = $1;}
     | TK_LITERAL_NUMERICO{}
     | TK_RESTA exp_a %prec UMENOS{
        $$ = -$1;
        gen(NombreOperadores.UMENOS, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), lookup_symbol_idx(t));
     }
     ;



 
exp_b: exp_b TK_Y M exp_b{
        backpatch($1.FALSE, M.quad);
        $$.TRUE = *merge(&$1.TRUE, &$3.TRUE);
        $$.FALSE = $2.FALSE;
     } 
     | exp_b TK_O M exp_b{
        backpatch($1.TRUE, M.quad);
        $$.FALSE = *merge(&$1.FALSE, &$3.FALSE);
        $$.TRUE = $2.TRUE;
     }
     | TK_NO exp_b %prec NEGACION{
        $$.FALSE = $2.TRUE;
        $$.TRUE = $2.FALSE;
     }
     | operando_b{
        $$.TRUE = *makeList(nextquad());
        $$.FALSE = *makeList(nextquad()+1);
        gen(NombreOperadores.O_SII, lookup_symbol_idx(*$1), 'true', );
        gen(NombreOperadores.O_GOTO, , , );
        }
     | TK_VERDADERO{;} //Literales
     | TK_FALSO{;}     //Literales
     | expresion TK_OPREL expresion{
        $$.TRUE = *makeList(nextquad());
        $$.FALSE = *makeList(nextquad()+1);
        if (TK_OPREL == NombreOperadores.O_MENOR) {
                gen(NombreOperadores.O_SIMEN, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), );
        } else if (TK_OPREL == NombreOperadores.O_MAYOR) {
                gen(NombreOperadores.O_SIMAY, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), );
        } else if (TK_OPREL == NombreOperadores.O_MENORI) {
                gen(NombreOperadores.O_SIMENI, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), );
        } else if (TK_OPREL == NombreOperadores.O_MAYORI) {
                gen(NombreOperadores.O_SIMAYI, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), );
        } else if (TK_OPREL == NombreOperadores.O_IGUAL) {
                gen(NombreOperadores.O_SII, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), );
        } else if (TK_OPREL == NombreOperadores.O_DISTINTO) {
                gen(NombreOperadores.O_SID, lookup_symbol_idx(*$1), lookup_symbol_idx(*$3), );
        }
        gen(NombreOperadores.O_GOTO, , , );
     }
     | TK_APERTURA_PARENTESIS exp_b TK_CIERRE_PARENTESIS{
        $$.TRUE = *makeList(nextquad());
        $$.FALSE = *makeList(nextquad()+1);
     }
     ;
M:{$$.quad = nextquad(); };
operando: TK_IDENTIFICADOR{lookup_symbol($1);}
          | operando TK_PUNTO operando {;}
          | operando TK_INICIO_ARRAY expresion TK_FINAL_ARRAY{;}
          | operando TK_REF{;}
          ;

operando_b: TK_IDENTIFICADOR_B{$$ = lookup_symbol($1)};
    
/*Seccion instrucciones*/

instrucciones: instruccion TK_SECUENCIAL instrucciones{;}
             | instruccion{;}
             ;

instruccion: TK_CONTINUAR{;}
           | asignacion{;}
           | alternativa{;}
           | iteracion{;}
           | accion_ll{;}
           ;

asignacion: operando TK_ASIGNACION expresion
        {if(consulta_tipo_TS($1.name) == $3.type){
                gen(NombreOperadores.O_ASIGNACION, lookup_symbol_idx($3), , lookup_symbol_idx($1));
        }
        else if(consulta_tipo_TS($1.name) == T_REAL && $3.type == T_ENTERO){
                gen(NombreOperadores.O_ITOF, lookup_symbol_idx($3), , lookup_symbol_idx($3));
                gen(NombreOperadores.O_ASIGNACION, lookup_symbol_idx($3), , lookup_symbol_idx($1));
        }
        else{
                error();
        }}
          | operando_b TK_ASIGNACION exp_b{;}
          ;

alternativa: TK_SI exp_b TK_ENTONCES instrucciones lista_opciones TK_FSI{;};

lista_opciones: TK_SINO exp_b TK_ENTONCES instrucciones lista_opciones{;}
              | {;}
              ;

iteracion: it_cota_fija{;}
         | it_cota_exp{;}
         ;

it_cota_exp: TK_MIENTRAS exp_b TK_HACER instrucciones TK_FMIENTRAS{;};

it_cota_fija: TK_PARA TK_IDENTIFICADOR TK_ASIGNACION expresion TK_HASTA expresion TK_HACER instrucciones TK_FPARA{;};

/*Acciones y funciones*/
accion_d: TK_ACCION a_cabecera bloque  TK_FACCION{;};
funcion_d: TK_FUNCION f_cabecera bloque TK_DEV expresion TK_FFUNCION{;};
a_cabecera: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS d_par_form TK_CIERRE_PARENTESIS TK_SECUENCIAL{;};
f_cabecera: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS lista_d_var TK_CIERRE_PARENTESIS TK_DEV d_tipo TK_SECUENCIAL{;};
d_par_form: d_p_form TK_SECUENCIAL d_par_form {;}
          | {;}
          ;
d_p_form: TK_ENTRADA lista_id TK_DEFINICION_TIPO d_tipo{;}
        | TK_SALIDA lista_id TK_DEFINICION_TIPO d_tipo {;}
        | TK_ENTRADA_SALIDA lista_id TK_DEFINICION_TIPO d_tipo {;}/* VER SI ES LEGAL PORqUE IGUAL NO ES LEGAL SABES EN PLAN SABES ENTIENDES SABES?*/
        ;

accion_ll: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS l_ll TK_CIERRE_PARENTESIS{;};
funcion_ll: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS l_ll TK_CIERRE_PARENTESIS{;};
l_ll: expresion TK_SEPARADOR l_ll | expresion{;};

%%

int main( int argc, char **argv )
    {
    ++argv, --argc;  /* skip over program name */
    if ( argc > 0 )
            yyin = fopen( argv[0], "r" );
    else
            yyin = stdin;

    return yyparse();
    }

void yyerror(const char* message) {
    fprintf(stdout, "Syntax error: %s\n", message);
    // You can add more error handling code here if needed
}
