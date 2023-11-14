/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "gramatica.y"

#define YYDEBUG 1
#include <ctype.h>
#include <stdio.h>

int yylex();
void yyerror(const char *s);
extern FILE* yyin;

#line 81 "gramatica.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "gramatica.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_ENTERO = 3,                  /* TK_ENTERO  */
  YYSYMBOL_TK_REAL = 4,                    /* TK_REAL  */
  YYSYMBOL_TK_ASIGNACION = 5,              /* TK_ASIGNACION  */
  YYSYMBOL_TK_SEPARADOR = 6,               /* TK_SEPARADOR  */
  YYSYMBOL_TK_DEFINICION = 7,              /* TK_DEFINICION  */
  YYSYMBOL_TK_SUBRANGO = 8,                /* TK_SUBRANGO  */
  YYSYMBOL_TK_ENTONCES = 9,                /* TK_ENTONCES  */
  YYSYMBOL_TK_SUMA = 10,                   /* TK_SUMA  */
  YYSYMBOL_TK_RESTA = 11,                  /* TK_RESTA  */
  YYSYMBOL_TK_DIV = 12,                    /* TK_DIV  */
  YYSYMBOL_TK_PROD = 13,                   /* TK_PROD  */
  YYSYMBOL_TK_MOD = 14,                    /* TK_MOD  */
  YYSYMBOL_TK_R_MOD = 15,                  /* TK_R_MOD  */
  YYSYMBOL_TK_DIV_REA = 16,                /* TK_DIV_REA  */
  YYSYMBOL_TK_IGUAL = 17,                  /* TK_IGUAL  */
  YYSYMBOL_TK_O = 18,                      /* TK_O  */
  YYSYMBOL_TK_Y = 19,                      /* TK_Y  */
  YYSYMBOL_TK_MAYOR = 20,                  /* TK_MAYOR  */
  YYSYMBOL_TK_MENOR = 21,                  /* TK_MENOR  */
  YYSYMBOL_TK_MENOR_IGUAL = 22,            /* TK_MENOR_IGUAL  */
  YYSYMBOL_TK_MAYOR_IGUAL = 23,            /* TK_MAYOR_IGUAL  */
  YYSYMBOL_TK_DISTINTO = 24,               /* TK_DISTINTO  */
  YYSYMBOL_TK_ABRIR_TABLA = 25,            /* TK_ABRIR_TABLA  */
  YYSYMBOL_TK_CERRAR_TABLA = 26,           /* TK_CERRAR_TABLA  */
  YYSYMBOL_TK_BOOLEANO = 27,               /* TK_BOOLEANO  */
  YYSYMBOL_TK_ABRIR_PARENTESIS = 28,       /* TK_ABRIR_PARENTESIS  */
  YYSYMBOL_TK_CERRAR_PARENTESIS = 29,      /* TK_CERRAR_PARENTESIS  */
  YYSYMBOL_TK_TIPO_BASE = 30,              /* TK_TIPO_BASE  */
  YYSYMBOL_TK_PUNTO_COMA = 31,             /* TK_PUNTO_COMA  */
  YYSYMBOL_TK_OPREL = 32,                  /* TK_OPREL  */
  YYSYMBOL_TK_PUNTO = 33,                  /* TK_PUNTO  */
  YYSYMBOL_TK_CARACTER = 34,               /* TK_CARACTER  */
  YYSYMBOL_TK_CADENA = 35,                 /* TK_CADENA  */
  YYSYMBOL_TK_COMENTARIO = 36,             /* TK_COMENTARIO  */
  YYSYMBOL_TK_ACCION = 37,                 /* TK_ACCION  */
  YYSYMBOL_TK_ALGORITMO = 38,              /* TK_ALGORITMO  */
  YYSYMBOL_TK_CONST = 39,                  /* TK_CONST  */
  YYSYMBOL_TK_CONTINUAR = 40,              /* TK_CONTINUAR  */
  YYSYMBOL_TK_DE = 41,                     /* TK_DE  */
  YYSYMBOL_TK_DEV = 42,                    /* TK_DEV  */
  YYSYMBOL_TK_ENT = 43,                    /* TK_ENT  */
  YYSYMBOL_TK_ES = 44,                     /* TK_ES  */
  YYSYMBOL_TK_FACCION = 45,                /* TK_FACCION  */
  YYSYMBOL_TK_FALGORITMO = 46,             /* TK_FALGORITMO  */
  YYSYMBOL_TK_FALSO = 47,                  /* TK_FALSO  */
  YYSYMBOL_TK_FCONST = 48,                 /* TK_FCONST  */
  YYSYMBOL_TK_FFUNCION = 49,               /* TK_FFUNCION  */
  YYSYMBOL_TK_FMIENTRAS = 50,              /* TK_FMIENTRAS  */
  YYSYMBOL_TK_FPARA = 51,                  /* TK_FPARA  */
  YYSYMBOL_TK_FSI = 52,                    /* TK_FSI  */
  YYSYMBOL_TK_FTIPO = 53,                  /* TK_FTIPO  */
  YYSYMBOL_TK_FTUPLA = 54,                 /* TK_FTUPLA  */
  YYSYMBOL_TK_FUNCION = 55,                /* TK_FUNCION  */
  YYSYMBOL_TK_FVAR = 56,                   /* TK_FVAR  */
  YYSYMBOL_TK_HACER = 57,                  /* TK_HACER  */
  YYSYMBOL_TK_HASTA = 58,                  /* TK_HASTA  */
  YYSYMBOL_TK_MIENTRAS = 59,               /* TK_MIENTRAS  */
  YYSYMBOL_TK_NO = 60,                     /* TK_NO  */
  YYSYMBOL_TK_PARA = 61,                   /* TK_PARA  */
  YYSYMBOL_TK_REF = 62,                    /* TK_REF  */
  YYSYMBOL_TK_SAL = 63,                    /* TK_SAL  */
  YYSYMBOL_TK_SI = 64,                     /* TK_SI  */
  YYSYMBOL_TK_SINOSI = 65,                 /* TK_SINOSI  */
  YYSYMBOL_TK_TABLA = 66,                  /* TK_TABLA  */
  YYSYMBOL_TK_TIPO = 67,                   /* TK_TIPO  */
  YYSYMBOL_TK_TUPLA = 68,                  /* TK_TUPLA  */
  YYSYMBOL_TK_VAR = 69,                    /* TK_VAR  */
  YYSYMBOL_TK_VERDADERO = 70,              /* TK_VERDADERO  */
  YYSYMBOL_TK_R_REAL = 71,                 /* TK_R_REAL  */
  YYSYMBOL_TK_R_BOOLEANO = 72,             /* TK_R_BOOLEANO  */
  YYSYMBOL_TK_R_CADENA = 73,               /* TK_R_CADENA  */
  YYSYMBOL_TK_R_ENTERO = 74,               /* TK_R_ENTERO  */
  YYSYMBOL_TK_IDENTIFICADOR = 75,          /* TK_IDENTIFICADOR  */
  YYSYMBOL_TK_LITERAL_CARACTER = 76,       /* TK_LITERAL_CARACTER  */
  YYSYMBOL_TK_LITERAL_NUMERICO = 77,       /* TK_LITERAL_NUMERICO  */
  YYSYMBOL_TK_LITERAL = 78,                /* TK_LITERAL  */
  YYSYMBOL_YYACCEPT = 79,                  /* $accept  */
  YYSYMBOL_desc_algoritmo = 80,            /* desc_algoritmo  */
  YYSYMBOL_cabecera_alg = 81,              /* cabecera_alg  */
  YYSYMBOL_bloque_alg = 82,                /* bloque_alg  */
  YYSYMBOL_decl_globales = 83,             /* decl_globales  */
  YYSYMBOL_decl_a_f = 84,                  /* decl_a_f  */
  YYSYMBOL_bloque = 85,                    /* bloque  */
  YYSYMBOL_declaraciones = 86,             /* declaraciones  */
  YYSYMBOL_decl_tipo = 87,                 /* decl_tipo  */
  YYSYMBOL_decl_cte = 88,                  /* decl_cte  */
  YYSYMBOL_decl_var = 89,                  /* decl_var  */
  YYSYMBOL_lista_d_tipo = 90,              /* lista_d_tipo  */
  YYSYMBOL_d_tipo = 91,                    /* d_tipo  */
  YYSYMBOL_expresion_t = 92,               /* expresion_t  */
  YYSYMBOL_lista_campos = 93,              /* lista_campos  */
  YYSYMBOL_lista_d_cte = 94,               /* lista_d_cte  */
  YYSYMBOL_lista_d_var = 95,               /* lista_d_var  */
  YYSYMBOL_lista_id = 96,                  /* lista_id  */
  YYSYMBOL_decl_ent_sal = 97,              /* decl_ent_sal  */
  YYSYMBOL_decl_ent = 98,                  /* decl_ent  */
  YYSYMBOL_decl_sal = 99,                  /* decl_sal  */
  YYSYMBOL_exp_a = 100,                    /* exp_a  */
  YYSYMBOL_expresion = 101,                /* expresion  */
  YYSYMBOL_operando = 102,                 /* operando  */
  YYSYMBOL_instrucciones = 103,            /* instrucciones  */
  YYSYMBOL_instruccion = 104,              /* instruccion  */
  YYSYMBOL_asignacion = 105,               /* asignacion  */
  YYSYMBOL_alternativa = 106,              /* alternativa  */
  YYSYMBOL_lista_opciones = 107,           /* lista_opciones  */
  YYSYMBOL_iteracion = 108,                /* iteracion  */
  YYSYMBOL_it_cota_fija = 109,             /* it_cota_fija  */
  YYSYMBOL_it_cota_exp = 110,              /* it_cota_exp  */
  YYSYMBOL_accion_d = 111,                 /* accion_d  */
  YYSYMBOL_funcion_d = 112,                /* funcion_d  */
  YYSYMBOL_a_cabecera = 113,               /* a_cabecera  */
  YYSYMBOL_f_cabecera = 114,               /* f_cabecera  */
  YYSYMBOL_d_par_form = 115,               /* d_par_form  */
  YYSYMBOL_d_p_form = 116,                 /* d_p_form  */
  YYSYMBOL_accion_ll = 117,                /* accion_ll  */
  YYSYMBOL_funcion_ll = 118,               /* funcion_ll  */
  YYSYMBOL_l_ll = 119                      /* l_ll  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if 1

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* 1 */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   252

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  79
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  221

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   333


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    84,    84,    86,    88,    90,    91,    92,    94,    95,
      96,    98,   100,   101,   102,   103,   105,   107,   109,   111,
     112,   114,   115,   116,   117,   118,   119,   121,   122,   124,
     125,   127,   128,   130,   131,   132,   134,   135,   137,   138,
     139,   141,   143,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   163,
     164,   166,   167,   168,   169,   171,   172,   174,   175,   176,
     177,   178,   180,   182,   184,   185,   187,   188,   190,   192,
     194,   196,   198,   200,   202,   203,   205,   206,   207,   209,
     211,   213,   214
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if 1
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "TK_ENTERO", "TK_REAL",
  "TK_ASIGNACION", "TK_SEPARADOR", "TK_DEFINICION", "TK_SUBRANGO",
  "TK_ENTONCES", "TK_SUMA", "TK_RESTA", "TK_DIV", "TK_PROD", "TK_MOD",
  "TK_R_MOD", "TK_DIV_REA", "TK_IGUAL", "TK_O", "TK_Y", "TK_MAYOR",
  "TK_MENOR", "TK_MENOR_IGUAL", "TK_MAYOR_IGUAL", "TK_DISTINTO",
  "TK_ABRIR_TABLA", "TK_CERRAR_TABLA", "TK_BOOLEANO",
  "TK_ABRIR_PARENTESIS", "TK_CERRAR_PARENTESIS", "TK_TIPO_BASE",
  "TK_PUNTO_COMA", "TK_OPREL", "TK_PUNTO", "TK_CARACTER", "TK_CADENA",
  "TK_COMENTARIO", "TK_ACCION", "TK_ALGORITMO", "TK_CONST", "TK_CONTINUAR",
  "TK_DE", "TK_DEV", "TK_ENT", "TK_ES", "TK_FACCION", "TK_FALGORITMO",
  "TK_FALSO", "TK_FCONST", "TK_FFUNCION", "TK_FMIENTRAS", "TK_FPARA",
  "TK_FSI", "TK_FTIPO", "TK_FTUPLA", "TK_FUNCION", "TK_FVAR", "TK_HACER",
  "TK_HASTA", "TK_MIENTRAS", "TK_NO", "TK_PARA", "TK_REF", "TK_SAL",
  "TK_SI", "TK_SINOSI", "TK_TABLA", "TK_TIPO", "TK_TUPLA", "TK_VAR",
  "TK_VERDADERO", "TK_R_REAL", "TK_R_BOOLEANO", "TK_R_CADENA",
  "TK_R_ENTERO", "TK_IDENTIFICADOR", "TK_LITERAL_CARACTER",
  "TK_LITERAL_NUMERICO", "TK_LITERAL", "$accept", "desc_algoritmo",
  "cabecera_alg", "bloque_alg", "decl_globales", "decl_a_f", "bloque",
  "declaraciones", "decl_tipo", "decl_cte", "decl_var", "lista_d_tipo",
  "d_tipo", "expresion_t", "lista_campos", "lista_d_cte", "lista_d_var",
  "lista_id", "decl_ent_sal", "decl_ent", "decl_sal", "exp_a", "expresion",
  "operando", "instrucciones", "instruccion", "asignacion", "alternativa",
  "lista_opciones", "iteracion", "it_cota_fija", "it_cota_exp", "accion_d",
  "funcion_d", "a_cabecera", "f_cabecera", "d_par_form", "d_p_form",
  "accion_ll", "funcion_ll", "l_ll", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-113)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-24)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -22,   -54,    25,    -2,  -113,   -12,     3,    19,   -16,    70,
     -12,   -12,    97,   -11,    99,    77,    58,    91,   124,    95,
     -16,   -16,   -16,    82,    87,    30,    70,    70,  -113,  -113,
      96,   148,    -6,   149,   169,   127,   175,  -113,  -113,  -113,
     121,   109,   121,   157,     6,  -113,   155,  -113,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,   159,   -16,   160,   -16,
      58,    58,   153,   129,  -113,  -113,  -113,   164,  -113,   121,
     121,  -113,  -113,   121,    -6,   165,   122,  -113,     2,  -113,
    -113,   172,   199,   201,   177,   -18,  -113,  -113,    58,   179,
     101,   187,    17,   216,     4,   121,   121,   121,   147,  -113,
      95,    33,   178,    58,   182,  -113,  -113,  -113,  -113,     3,
    -113,   177,   189,   201,  -113,    64,   218,   173,   121,    19,
      64,   121,   121,   121,   121,   121,   121,   121,   121,   121,
    -113,  -113,    78,   195,    95,   121,    95,    20,   200,   177,
     126,  -113,   -14,  -113,    58,    58,    58,   202,   197,  -113,
     203,   121,  -113,  -113,   222,    -6,  -113,   204,  -113,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,  -113,    58,
      58,   184,   -20,   170,   121,  -113,  -113,   229,   230,   231,
     208,    33,   198,    -4,    64,   210,  -113,  -113,  -113,  -113,
     121,   121,   190,  -113,    -6,    -6,    -6,  -113,  -113,    -6,
    -113,   217,   122,    63,    11,  -113,  -113,  -113,  -113,   213,
     205,  -113,    95,    95,  -113,    -6,   194,   170,  -113,  -113,
    -113
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    32,    20,    15,    10,
       7,     7,     0,     0,     0,     0,    35,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    37,     0,     0,     2,     4,    67,
       0,     0,     0,    61,     0,    11,    66,    68,    69,    70,
      76,    77,    71,    12,    13,    14,     0,    15,     0,    15,
      35,    35,     0,    38,    40,     8,     9,     0,    17,     0,
       0,    26,    57,     0,     0,     0,    30,    56,    61,    28,
      51,     0,     0,    59,    27,    50,    60,    16,     0,     0,
       0,    61,     0,     0,     0,     0,     0,     0,     0,    64,
       0,    85,     0,    35,     0,    41,    42,     3,    39,    32,
      52,     0,    59,    55,    25,     0,     0,     0,     0,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      36,    18,    61,     0,     0,     0,     0,    92,     0,    72,
       0,    61,    62,    65,     0,     0,     0,     0,     0,    80,
       0,     0,    31,    49,     0,     0,    21,     0,    19,    24,
      43,    44,    48,    45,    47,    46,    54,    53,    58,    35,
      35,     0,     0,    75,     0,    89,    63,     0,     0,     0,
       0,    85,     0,     0,     0,     0,    90,    33,    34,    79,
       0,     0,     0,    91,     0,     0,     0,    82,    84,     0,
      81,     0,    30,     0,     0,    73,    86,    88,    87,     0,
       0,    29,     0,     0,    83,     0,     0,    75,    22,    78,
      74
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -113,  -113,  -113,  -113,   136,   146,    51,   144,   133,   140,
    -113,   128,   -73,  -112,    46,   141,   -42,   -79,  -113,  -113,
     186,   -23,   -38,   -19,   -94,  -113,  -113,  -113,    34,  -113,
    -113,  -113,  -113,  -113,  -113,  -113,    71,  -113,  -113,  -113,
    -111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    15,    81,    82,   117,    13,    35,    36,    62,    63,
      64,    83,    84,    85,    45,    46,    47,    48,   192,    49,
      50,    51,    26,    27,    57,    59,   147,   148,    52,    86,
     138
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,   114,    92,   154,    94,    69,   143,   157,   159,   130,
      97,    96,   129,   136,    97,    98,     1,   133,   105,   106,
     213,     3,    70,     6,    71,     4,   174,     6,   129,     5,
     118,   111,   111,   -23,    97,   111,   129,    31,   190,    98,
     171,    72,   173,   129,    99,   200,   110,   112,    99,   129,
     113,     7,   129,    16,    73,     7,    74,   137,   139,   140,
      75,   150,    76,   193,    77,   177,   178,   179,    99,    78,
      79,    80,   201,    60,   134,    69,   144,   145,    12,   142,
     137,    44,   185,   111,   111,   111,   111,   111,   111,   111,
     111,   168,    70,    61,    14,   129,   146,   172,   160,   161,
     162,   163,   164,   165,   166,   167,   118,    23,   102,   169,
     104,    72,    69,   183,    30,    44,    32,    44,   216,   217,
     212,   206,   207,   208,    73,    24,   209,   187,   188,    70,
      33,    71,    69,    34,    77,    39,   137,    37,    10,    91,
      79,    80,   218,    10,    10,    11,    28,    29,    72,    70,
      11,    11,   203,   204,    40,   176,    41,    56,   129,    42,
      38,    73,    58,    74,    53,    54,    55,    75,    72,    76,
      43,    77,    65,    66,    67,    88,   132,    79,    80,    68,
      87,    73,    90,    89,    93,    95,   100,   101,   103,   107,
     115,    77,    61,    44,    44,   109,    91,   116,    80,   121,
     122,   123,   124,   119,   125,   126,   120,   127,   128,   129,
     131,   121,   122,   123,   124,   118,   125,   126,   153,   127,
     128,   135,   141,   149,   151,   155,   170,   156,   181,   175,
     184,   180,   182,   186,   189,   191,   194,   195,   196,   197,
     199,   202,   205,   210,   214,   219,   215,   158,   211,   108,
     152,   220,   198
};

static const yytype_uint8 yycheck[] =
{
      19,    74,    40,   115,    42,    11,   100,   118,   120,    88,
      28,     5,    32,     9,    28,    33,    38,    90,    60,    61,
       9,    75,    28,    39,    30,     0,     6,    39,    32,    31,
      28,    69,    70,    31,    28,    73,    32,    48,    58,    33,
     134,    47,   136,    32,    62,    49,    69,    70,    62,    32,
      73,    67,    32,    69,    60,    67,    62,    95,    96,    97,
      66,   103,    68,   174,    70,   144,   145,   146,    62,    75,
      76,    77,   184,    43,    57,    11,    43,    44,    75,    98,
     118,   100,   155,   121,   122,   123,   124,   125,   126,   127,
     128,   129,    28,    63,    75,    32,    63,   135,   121,   122,
     123,   124,   125,   126,   127,   128,    28,    37,    57,    31,
      59,    47,    11,   151,    17,   134,    17,   136,   212,   213,
      57,   194,   195,   196,    60,    55,   199,   169,   170,    28,
      53,    30,    11,    75,    70,    40,   174,    46,     5,    75,
      76,    77,   215,    10,    11,     5,    10,    11,    47,    28,
      10,    11,   190,   191,    59,    29,    61,    75,    32,    64,
      36,    60,    75,    62,    20,    21,    22,    66,    47,    68,
      75,    70,    26,    27,    78,     6,    75,    76,    77,    31,
      31,    60,     7,    56,    75,    28,    31,    28,    28,    36,
      25,    70,    63,   212,   213,    31,    75,    75,    77,    10,
      11,    12,    13,    31,    15,    16,     7,    18,    19,    32,
      31,    10,    11,    12,    13,    28,    15,    16,    29,    18,
      19,     5,    75,    45,    42,     7,    31,    54,    31,    29,
       8,    29,    29,    29,    50,    65,     7,     7,     7,    31,
      42,    31,    52,    26,    31,    51,    41,   119,   202,    63,
     109,   217,   181
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    38,    80,    75,     0,    31,    39,    67,    81,    83,
      87,    88,    75,    94,    75,    90,    69,    82,    85,    86,
      87,    88,    89,    37,    55,    84,   111,   112,    83,    83,
      17,    48,    17,    53,    75,    95,    96,    46,    36,    40,
      59,    61,    64,    75,   102,   103,   104,   105,   106,   108,
     109,   110,   117,    86,    86,    86,    75,   113,    75,   114,
      43,    63,    97,    98,    99,    84,    84,    78,    31,    11,
      28,    30,    47,    60,    62,    66,    68,    70,    75,    76,
      77,    91,    92,   100,   101,   102,   118,    31,     6,    56,
       7,    75,   101,    75,   101,    28,     5,    28,    33,    62,
      31,    28,    85,    28,    85,    95,    95,    36,    99,    31,
     100,   101,   100,   100,    91,    25,    75,    93,    28,    31,
       7,    10,    11,    12,    13,    15,    16,    18,    19,    32,
      96,    31,    75,    91,    57,     5,     9,   101,   119,   101,
     101,    75,   102,   103,    43,    44,    63,   115,   116,    45,
      95,    42,    94,    29,    92,     7,    54,   119,    90,    92,
     100,   100,   100,   100,   100,   100,   100,   100,   101,    31,
      31,   103,   101,   103,     6,    29,    29,    96,    96,    96,
      29,    31,    29,   101,     8,    91,    29,    95,    95,    50,
      58,    65,   107,   119,     7,     7,     7,    31,   115,    42,
      49,    92,    31,   101,   101,    52,    91,    91,    91,    91,
      26,    93,    57,     9,    31,    41,   103,   103,    91,    51,
     107
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    79,    80,    81,    82,    83,    83,    83,    84,    84,
      84,    85,    86,    86,    86,    86,    87,    88,    89,    90,
      90,    91,    91,    91,    91,    91,    91,    92,    92,    93,
      93,    94,    94,    95,    95,    95,    96,    96,    97,    97,
      97,    98,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     101,   102,   102,   102,   102,   103,   103,   104,   104,   104,
     104,   104,   105,   106,   107,   107,   108,   108,   109,   110,
     111,   112,   113,   114,   115,   115,   116,   116,   116,   117,
     118,   119,   119
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     6,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     0,     5,     5,     0,     3,     1,     1,     2,
       1,     2,     2,     3,     3,     3,     3,     3,     3,     3,
       1,     1,     2,     3,     3,     2,     1,     1,     3,     1,
       1,     1,     3,     4,     2,     3,     1,     1,     1,     1,
       1,     1,     3,     6,     5,     0,     1,     1,     9,     5,
       4,     6,     5,     7,     3,     0,     4,     4,     4,     4,
       4,     3,     1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


/* Context of a parse error.  */
typedef struct
{
  yy_state_t *yyssp;
  yysymbol_kind_t yytoken;
} yypcontext_t;

/* Put in YYARG at most YYARGN of the expected tokens given the
   current YYCTX, and return the number of tokens stored in YYARG.  If
   YYARG is null, return the number of expected tokens (guaranteed to
   be less than YYNTOKENS).  Return YYENOMEM on memory exhaustion.
   Return 0 if there are more than YYARGN expected tokens, yet fill
   YYARG up to YYARGN. */
static int
yypcontext_expected_tokens (const yypcontext_t *yyctx,
                            yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  int yyn = yypact[+*yyctx->yyssp];
  if (!yypact_value_is_default (yyn))
    {
      /* Start YYX at -YYN if negative to avoid negative indexes in
         YYCHECK.  In other words, skip the first -YYN actions for
         this state because they are default actions.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;
      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yyx;
      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
        if (yycheck[yyx + yyn] == yyx && yyx != YYSYMBOL_YYerror
            && !yytable_value_is_error (yytable[yyx + yyn]))
          {
            if (!yyarg)
              ++yycount;
            else if (yycount == yyargn)
              return 0;
            else
              yyarg[yycount++] = YY_CAST (yysymbol_kind_t, yyx);
          }
    }
  if (yyarg && yycount == 0 && 0 < yyargn)
    yyarg[0] = YYSYMBOL_YYEMPTY;
  return yycount;
}




#ifndef yystrlen
# if defined __GLIBC__ && defined _STRING_H
#  define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
# else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
# endif
#endif

#ifndef yystpcpy
# if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#  define yystpcpy stpcpy
# else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
# endif
#endif

#ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
      char const *yyp = yystr;
      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            else
              goto append;

          append:
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
}
#endif


static int
yy_syntax_error_arguments (const yypcontext_t *yyctx,
                           yysymbol_kind_t yyarg[], int yyargn)
{
  /* Actual size of YYARG. */
  int yycount = 0;
  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yyctx->yytoken != YYSYMBOL_YYEMPTY)
    {
      int yyn;
      if (yyarg)
        yyarg[yycount] = yyctx->yytoken;
      ++yycount;
      yyn = yypcontext_expected_tokens (yyctx,
                                        yyarg ? yyarg + 1 : yyarg, yyargn - 1);
      if (yyn == YYENOMEM)
        return YYENOMEM;
      else
        yycount += yyn;
    }
  return yycount;
}

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return -1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return YYENOMEM if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                const yypcontext_t *yyctx)
{
  enum { YYARGS_MAX = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  yysymbol_kind_t yyarg[YYARGS_MAX];
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* Actual size of YYARG. */
  int yycount = yy_syntax_error_arguments (yyctx, yyarg, YYARGS_MAX);
  if (yycount == YYENOMEM)
    return YYENOMEM;

  switch (yycount)
    {
#define YYCASE_(N, S)                       \
      case N:                               \
        yyformat = S;                       \
        break
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  /* Compute error message size.  Don't count the "%s"s, but reserve
     room for the terminator.  */
  yysize = yystrlen (yyformat) - 2 * yycount + 1;
  {
    int yyi;
    for (yyi = 0; yyi < yycount; ++yyi)
      {
        YYPTRDIFF_T yysize1
          = yysize + yytnamerr (YY_NULLPTR, yytname[yyarg[yyi]]);
        if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
          yysize = yysize1;
        else
          return YYENOMEM;
      }
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return -1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yytname[yyarg[yyi++]]);
          yyformat += 2;
        }
      else
        {
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2: /* desc_algoritmo: TK_ALGORITMO TK_IDENTIFICADOR TK_PUNTO_COMA cabecera_alg bloque_alg TK_FALGORITMO  */
#line 84 "gramatica.y"
                                                                                                   {}
#line 1625 "gramatica.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal TK_COMENTARIO  */
#line 86 "gramatica.y"
                                                                 {}
#line 1631 "gramatica.tab.c"
    break;

  case 4: /* bloque_alg: bloque TK_COMENTARIO  */
#line 88 "gramatica.y"
                                  {}
#line 1637 "gramatica.tab.c"
    break;

  case 5: /* decl_globales: decl_tipo decl_globales  */
#line 90 "gramatica.y"
                                        {}
#line 1643 "gramatica.tab.c"
    break;

  case 6: /* decl_globales: decl_cte decl_globales  */
#line 91 "gramatica.y"
                         {}
#line 1649 "gramatica.tab.c"
    break;

  case 7: /* decl_globales: %empty  */
#line 92 "gramatica.y"
         {}
#line 1655 "gramatica.tab.c"
    break;

  case 8: /* decl_a_f: accion_d decl_a_f  */
#line 94 "gramatica.y"
                             {}
#line 1661 "gramatica.tab.c"
    break;

  case 9: /* decl_a_f: funcion_d decl_a_f  */
#line 95 "gramatica.y"
                     {}
#line 1667 "gramatica.tab.c"
    break;

  case 10: /* decl_a_f: %empty  */
#line 96 "gramatica.y"
         {}
#line 1673 "gramatica.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 98 "gramatica.y"
                                     {}
#line 1679 "gramatica.tab.c"
    break;

  case 12: /* declaraciones: decl_tipo declaraciones  */
#line 100 "gramatica.y"
                                        {}
#line 1685 "gramatica.tab.c"
    break;

  case 13: /* declaraciones: decl_cte declaraciones  */
#line 101 "gramatica.y"
                         {}
#line 1691 "gramatica.tab.c"
    break;

  case 14: /* declaraciones: decl_var declaraciones  */
#line 102 "gramatica.y"
                         {}
#line 1697 "gramatica.tab.c"
    break;

  case 15: /* declaraciones: %empty  */
#line 103 "gramatica.y"
         {}
#line 1703 "gramatica.tab.c"
    break;

  case 16: /* decl_tipo: TK_TIPO lista_d_tipo TK_FTIPO TK_PUNTO_COMA  */
#line 105 "gramatica.y"
                                                        {}
#line 1709 "gramatica.tab.c"
    break;

  case 17: /* decl_cte: TK_CONST lista_d_cte TK_FCONST TK_PUNTO_COMA  */
#line 107 "gramatica.y"
                                                        {}
#line 1715 "gramatica.tab.c"
    break;

  case 18: /* decl_var: TK_VAR lista_d_var TK_FVAR TK_PUNTO_COMA  */
#line 109 "gramatica.y"
                                                    {}
#line 1721 "gramatica.tab.c"
    break;

  case 19: /* lista_d_tipo: TK_IDENTIFICADOR TK_IGUAL d_tipo TK_PUNTO_COMA lista_d_tipo  */
#line 111 "gramatica.y"
                                                                           {}
#line 1727 "gramatica.tab.c"
    break;

  case 20: /* lista_d_tipo: %empty  */
#line 112 "gramatica.y"
         {}
#line 1733 "gramatica.tab.c"
    break;

  case 21: /* d_tipo: TK_TUPLA lista_campos TK_FTUPLA  */
#line 114 "gramatica.y"
                                         {}
#line 1739 "gramatica.tab.c"
    break;

  case 22: /* d_tipo: TK_TABLA TK_ABRIR_TABLA expresion_t TK_SUBRANGO expresion_t TK_CERRAR_TABLA TK_DE d_tipo  */
#line 115 "gramatica.y"
                                                                                           {}
#line 1745 "gramatica.tab.c"
    break;

  case 23: /* d_tipo: TK_IDENTIFICADOR  */
#line 116 "gramatica.y"
                   {}
#line 1751 "gramatica.tab.c"
    break;

  case 24: /* d_tipo: expresion_t TK_DEFINICION expresion_t  */
#line 117 "gramatica.y"
                                        {}
#line 1757 "gramatica.tab.c"
    break;

  case 25: /* d_tipo: TK_REF d_tipo  */
#line 118 "gramatica.y"
                {}
#line 1763 "gramatica.tab.c"
    break;

  case 26: /* d_tipo: TK_TIPO_BASE  */
#line 119 "gramatica.y"
               {}
#line 1769 "gramatica.tab.c"
    break;

  case 27: /* expresion_t: expresion  */
#line 121 "gramatica.y"
                        {}
#line 1775 "gramatica.tab.c"
    break;

  case 28: /* expresion_t: TK_LITERAL_CARACTER  */
#line 122 "gramatica.y"
                      {}
#line 1781 "gramatica.tab.c"
    break;

  case 29: /* lista_campos: TK_IDENTIFICADOR TK_DEFINICION d_tipo TK_PUNTO_COMA lista_campos  */
#line 124 "gramatica.y"
                                                                                {}
#line 1787 "gramatica.tab.c"
    break;

  case 30: /* lista_campos: %empty  */
#line 125 "gramatica.y"
         {}
#line 1793 "gramatica.tab.c"
    break;

  case 31: /* lista_d_cte: TK_IDENTIFICADOR TK_IGUAL TK_LITERAL TK_PUNTO_COMA lista_d_cte  */
#line 127 "gramatica.y"
                                                                             {}
#line 1799 "gramatica.tab.c"
    break;

  case 32: /* lista_d_cte: %empty  */
#line 128 "gramatica.y"
         {}
#line 1805 "gramatica.tab.c"
    break;

  case 33: /* lista_d_var: lista_id TK_DEFINICION TK_IDENTIFICADOR TK_PUNTO_COMA lista_d_var  */
#line 130 "gramatica.y"
                                                                                {}
#line 1811 "gramatica.tab.c"
    break;

  case 34: /* lista_d_var: lista_id TK_DEFINICION d_tipo TK_PUNTO_COMA lista_d_var  */
#line 131 "gramatica.y"
                                                          {}
#line 1817 "gramatica.tab.c"
    break;

  case 35: /* lista_d_var: %empty  */
#line 132 "gramatica.y"
         {}
#line 1823 "gramatica.tab.c"
    break;

  case 36: /* lista_id: TK_IDENTIFICADOR TK_SEPARADOR lista_id  */
#line 134 "gramatica.y"
                                                  {}
#line 1829 "gramatica.tab.c"
    break;

  case 37: /* lista_id: TK_IDENTIFICADOR  */
#line 135 "gramatica.y"
                   {}
#line 1835 "gramatica.tab.c"
    break;

  case 38: /* decl_ent_sal: decl_ent  */
#line 137 "gramatica.y"
                        {}
#line 1841 "gramatica.tab.c"
    break;

  case 39: /* decl_ent_sal: decl_ent decl_sal  */
#line 138 "gramatica.y"
                    {}
#line 1847 "gramatica.tab.c"
    break;

  case 40: /* decl_ent_sal: decl_sal  */
#line 139 "gramatica.y"
           {}
#line 1853 "gramatica.tab.c"
    break;

  case 41: /* decl_ent: TK_ENT lista_d_var  */
#line 141 "gramatica.y"
                              {}
#line 1859 "gramatica.tab.c"
    break;

  case 42: /* decl_sal: TK_SAL lista_d_var  */
#line 143 "gramatica.y"
                              {}
#line 1865 "gramatica.tab.c"
    break;

  case 43: /* exp_a: exp_a TK_SUMA exp_a  */
#line 146 "gramatica.y"
                            {}
#line 1871 "gramatica.tab.c"
    break;

  case 44: /* exp_a: exp_a TK_RESTA exp_a  */
#line 147 "gramatica.y"
                       {}
#line 1877 "gramatica.tab.c"
    break;

  case 45: /* exp_a: exp_a TK_PROD exp_a  */
#line 148 "gramatica.y"
                      {}
#line 1883 "gramatica.tab.c"
    break;

  case 46: /* exp_a: exp_a TK_DIV_REA exp_a  */
#line 149 "gramatica.y"
                         {}
#line 1889 "gramatica.tab.c"
    break;

  case 47: /* exp_a: exp_a TK_R_MOD exp_a  */
#line 150 "gramatica.y"
                       {}
#line 1895 "gramatica.tab.c"
    break;

  case 48: /* exp_a: exp_a TK_DIV exp_a  */
#line 151 "gramatica.y"
                     {}
#line 1901 "gramatica.tab.c"
    break;

  case 49: /* exp_a: TK_ABRIR_PARENTESIS exp_a TK_CERRAR_PARENTESIS  */
#line 152 "gramatica.y"
                                                 {}
#line 1907 "gramatica.tab.c"
    break;

  case 50: /* exp_a: operando  */
#line 153 "gramatica.y"
           {}
#line 1913 "gramatica.tab.c"
    break;

  case 51: /* exp_a: TK_LITERAL_NUMERICO  */
#line 154 "gramatica.y"
                      {}
#line 1919 "gramatica.tab.c"
    break;

  case 52: /* exp_a: TK_RESTA exp_a  */
#line 155 "gramatica.y"
                  {}
#line 1925 "gramatica.tab.c"
    break;

  case 53: /* exp_a: exp_a TK_Y exp_a  */
#line 156 "gramatica.y"
                   {}
#line 1931 "gramatica.tab.c"
    break;

  case 54: /* exp_a: exp_a TK_O exp_a  */
#line 157 "gramatica.y"
                   {}
#line 1937 "gramatica.tab.c"
    break;

  case 55: /* exp_a: TK_NO exp_a  */
#line 158 "gramatica.y"
              {}
#line 1943 "gramatica.tab.c"
    break;

  case 56: /* exp_a: TK_VERDADERO  */
#line 159 "gramatica.y"
               {}
#line 1949 "gramatica.tab.c"
    break;

  case 57: /* exp_a: TK_FALSO  */
#line 160 "gramatica.y"
           {}
#line 1955 "gramatica.tab.c"
    break;

  case 58: /* exp_a: expresion TK_OPREL expresion  */
#line 161 "gramatica.y"
                               {}
#line 1961 "gramatica.tab.c"
    break;

  case 59: /* expresion: exp_a  */
#line 163 "gramatica.y"
                 {}
#line 1967 "gramatica.tab.c"
    break;

  case 60: /* expresion: funcion_ll  */
#line 164 "gramatica.y"
             {}
#line 1973 "gramatica.tab.c"
    break;

  case 61: /* operando: TK_IDENTIFICADOR  */
#line 166 "gramatica.y"
                            {}
#line 1979 "gramatica.tab.c"
    break;

  case 62: /* operando: operando TK_PUNTO operando  */
#line 167 "gramatica.y"
                             {}
#line 1985 "gramatica.tab.c"
    break;

  case 63: /* operando: operando TK_ABRIR_PARENTESIS expresion TK_CERRAR_PARENTESIS  */
#line 168 "gramatica.y"
                                                              {}
#line 1991 "gramatica.tab.c"
    break;

  case 64: /* operando: operando TK_REF  */
#line 169 "gramatica.y"
                  {}
#line 1997 "gramatica.tab.c"
    break;

  case 65: /* instrucciones: instruccion TK_PUNTO_COMA instrucciones  */
#line 171 "gramatica.y"
                                                        {}
#line 2003 "gramatica.tab.c"
    break;

  case 66: /* instrucciones: instruccion  */
#line 172 "gramatica.y"
              {}
#line 2009 "gramatica.tab.c"
    break;

  case 67: /* instruccion: TK_CONTINUAR  */
#line 174 "gramatica.y"
                           {}
#line 2015 "gramatica.tab.c"
    break;

  case 68: /* instruccion: asignacion  */
#line 175 "gramatica.y"
             {}
#line 2021 "gramatica.tab.c"
    break;

  case 69: /* instruccion: alternativa  */
#line 176 "gramatica.y"
              {}
#line 2027 "gramatica.tab.c"
    break;

  case 70: /* instruccion: iteracion  */
#line 177 "gramatica.y"
            {}
#line 2033 "gramatica.tab.c"
    break;

  case 71: /* instruccion: accion_ll  */
#line 178 "gramatica.y"
            {}
#line 2039 "gramatica.tab.c"
    break;

  case 72: /* asignacion: operando TK_ASIGNACION expresion  */
#line 180 "gramatica.y"
                                              {}
#line 2045 "gramatica.tab.c"
    break;

  case 73: /* alternativa: TK_SI expresion TK_ENTONCES instrucciones lista_opciones TK_FSI  */
#line 182 "gramatica.y"
                                                                              {}
#line 2051 "gramatica.tab.c"
    break;

  case 74: /* lista_opciones: TK_SINOSI expresion TK_ENTONCES instrucciones lista_opciones  */
#line 184 "gramatica.y"
                                                                              {}
#line 2057 "gramatica.tab.c"
    break;

  case 75: /* lista_opciones: %empty  */
#line 185 "gramatica.y"
         {}
#line 2063 "gramatica.tab.c"
    break;

  case 76: /* iteracion: it_cota_fija  */
#line 187 "gramatica.y"
                         {}
#line 2069 "gramatica.tab.c"
    break;

  case 77: /* iteracion: it_cota_exp  */
#line 188 "gramatica.y"
              {}
#line 2075 "gramatica.tab.c"
    break;

  case 78: /* it_cota_fija: TK_PARA TK_IDENTIFICADOR TK_ASIGNACION expresion TK_HASTA expresion TK_HACER instrucciones TK_FPARA  */
#line 190 "gramatica.y"
                                                                                                                   {}
#line 2081 "gramatica.tab.c"
    break;

  case 79: /* it_cota_exp: TK_MIENTRAS expresion TK_HACER instrucciones TK_FMIENTRAS  */
#line 192 "gramatica.y"
                                                                        {}
#line 2087 "gramatica.tab.c"
    break;

  case 80: /* accion_d: TK_ACCION a_cabecera bloque TK_FACCION  */
#line 194 "gramatica.y"
                                                  {}
#line 2093 "gramatica.tab.c"
    break;

  case 81: /* funcion_d: TK_FUNCION f_cabecera bloque TK_DEV expresion TK_FFUNCION  */
#line 196 "gramatica.y"
                                                                      {}
#line 2099 "gramatica.tab.c"
    break;

  case 82: /* a_cabecera: TK_IDENTIFICADOR TK_ABRIR_PARENTESIS d_par_form TK_CERRAR_PARENTESIS TK_PUNTO_COMA  */
#line 198 "gramatica.y"
                                                                                                {}
#line 2105 "gramatica.tab.c"
    break;

  case 83: /* f_cabecera: TK_IDENTIFICADOR TK_ABRIR_PARENTESIS lista_d_var TK_CERRAR_PARENTESIS TK_DEV d_tipo TK_PUNTO_COMA  */
#line 200 "gramatica.y"
                                                                                                               {}
#line 2111 "gramatica.tab.c"
    break;

  case 84: /* d_par_form: d_p_form TK_PUNTO_COMA d_par_form  */
#line 202 "gramatica.y"
                                               {}
#line 2117 "gramatica.tab.c"
    break;

  case 85: /* d_par_form: %empty  */
#line 203 "gramatica.y"
         {}
#line 2123 "gramatica.tab.c"
    break;

  case 86: /* d_p_form: TK_ENT lista_id TK_DEFINICION d_tipo  */
#line 205 "gramatica.y"
                                                {}
#line 2129 "gramatica.tab.c"
    break;

  case 87: /* d_p_form: TK_SAL lista_id TK_DEFINICION d_tipo  */
#line 206 "gramatica.y"
                                       {}
#line 2135 "gramatica.tab.c"
    break;

  case 88: /* d_p_form: TK_ES lista_id TK_DEFINICION d_tipo  */
#line 207 "gramatica.y"
                                      {}
#line 2141 "gramatica.tab.c"
    break;

  case 89: /* accion_ll: TK_IDENTIFICADOR TK_ABRIR_PARENTESIS l_ll TK_CERRAR_PARENTESIS  */
#line 209 "gramatica.y"
                                                                           {}
#line 2147 "gramatica.tab.c"
    break;

  case 90: /* funcion_ll: TK_IDENTIFICADOR TK_ABRIR_PARENTESIS l_ll TK_CERRAR_PARENTESIS  */
#line 211 "gramatica.y"
                                                                            {}
#line 2153 "gramatica.tab.c"
    break;

  case 91: /* l_ll: expresion TK_SEPARADOR l_ll  */
#line 213 "gramatica.y"
                                   {}
#line 2159 "gramatica.tab.c"
    break;

  case 92: /* l_ll: expresion  */
#line 214 "gramatica.y"
            {}
#line 2165 "gramatica.tab.c"
    break;


#line 2169 "gramatica.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      {
        yypcontext_t yyctx
          = {yyssp, yytoken};
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == -1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = YY_CAST (char *,
                             YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
            if (yymsg)
              {
                yysyntax_error_status
                  = yysyntax_error (&yymsg_alloc, &yymsg, &yyctx);
                yymsgp = yymsg;
              }
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = YYENOMEM;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == YYENOMEM)
          YYNOMEM;
      }
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
  return yyresult;
}

#line 217 "gramatica.y"


// { printf("apariciu digito: %s\n", $1); }

int main(int argc, char* argv[]) {
    yyin = fopen(argv[1], "r");
    printf("%s\n",argv[1]);

    if(!yyin) {
        printf("Fallo al abrir el fichero %s", argv[1]);
        return -1;
    }

    return yyparse();
}

void yyerror (char const *s) {
    fprintf(stderr, "%s\n", s);
}
