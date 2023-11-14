/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_GRAMATICA_TAB_H_INCLUDED
# define YY_YY_GRAMATICA_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    TK_ENTERO = 258,               /* TK_ENTERO  */
    TK_REAL = 259,                 /* TK_REAL  */
    TK_ASIGNACION = 260,           /* TK_ASIGNACION  */
    TK_SEPARADOR = 261,            /* TK_SEPARADOR  */
    TK_DEFINICION = 262,           /* TK_DEFINICION  */
    TK_SUBRANGO = 263,             /* TK_SUBRANGO  */
    TK_ENTONCES = 264,             /* TK_ENTONCES  */
    TK_SUMA = 265,                 /* TK_SUMA  */
    TK_RESTA = 266,                /* TK_RESTA  */
    TK_DIV = 267,                  /* TK_DIV  */
    TK_PROD = 268,                 /* TK_PROD  */
    TK_MOD = 269,                  /* TK_MOD  */
    TK_R_MOD = 270,                /* TK_R_MOD  */
    TK_DIV_REA = 271,              /* TK_DIV_REA  */
    TK_IGUAL = 272,                /* TK_IGUAL  */
    TK_O = 273,                    /* TK_O  */
    TK_Y = 274,                    /* TK_Y  */
    TK_MAYOR = 275,                /* TK_MAYOR  */
    TK_MENOR = 276,                /* TK_MENOR  */
    TK_MENOR_IGUAL = 277,          /* TK_MENOR_IGUAL  */
    TK_MAYOR_IGUAL = 278,          /* TK_MAYOR_IGUAL  */
    TK_DISTINTO = 279,             /* TK_DISTINTO  */
    TK_ABRIR_TABLA = 280,          /* TK_ABRIR_TABLA  */
    TK_CERRAR_TABLA = 281,         /* TK_CERRAR_TABLA  */
    TK_BOOLEANO = 282,             /* TK_BOOLEANO  */
    TK_ABRIR_PARENTESIS = 283,     /* TK_ABRIR_PARENTESIS  */
    TK_CERRAR_PARENTESIS = 284,    /* TK_CERRAR_PARENTESIS  */
    TK_TIPO_BASE = 285,            /* TK_TIPO_BASE  */
    TK_PUNTO_COMA = 286,           /* TK_PUNTO_COMA  */
    TK_OPREL = 287,                /* TK_OPREL  */
    TK_PUNTO = 288,                /* TK_PUNTO  */
    TK_CARACTER = 289,             /* TK_CARACTER  */
    TK_CADENA = 290,               /* TK_CADENA  */
    TK_COMENTARIO = 291,           /* TK_COMENTARIO  */
    TK_ACCION = 292,               /* TK_ACCION  */
    TK_ALGORITMO = 293,            /* TK_ALGORITMO  */
    TK_CONST = 294,                /* TK_CONST  */
    TK_CONTINUAR = 295,            /* TK_CONTINUAR  */
    TK_DE = 296,                   /* TK_DE  */
    TK_DEV = 297,                  /* TK_DEV  */
    TK_ENT = 298,                  /* TK_ENT  */
    TK_ES = 299,                   /* TK_ES  */
    TK_FACCION = 300,              /* TK_FACCION  */
    TK_FALGORITMO = 301,           /* TK_FALGORITMO  */
    TK_FALSO = 302,                /* TK_FALSO  */
    TK_FCONST = 303,               /* TK_FCONST  */
    TK_FFUNCION = 304,             /* TK_FFUNCION  */
    TK_FMIENTRAS = 305,            /* TK_FMIENTRAS  */
    TK_FPARA = 306,                /* TK_FPARA  */
    TK_FSI = 307,                  /* TK_FSI  */
    TK_FTIPO = 308,                /* TK_FTIPO  */
    TK_FTUPLA = 309,               /* TK_FTUPLA  */
    TK_FUNCION = 310,              /* TK_FUNCION  */
    TK_FVAR = 311,                 /* TK_FVAR  */
    TK_HACER = 312,                /* TK_HACER  */
    TK_HASTA = 313,                /* TK_HASTA  */
    TK_MIENTRAS = 314,             /* TK_MIENTRAS  */
    TK_NO = 315,                   /* TK_NO  */
    TK_PARA = 316,                 /* TK_PARA  */
    TK_REF = 317,                  /* TK_REF  */
    TK_SAL = 318,                  /* TK_SAL  */
    TK_SI = 319,                   /* TK_SI  */
    TK_SINOSI = 320,               /* TK_SINOSI  */
    TK_TABLA = 321,                /* TK_TABLA  */
    TK_TIPO = 322,                 /* TK_TIPO  */
    TK_TUPLA = 323,                /* TK_TUPLA  */
    TK_VAR = 324,                  /* TK_VAR  */
    TK_VERDADERO = 325,            /* TK_VERDADERO  */
    TK_R_REAL = 326,               /* TK_R_REAL  */
    TK_R_BOOLEANO = 327,           /* TK_R_BOOLEANO  */
    TK_R_CADENA = 328,             /* TK_R_CADENA  */
    TK_R_ENTERO = 329,             /* TK_R_ENTERO  */
    TK_IDENTIFICADOR = 330,        /* TK_IDENTIFICADOR  */
    TK_LITERAL_CARACTER = 331,     /* TK_LITERAL_CARACTER  */
    TK_LITERAL_NUMERICO = 332,     /* TK_LITERAL_NUMERICO  */
    TK_LITERAL = 333               /* TK_LITERAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_GRAMATICA_TAB_H_INCLUDED  */
