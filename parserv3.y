%{
#include "tabla.h"
#include "commons.h"
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
        NombreOperadores paraNombreOperadores;
        Booleano paraBooleano;
        emanem paraEmanem;
}

%token<paraCadena> TK_IDENTIFICADOR TK_IDENTIFICADOR_B
%token TK_ALGORITMO TK_FALGORITMO TK_SECUENCIAL 
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

%token TK_LITERAL_NUMERICO TK_APERTURA_PARENTESIS TK_CIERRE_PARENTESIS TK_O TK_Y TK_VERDADERO TK_FALSO
%token<paraNombreOperadores> TK_OPREL
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
%type<paraListaId> lista_d_var
%type<paraNombreTipo> d_tipo
%type<paraSymbolEntry> exp_a
%type<paraSymbolEntry> expresion
%type<paraSymbolEntry> operando
%type<paraSymbolEntry> operando_b
%type<paraBooleano> exp_b
%type<paraEmanem> M
%type<paraEmanem> N
%type<paraEmanem> it_cota_exp
%type<paraEmanem> it_cota_fija
%type<paraEmanem> iteracion
%type<paraEmanem> instrucciones
%type<paraEmanem> instruccion
%type<paraEmanem> asignacion
%%

/*Seccion algoritmos*/

desc_algoritmo: TK_ALGORITMO TK_IDENTIFICADOR TK_SECUENCIAL cabecera_alg bloque_alg TK_FALGORITMO TK_PUNTO{writeQuadruplesToFile("output.txt", quadruplesTable, fullQuadruplesTableIndex);};

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

declaracion_var: TK_VAR lista_d_var TK_FVAR TK_SECUENCIAL{ liberar_lista_id(&$2);};

/*Seccion declaraciones de tipo*/

lista_d_tipo: TK_IDENTIFICADOR TK_CREACION_TIPO d_tipo TK_SECUENCIAL lista_d_tipo{;}
            | {;}
            ;

d_tipo: TK_TUPLA lista_campos TK_FTUPLA{;}
      | TK_TABLA TK_INICIO_ARRAY expresion_t TK_SUBRANGO expresion_t TK_FINAL_ARRAY TK_DE d_tipo{;}
      | TK_IDENTIFICADOR{;}
      | expresion_t TK_SUBRANGO expresion_t{;}
      | TK_REF d_tipo{;}
      | TK_TIPOBASE{$$=$1;}
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
                volcar_lista_id_a_tabla(&$1, $3);
                inicializar_lista_id(&$$);
                concatenar_lista_id(&$$, &$1);
                concatenar_lista_id(&$$, &$5);
             }
           | {;}
           ;

lista_id: TK_IDENTIFICADOR TK_SEPARADOR lista_id
        {
                anhadir_a_lista_id($1, &$3);
                $$ = $3;
        }
        | TK_IDENTIFICADOR_B TK_SEPARADOR lista_id
        {
                anhadir_a_lista_id($1, &$3);
                $$ = $3;
        }
        | TK_IDENTIFICADOR 
        {
                inicializar_lista_id(&$$);
                anhadir_a_lista_id($1, &$$);
        }
        | TK_IDENTIFICADOR_B
        {
                inicializar_lista_id(&$$);
                anhadir_a_lista_id($1, &$$);
        };

decl_ent_sal: decl_ent {;}
            | decl_ent decl_salida {;}
            | decl_salida{;}
            ;

decl_ent: TK_ENTRADA lista_d_var{
        for (int i = 0; i < $2.size; i++) {
               gen(O_ENTRADA, -1, -1, lookup_symbol_idx(lookup_symbol($2.ids[i]))); 
        }
        liberar_lista_id(&$2);
        };

decl_salida: TK_SALIDA lista_d_var{
        for (int i = 0; i < $2.size; i++) {
               gen(O_SALIDA, -1, -1, lookup_symbol_idx(lookup_symbol($2.ids[i]))); 
        }
        liberar_lista_id(&$2);
        };

/* Seccion expresiones*/



expresion: exp_a{$$=$1;}
         | funcion_ll{;}
         ;

exp_a: exp_a TK_SUMA exp_a{
        SymbolEntry* t = newTemp();
        if ($1->type == T_ENTERO && $3->type == T_ENTERO) {
                t->type = T_ENTERO;
                gen(O_SUMA, lookup_symbol_idx($1), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1->type == T_ENTERO && $3->type == T_REAL){
                t->type = T_REAL;
                gen(O_ITOF, lookup_symbol_idx($1), -1, lookup_symbol_idx(t));
                gen(O_SUMA, lookup_symbol_idx(t), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1->type == T_REAL && $3->type == T_ENTERO){
                t->type = T_REAL;
                gen(O_ITOF, lookup_symbol_idx($3), -1, lookup_symbol_idx(t));
                gen(O_SUMA, lookup_symbol_idx(t), lookup_symbol_idx($1), lookup_symbol_idx(t));
                $$ = t;
        }
        else if($1->type == T_REAL && $3->type == T_REAL){
                t->type = T_REAL;
                gen(O_SUMA, lookup_symbol_idx($1), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;
        }
        }
     | exp_a TK_RESTA exp_a{
        SymbolEntry* t = newTemp();
        if ($1->type == T_ENTERO && $3->type == T_ENTERO) {
                t->type = T_ENTERO;
                gen(O_RESTA, lookup_symbol_idx($1), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;

        } else if ($1->type == T_ENTERO && $3->type == T_REAL) {
                t->type = T_REAL;
                gen(O_FTOI, lookup_symbol_idx($1), -1, lookup_symbol_idx(t));
                gen(O_RESTA, lookup_symbol_idx(t), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;

        } else if ($1->type == T_REAL && $3->type == T_ENTERO) {
                t->type = T_REAL;
                gen(O_ITOF, lookup_symbol_idx($3), -1, lookup_symbol_idx(t));
                gen(O_RESTA, lookup_symbol_idx(t), lookup_symbol_idx($1), lookup_symbol_idx(t));
                $$ = t;

        } else if ($1->type == T_REAL && $3->type == T_REAL) {
                t->type = T_REAL;
                gen(O_RESTA, lookup_symbol_idx($1), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;
        }
     };
     | exp_a TK_PRODUCTO exp_a{
        SymbolEntry* t = newTemp();
        if ($1->type == T_ENTERO && $3->type == T_ENTERO) {
                t->type = T_ENTERO;
                gen(O_MUL, lookup_symbol_idx($1), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;

        } else if ($1->type == T_ENTERO && $3->type == T_REAL) {
                t->type = T_REAL;
                gen(O_ITOF, lookup_symbol_idx($1), -1, lookup_symbol_idx(t));
                gen(O_MUL, lookup_symbol_idx(t), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;

        } else if ($1->type == T_REAL && $3->type == T_ENTERO) {
                t->type = T_REAL;
                gen(O_ITOF, lookup_symbol_idx($3), -1, lookup_symbol_idx(t));
                gen(O_MUL, lookup_symbol_idx(t), lookup_symbol_idx($1), lookup_symbol_idx(t));
                $$ = t;

        } else if ($1->type == T_REAL && $3->type == T_REAL) {
                t->type = T_REAL;
                gen(O_MUL, lookup_symbol_idx($1), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;
        }
     }
     | exp_a TK_DIVISION exp_a{
        SymbolEntry* t = newTemp();
        if  ($1->type == T_ENTERO && $3->type == T_ENTERO) {
                t->type = T_ENTERO;
                gen(O_DIVISION, lookup_symbol_idx($1), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;

        } else if ($1->type == T_ENTERO && $3->type == T_REAL) {
                t->type = T_REAL;
                gen(O_ITOF, lookup_symbol_idx($1), -1, lookup_symbol_idx(t));
                gen(O_DIVISION, lookup_symbol_idx(t), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;

        } else if ($1->type == T_REAL && $3->type == T_ENTERO) {
                t->type = T_REAL;
                gen(O_ITOF, lookup_symbol_idx($3), -1, lookup_symbol_idx(t));
                gen(O_DIVISION, lookup_symbol_idx(t), lookup_symbol_idx($1), lookup_symbol_idx(t));
                $$ = t;

        } else if ($1->type == T_REAL && $3->type == T_REAL) {
                t->type = T_REAL;
                gen(O_DIVISION, lookup_symbol_idx($1), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;
        }
        }
     | exp_a TK_MODULO exp_a{
        if ($1->type == T_ENTERO && $3->type == T_ENTERO) {
                SymbolEntry* t = newTemp();
                t->type = T_ENTERO;
                gen(O_MOD, lookup_symbol_idx($1), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;
        } else {
                error();
        }
       }
     | exp_a TK_DIV exp_a{
        if ($1->type == T_ENTERO && $3->type == T_ENTERO) {
                SymbolEntry* t = newTemp();
                t->type = T_ENTERO;
                gen(O_DIV, lookup_symbol_idx($1), lookup_symbol_idx($3), lookup_symbol_idx(t));
                $$ = t;
        } else {
                error();
        }
     }
     | TK_APERTURA_PARENTESIS exp_a TK_CIERRE_PARENTESIS{$$ = $2;}
     | operando{$$ = $1;}
     | TK_LITERAL_NUMERICO{} //Literal
     | TK_RESTA exp_a %prec UMENOS{
        // no hay inversion de valor real
        SymbolEntry* t = newTemp();
        t->type = $2->type;
        gen(UMENOS, lookup_symbol_idx($2), -1, lookup_symbol_idx(t));
        $$ = t;
     }
     ;


M:{$$.quad = nextquad(); };
N:{
        $$.next = makeList(nextquad());
        gen(O_GOTO, -1, -1, -1);
 };
 
exp_b: exp_b TK_Y M exp_b{
        backpatch($1.TRUE, $3.quad);
        $$.FALSE = merge($1.FALSE, $4.FALSE);
        //print false list
        for (int i = 0; i < $$.FALSE->size; i++) {
                printf("FALSE$$: %d\n", $$.FALSE->quads[i]);
        }
        $$.TRUE = $4.TRUE;
        for (int i = 0; i < $$.TRUE->size; i++) {
                printf("TRUE$$: %d\n", $$.TRUE->quads[i]);
        }
        
     } 
     | exp_b TK_O M exp_b{
        backpatch($1.FALSE, $3.quad);
        $$.TRUE = merge($1.TRUE, $4.TRUE);
        $$.FALSE = $4.FALSE;
        
     }
     | TK_NO exp_b %prec NEGACION{
        $$.FALSE = $2.TRUE;
        $$.TRUE = $2.FALSE;
     }
     | operando_b{
        $$.TRUE = makeList(nextquad());
        $$.FALSE = makeList(nextquad()+1);
        gen(O_IGUAL, lookup_symbol_idx($1), -2, -1);//-2=true
        gen(O_GOTO, -1, -1, -1);
        }
     | TK_VERDADERO{;} //Literales
     | TK_FALSO{;}     //Literales
     | expresion TK_OPREL expresion{
        $$.TRUE = makeList(nextquad());
        $$.FALSE = makeList(nextquad()+1);
        gen($2, lookup_symbol_idx($1), lookup_symbol_idx($3), -1);
        gen(O_GOTO, -1, -1, -1);
     }
     | TK_APERTURA_PARENTESIS exp_b TK_CIERRE_PARENTESIS{
        $$.TRUE = $2.TRUE;
        $$.FALSE = $2.FALSE;
     }
     ;

operando: TK_IDENTIFICADOR{$$ = lookup_symbol($1);}
          | operando TK_PUNTO operando {;}
          | operando TK_INICIO_ARRAY expresion TK_FINAL_ARRAY{;}
          | operando TK_REF{;}
          ;

operando_b: TK_IDENTIFICADOR_B{$$ = lookup_symbol($1);};
    
/*Seccion instrucciones*/

instrucciones: instruccion TK_SECUENCIAL instrucciones{$$ = $3;}
             | instruccion{$$=$1;}
             ;

instruccion: TK_CONTINUAR{;}
           | asignacion{;}
           | alternativa{;}
           | iteracion{backpatch($1.next, nextquad());}
           | accion_ll{;}
           ;

asignacion: operando TK_ASIGNACION expresion
        {
        if(consulta_tipo_TS($1->name) == $3->type){
                gen(O_ASIGNACION, lookup_symbol_idx($3), -1, lookup_symbol_idx($1));
        }
        else if(consulta_tipo_TS($1->name) == T_REAL && $3->type == T_ENTERO){
                gen(O_ITOF, lookup_symbol_idx($3), -1, lookup_symbol_idx($3));
                gen(O_ASIGNACION, lookup_symbol_idx($3), -1, lookup_symbol_idx($1));
        }
        else{
                error();
        }
        $$.next = noneList();
        }
          | operando_b TK_ASIGNACION exp_b{
                //print true and false lists
                for (int i = 0; i < $3.TRUE->size; i++) {
                        printf("TRUE: %d\n", $3.TRUE->quads[i]);
                }
                for (int i = 0; i < $3.FALSE->size; i++) {
                        printf("FALSE: %d\n", $3.FALSE->quads[i]);
                }
                backpatch($3.TRUE, nextquad());
                gen(O_ASIGNACION_TRUE, -1, -1, lookup_symbol_idx($1));
                gen(O_GOTO, -1, -1, nextquad()+2);
                backpatch($3.FALSE, nextquad());
                gen(O_ASIGNACION_FALSE, -1, -1, lookup_symbol_idx($1));
          }
          ;

alternativa: TK_SI exp_b TK_ENTONCES instrucciones lista_opciones TK_FSI{;};

lista_opciones: TK_SINO exp_b TK_ENTONCES instrucciones lista_opciones{;}
              | {;}
              ;

iteracion: it_cota_fija{$$ = $1;}
         | it_cota_exp{$$ = $1;}
         ;

it_cota_exp: TK_MIENTRAS M exp_b TK_HACER M instrucciones TK_FMIENTRAS
        {
                backpatch($3.TRUE, $5.quad);
                if(0 < ($6.next->size)){
                        backpatch($6.next, $2.quad);
                } else {
                        gen(O_GOTO,-1,-1, $2.quad);
                } 
                $$.next = $3.FALSE;
        };

it_cota_fija: TK_PARA TK_IDENTIFICADOR TK_ASIGNACION expresion TK_HASTA expresion N TK_HACER M instrucciones TK_FPARA{
            backpatch($10.next,nextquad());
            SymbolEntry* t = newTemp();
            gen(O_INCREMENTO, lookup_symbol_idx(lookup_symbol($2)), -1, lookup_symbol_idx(t));
            gen(O_ASIGNACION, lookup_symbol_idx(t), -1, lookup_symbol_idx(lookup_symbol($2)));
            gen(O_GOTO, -1, -1, nextquad()+2);
            backpatch($7.next, nextquad());
            gen(O_ASIGNACION,  lookup_symbol_idx($4), -1, lookup_symbol_idx(lookup_symbol($2)));
            gen(O_MENOR, lookup_symbol_idx(lookup_symbol($2)), lookup_symbol_idx($6), $9.quad);
            $$.next = makeList(nextquad());
            gen(O_GOTO,-1 ,-1 ,-1);
};

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
