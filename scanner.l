%option yywrap

%{
#include "tabla.h"
#include "commons.h"
#include <string.h>
#include "parserv3.tab.h"
%}

ESPACIO [ ]+
LETRA    [a-zA-Z]
DIGITO       [0-9]
SALTOS_DE_LINEA ([\r\n]|[\t\n])+
LETRA_O_DIGITO {LETRA}|{DIGITO}
ID {LETRA}{LETRA_O_DIGITO}*
BOOL_ID B_{ID}

/*Tipos base del lenguaje*/
ENTERO [+-]?{DIGITO}+([eE]{DIGITO}+)?
DECIMAL [+-]?{DIGITO}+(.{DIGITO}+)?([eE]{DIGITO}+)?
BOOLEANO_VERDADERO (?i:verdadero)
BOOLEANO_FALSO (?i:falso)
CARACTER \".\"
CADENA '([^']|(\/')|\n)*'

/*Comentarios*/
COMENTARIO \{([^\}]|(\/\})|\n)*\}

/*Palabras reservadas*/
ACCION (?i:accion)
FACCION (?i:faccion)

ALGORITMO (?i:algoritmo)
FALGORITMO (?i:falgoritmo)

FUNCION (?i:funcion)
FFUNCION (?i:ffuncion)

ENTRADA (?i:ent)
ENTRADA_SALIDA (?i:e\/s)
SALIDA (?i:sal)

CONSTANTE (?i:const)
FCONSTANTE (?i:fconst)

VAR (?i:var)
FVAR (?i:fvar)

TUPLA (?i:tupla)
FTUPLA (?i:ftupla)

MIENTRAS (?i:mientras)
FMIENTRAS (?i:fmientras)
PARA (?i:para)
FPARA (?i:fpara)
HASTA (?i:hasta)
HACER (?i:hacer)
CONTINUAR (?i:continuar)

SI (?i:si)
FSI (?i:fsi)
NO_SI \[\]   
ENTONCES ->

Y (?i:y)|&&
O (?i:o)|\|\|
NEGACION (?i:no)|!

TIPO (?i:tipo)
FTIPO (?i:ftipo)
NT_REAL (?i:real)
NT_BOOLEANO (?i:booleano)
NT_CADENA (?i:cadena)
NT_CARACTER (?i:caracter)
NT_ENTERO (?i:entero)
NT_TABLA (?i:tabla)
DECLARACION_TIPO {NT_BOOLEANO}|{NT_REAL}|{NT_CADENA}|{NT_CARACTER}|{NT_ENTERO}|{NT_TABLA}

DE (?i:de)
DEV (?i:dev)
REF (?i:ref)

/*Operadores*/
OP_MODULO (?i:mod)
OP_SUMA \+
OP_RESTA -
OP_MULTIPLICACION \*
OP_DIVISION \/
OP_DIV (?i:div)

OP_ASIGNACION :=
OP_CREACION_DE_TIPO =
OP_DEFINICION_DE_TIPO :
OP_SECUENCIAL ;
OP_SUBRANGO \.\.
OP_SUBACCESO \.

OP_SEPARADOR ,
OP_INICIO_DE_ARRAY \[
OP_FIN_DE_ARRAY \]
OP_APERTURA_PARENTESIS \(
OP_CIERRE_PARENTESIS \)

COMP_IGUALDAD ==
COMP_DIFERENCIA !=|<>
COMP_MENOR_IGUAL <=
COMP_MAYOR_IGUAL >=
COMP_MENOR <
COMP_MAYOR >
OP_COMPARADOR {COMP_IGUALDAD}|{COMP_DIFERENCIA}|{COMP_MENOR_IGUAL}|{COMP_MAYOR_IGUAL}|{COMP_MENOR}|{COMP_MAYOR}



%%

{ESPACIO}                       {;}
{SALTOS_DE_LINEA}               {;} 
{OP_ASIGNACION}                 {return TK_ASIGNACION;}
{OP_CREACION_DE_TIPO}           {return TK_CREACION_TIPO;}
{OP_SECUENCIAL}                 {return TK_SECUENCIAL;}
{OP_SEPARADOR}                  {return TK_SEPARADOR;}
{OP_SUBRANGO}                   {return TK_SUBRANGO;}
{OP_SUBACCESO}                  {return TK_PUNTO;}
{OP_INICIO_DE_ARRAY}            {return TK_INICIO_ARRAY ;}
{OP_FIN_DE_ARRAY}               {return TK_FINAL_ARRAY ;}
{OP_DEFINICION_DE_TIPO}         {return TK_DEFINICION_TIPO ;}
{OP_APERTURA_PARENTESIS}        {return TK_APERTURA_PARENTESIS ;}
{OP_CIERRE_PARENTESIS}          {return TK_CIERRE_PARENTESIS ;}
{OP_SUMA}                       {return TK_SUMA ;}
{OP_RESTA}                      {return TK_RESTA ;}
{OP_MODULO}                     {return TK_MODULO ;}
{OP_MULTIPLICACION}             {return TK_PRODUCTO ;}
{OP_DIVISION}                   {return TK_ASIGNACION ;}
{OP_COMPARADOR}                 {return TK_OPREL ;}

{ALGORITMO}                     {return TK_ALGORITMO ;}
{FALGORITMO}                    {return TK_FALGORITMO ;}
{ACCION}                        {return TK_ACCION ;}
{FACCION}                       {return TK_FACCION ;}
{FUNCION}                       {return TK_FUNCION ;}
{FFUNCION}                      {return TK_FFUNCION ;}
{ENTRADA}                       {return TK_ENTRADA ;}
{SALIDA}                        {return TK_SALIDA ;}
{ENTRADA_SALIDA}                {return TK_ENTRADA_SALIDA ;}

{MIENTRAS}                      {return TK_MIENTRAS ;}
{FMIENTRAS}                     {return TK_FMIENTRAS ;}
{PARA}                          {return TK_PARA ;}
{FPARA}                         {return TK_FPARA ;}
{HACER}                         {return TK_HACER ;}
{HASTA}                         {return TK_HASTA ;}
{CONTINUAR}                     {return TK_CONTINUAR ;}

{VAR}                           {return TK_VAR ;}
{FVAR}                          {return TK_FVAR ;}

{CONSTANTE}                     {return TK_CONST ;}
{FCONSTANTE}                    {return TK_FCONST ;}

{TUPLA}                         {return TK_TUPLA ;}
{FTUPLA}                        {return TK_FTUPLA ;}

{DE}                            {return TK_DE ;}
{DEV}                           {return TK_DEV ;}
{OP_DIV}                           {return TK_DIV ;}
{REF}                           {return TK_REF ;}

{SI}                            {return TK_SI ;}
{NO_SI}                         {return TK_SINO ;} 
{ENTONCES}                      {return TK_ENTONCES ;}
{FSI}                           {return TK_FSI ;}

{Y}                             {return TK_Y ;}
{O}                             {return TK_O ;}
{NEGACION}                      {return TK_NO ;}

{NT_ENTERO}                     {yylval.paraNombreTipo = T_ENTERO;
                                 return TK_TIPOBASE;}
{NT_REAL}                       {yylval.paraNombreTipo = T_REAL;
                                 return TK_TIPOBASE;}
{NT_BOOLEANO}                   {yylval.paraNombreTipo = T_BOOLEANO;
                                 return TK_TIPOBASE;}
{NT_CADENA}                     {yylval.paraNombreTipo = T_CADENA;
                                 return TK_TIPOBASE;}
{NT_CARACTER}                   {yylval.paraNombreTipo = T_CARACTER;
                                 return TK_TIPOBASE;}
{NT_TABLA}                      {yylval.paraNombreTipo = 6;
                                 return TK_TIPOBASE;}

{TIPO}                          {return TK_TIPO ;}
{FTIPO}                         {return TK_FTIPO ;}

{CARACTER}                      {yylval.paraCadena = strdup(yytext);
                                 return TK_LITERAL_CARACTER;}
{CADENA}                        {yylval.paraCadena = strdup(yytext);
                                 return TK_LITERAL_CADENA;}
{BOOLEANO_VERDADERO}            {//yylval.paraBooleano = TRUE;//Literal
                                 return TK_LITERAL_BOOLEANO;}
{BOOLEANO_FALSO}                {//yylval.paraBooleano = FALSE;//Literal
                                 return TK_LITERAL_BOOLEANO;}
{ENTERO}                        {yylval.paraEntero = atoi(yytext);
                                 return TK_LITERAL_NUMERICO;}
{DECIMAL}                       {yylval.paraReal = atof(yytext);
                                 return TK_LITERAL_NUMERICO;}

{COMENTARIO}                    {return TK_COMENTARIO;}

{ID}                            {yylval.paraCadena = strdup(yytext);
                                 return TK_IDENTIFICADOR;}

{BOOL_ID}                       {yylval.paraCadena = strdup(yytext);
                                 return TK_IDENTIFICADOR_B;}

.                               {;}

%%