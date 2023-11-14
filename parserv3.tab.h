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

#ifndef YY_YY_PARSERV3_TAB_H_INCLUDED
# define YY_YY_PARSERV3_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    TK_ALGORITMO = 258,            /* TK_ALGORITMO  */
    TK_IDENTIFICADOR = 259,        /* TK_IDENTIFICADOR  */
    TK_IDENTIFICADOR_B = 260,      /* TK_IDENTIFICADOR_B  */
    TK_FALGORITMO = 261,           /* TK_FALGORITMO  */
    TK_SECUENCIAL = 262,           /* TK_SECUENCIAL  */
    TK_COMENTARIO = 263,           /* TK_COMENTARIO  */
    TK_TIPO = 264,                 /* TK_TIPO  */
    TK_FTIPO = 265,                /* TK_FTIPO  */
    TK_CONST = 266,                /* TK_CONST  */
    TK_FCONST = 267,               /* TK_FCONST  */
    TK_VAR = 268,                  /* TK_VAR  */
    TK_FVAR = 269,                 /* TK_FVAR  */
    TK_CREACION_TIPO = 270,        /* TK_CREACION_TIPO  */
    TK_TUPLA = 271,                /* TK_TUPLA  */
    TK_FTUPLA = 272,               /* TK_FTUPLA  */
    TK_TABLA = 273,                /* TK_TABLA  */
    TK_FINAL_ARRAY = 274,          /* TK_FINAL_ARRAY  */
    TK_DE = 275,                   /* TK_DE  */
    TK_SUBRANGO = 276,             /* TK_SUBRANGO  */
    TK_TIPOBASE = 277,             /* TK_TIPOBASE  */
    TK_LITERAL_CARACTER = 278,     /* TK_LITERAL_CARACTER  */
    TK_DEFINICION_TIPO = 279,      /* TK_DEFINICION_TIPO  */
    TK_PUNTO = 280,                /* TK_PUNTO  */
    TK_INICIO_ARRAY = 281,         /* TK_INICIO_ARRAY  */
    TK_REF = 282,                  /* TK_REF  */
    TK_ENTRADA = 283,              /* TK_ENTRADA  */
    TK_SALIDA = 284,               /* TK_SALIDA  */
    TK_SEPARADOR = 285,            /* TK_SEPARADOR  */
    TK_SUMA = 286,                 /* TK_SUMA  */
    TK_RESTA = 287,                /* TK_RESTA  */
    TK_MODULO = 288,               /* TK_MODULO  */
    TK_DIV = 289,                  /* TK_DIV  */
    TK_PRODUCTO = 290,             /* TK_PRODUCTO  */
    TK_DIVISION = 291,             /* TK_DIVISION  */
    UMENOS = 292,                  /* UMENOS  */
    TK_LITERAL_NUMERICO = 293,     /* TK_LITERAL_NUMERICO  */
    TK_OPREL = 294,                /* TK_OPREL  */
    TK_APERTURA_PARENTESIS = 295,  /* TK_APERTURA_PARENTESIS  */
    TK_CIERRE_PARENTESIS = 296,    /* TK_CIERRE_PARENTESIS  */
    TK_O = 297,                    /* TK_O  */
    TK_Y = 298,                    /* TK_Y  */
    TK_VERDADERO = 299,            /* TK_VERDADERO  */
    TK_FALSO = 300,                /* TK_FALSO  */
    TK_LITERAL_CADENA = 301,       /* TK_LITERAL_CADENA  */
    TK_LITERAL_BOOLEANO = 302,     /* TK_LITERAL_BOOLEANO  */
    TK_NO = 303,                   /* TK_NO  */
    NEGACION = 304,                /* NEGACION  */
    TK_CONTINUAR = 305,            /* TK_CONTINUAR  */
    TK_ASIGNACION = 306,           /* TK_ASIGNACION  */
    TK_SI = 307,                   /* TK_SI  */
    TK_ENTONCES = 308,             /* TK_ENTONCES  */
    TK_FSI = 309,                  /* TK_FSI  */
    TK_SINO = 310,                 /* TK_SINO  */
    TK_MIENTRAS = 311,             /* TK_MIENTRAS  */
    TK_HACER = 312,                /* TK_HACER  */
    TK_FMIENTRAS = 313,            /* TK_FMIENTRAS  */
    TK_PARA = 314,                 /* TK_PARA  */
    TK_HASTA = 315,                /* TK_HASTA  */
    TK_FPARA = 316,                /* TK_FPARA  */
    TK_ACCION = 317,               /* TK_ACCION  */
    TK_FACCION = 318,              /* TK_FACCION  */
    TK_FUNCION = 319,              /* TK_FUNCION  */
    TK_DEV = 320,                  /* TK_DEV  */
    TK_FFUNCION = 321,             /* TK_FFUNCION  */
    TK_ENTRADA_SALIDA = 322        /* TK_ENTRADA_SALIDA  */
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


#endif /* !YY_YY_PARSERV3_TAB_H_INCLUDED  */
