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
#line 1 "parserv3.y"

#include "tabla.h"
#include <ctype.h>
#include <stdio.h>

int yylex();
void yyerror(const char* message);
extern FILE* yyin;

#line 81 "parserv3.tab.c"

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

#include "parserv3.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_TK_IDENTIFICADOR = 3,           /* TK_IDENTIFICADOR  */
  YYSYMBOL_TK_IDENTIFICADOR_B = 4,         /* TK_IDENTIFICADOR_B  */
  YYSYMBOL_TK_ALGORITMO = 5,               /* TK_ALGORITMO  */
  YYSYMBOL_TK_FALGORITMO = 6,              /* TK_FALGORITMO  */
  YYSYMBOL_TK_SECUENCIAL = 7,              /* TK_SECUENCIAL  */
  YYSYMBOL_TK_COMENTARIO = 8,              /* TK_COMENTARIO  */
  YYSYMBOL_TK_TIPO = 9,                    /* TK_TIPO  */
  YYSYMBOL_TK_FTIPO = 10,                  /* TK_FTIPO  */
  YYSYMBOL_TK_CONST = 11,                  /* TK_CONST  */
  YYSYMBOL_TK_FCONST = 12,                 /* TK_FCONST  */
  YYSYMBOL_TK_VAR = 13,                    /* TK_VAR  */
  YYSYMBOL_TK_FVAR = 14,                   /* TK_FVAR  */
  YYSYMBOL_TK_CREACION_TIPO = 15,          /* TK_CREACION_TIPO  */
  YYSYMBOL_TK_TUPLA = 16,                  /* TK_TUPLA  */
  YYSYMBOL_TK_FTUPLA = 17,                 /* TK_FTUPLA  */
  YYSYMBOL_TK_TABLA = 18,                  /* TK_TABLA  */
  YYSYMBOL_TK_FINAL_ARRAY = 19,            /* TK_FINAL_ARRAY  */
  YYSYMBOL_TK_DE = 20,                     /* TK_DE  */
  YYSYMBOL_TK_SUBRANGO = 21,               /* TK_SUBRANGO  */
  YYSYMBOL_TK_LITERAL_CARACTER = 22,       /* TK_LITERAL_CARACTER  */
  YYSYMBOL_TK_DEFINICION_TIPO = 23,        /* TK_DEFINICION_TIPO  */
  YYSYMBOL_TK_TIPOBASE = 24,               /* TK_TIPOBASE  */
  YYSYMBOL_TK_PUNTO = 25,                  /* TK_PUNTO  */
  YYSYMBOL_TK_INICIO_ARRAY = 26,           /* TK_INICIO_ARRAY  */
  YYSYMBOL_TK_REF = 27,                    /* TK_REF  */
  YYSYMBOL_TK_ENTRADA = 28,                /* TK_ENTRADA  */
  YYSYMBOL_TK_SALIDA = 29,                 /* TK_SALIDA  */
  YYSYMBOL_TK_SEPARADOR = 30,              /* TK_SEPARADOR  */
  YYSYMBOL_TK_SUMA = 31,                   /* TK_SUMA  */
  YYSYMBOL_TK_RESTA = 32,                  /* TK_RESTA  */
  YYSYMBOL_TK_MODULO = 33,                 /* TK_MODULO  */
  YYSYMBOL_TK_DIV = 34,                    /* TK_DIV  */
  YYSYMBOL_TK_PRODUCTO = 35,               /* TK_PRODUCTO  */
  YYSYMBOL_TK_DIVISION = 36,               /* TK_DIVISION  */
  YYSYMBOL_UMENOS = 37,                    /* UMENOS  */
  YYSYMBOL_TK_LITERAL_NUMERICO = 38,       /* TK_LITERAL_NUMERICO  */
  YYSYMBOL_TK_OPREL = 39,                  /* TK_OPREL  */
  YYSYMBOL_TK_APERTURA_PARENTESIS = 40,    /* TK_APERTURA_PARENTESIS  */
  YYSYMBOL_TK_CIERRE_PARENTESIS = 41,      /* TK_CIERRE_PARENTESIS  */
  YYSYMBOL_TK_O = 42,                      /* TK_O  */
  YYSYMBOL_TK_Y = 43,                      /* TK_Y  */
  YYSYMBOL_TK_VERDADERO = 44,              /* TK_VERDADERO  */
  YYSYMBOL_TK_FALSO = 45,                  /* TK_FALSO  */
  YYSYMBOL_TK_LITERAL_CADENA = 46,         /* TK_LITERAL_CADENA  */
  YYSYMBOL_TK_LITERAL_BOOLEANO = 47,       /* TK_LITERAL_BOOLEANO  */
  YYSYMBOL_TK_NO = 48,                     /* TK_NO  */
  YYSYMBOL_NEGACION = 49,                  /* NEGACION  */
  YYSYMBOL_TK_CONTINUAR = 50,              /* TK_CONTINUAR  */
  YYSYMBOL_TK_ASIGNACION = 51,             /* TK_ASIGNACION  */
  YYSYMBOL_TK_SI = 52,                     /* TK_SI  */
  YYSYMBOL_TK_ENTONCES = 53,               /* TK_ENTONCES  */
  YYSYMBOL_TK_FSI = 54,                    /* TK_FSI  */
  YYSYMBOL_TK_SINO = 55,                   /* TK_SINO  */
  YYSYMBOL_TK_MIENTRAS = 56,               /* TK_MIENTRAS  */
  YYSYMBOL_TK_HACER = 57,                  /* TK_HACER  */
  YYSYMBOL_TK_FMIENTRAS = 58,              /* TK_FMIENTRAS  */
  YYSYMBOL_TK_PARA = 59,                   /* TK_PARA  */
  YYSYMBOL_TK_HASTA = 60,                  /* TK_HASTA  */
  YYSYMBOL_TK_FPARA = 61,                  /* TK_FPARA  */
  YYSYMBOL_TK_ACCION = 62,                 /* TK_ACCION  */
  YYSYMBOL_TK_FACCION = 63,                /* TK_FACCION  */
  YYSYMBOL_TK_FUNCION = 64,                /* TK_FUNCION  */
  YYSYMBOL_TK_DEV = 65,                    /* TK_DEV  */
  YYSYMBOL_TK_FFUNCION = 66,               /* TK_FFUNCION  */
  YYSYMBOL_TK_ENTRADA_SALIDA = 67,         /* TK_ENTRADA_SALIDA  */
  YYSYMBOL_YYACCEPT = 68,                  /* $accept  */
  YYSYMBOL_desc_algoritmo = 69,            /* desc_algoritmo  */
  YYSYMBOL_cabecera_alg = 70,              /* cabecera_alg  */
  YYSYMBOL_bloque_alg = 71,                /* bloque_alg  */
  YYSYMBOL_decl_globales = 72,             /* decl_globales  */
  YYSYMBOL_decl_a_f = 73,                  /* decl_a_f  */
  YYSYMBOL_bloque = 74,                    /* bloque  */
  YYSYMBOL_declaraciones = 75,             /* declaraciones  */
  YYSYMBOL_declaracion_tipo = 76,          /* declaracion_tipo  */
  YYSYMBOL_declaracion_cte = 77,           /* declaracion_cte  */
  YYSYMBOL_declaracion_var = 78,           /* declaracion_var  */
  YYSYMBOL_lista_d_tipo = 79,              /* lista_d_tipo  */
  YYSYMBOL_d_tipo = 80,                    /* d_tipo  */
  YYSYMBOL_expresion_t = 81,               /* expresion_t  */
  YYSYMBOL_lista_campos = 82,              /* lista_campos  */
  YYSYMBOL_lista_d_cte = 83,               /* lista_d_cte  */
  YYSYMBOL_lista_d_var = 84,               /* lista_d_var  */
  YYSYMBOL_lista_id = 85,                  /* lista_id  */
  YYSYMBOL_decl_ent_sal = 86,              /* decl_ent_sal  */
  YYSYMBOL_decl_ent = 87,                  /* decl_ent  */
  YYSYMBOL_decl_salida = 88,               /* decl_salida  */
  YYSYMBOL_expresion = 89,                 /* expresion  */
  YYSYMBOL_exp_a = 90,                     /* exp_a  */
  YYSYMBOL_exp_b = 91,                     /* exp_b  */
  YYSYMBOL_M = 92,                         /* M  */
  YYSYMBOL_operando = 93,                  /* operando  */
  YYSYMBOL_operando_b = 94,                /* operando_b  */
  YYSYMBOL_instrucciones = 95,             /* instrucciones  */
  YYSYMBOL_instruccion = 96,               /* instruccion  */
  YYSYMBOL_asignacion = 97,                /* asignacion  */
  YYSYMBOL_alternativa = 98,               /* alternativa  */
  YYSYMBOL_lista_opciones = 99,            /* lista_opciones  */
  YYSYMBOL_iteracion = 100,                /* iteracion  */
  YYSYMBOL_it_cota_exp = 101,              /* it_cota_exp  */
  YYSYMBOL_it_cota_fija = 102,             /* it_cota_fija  */
  YYSYMBOL_accion_d = 103,                 /* accion_d  */
  YYSYMBOL_funcion_d = 104,                /* funcion_d  */
  YYSYMBOL_a_cabecera = 105,               /* a_cabecera  */
  YYSYMBOL_f_cabecera = 106,               /* f_cabecera  */
  YYSYMBOL_d_par_form = 107,               /* d_par_form  */
  YYSYMBOL_d_p_form = 108,                 /* d_p_form  */
  YYSYMBOL_accion_ll = 109,                /* accion_ll  */
  YYSYMBOL_funcion_ll = 110,               /* funcion_ll  */
  YYSYMBOL_l_ll = 111                      /* l_ll  */
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
#define YYLAST   270

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  44
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  241

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   322


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
      65,    66,    67
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    74,    74,    76,    78,    80,    81,    82,    85,    86,
      87,    90,    92,    93,    94,    95,   100,   102,   104,   108,
     109,   112,   113,   114,   115,   116,   117,   120,   121,   124,
     125,   130,   131,   132,   133,   134,   136,   143,   146,   151,
     157,   158,   159,   162,   169,   180,   181,   184,   209,   234,
     259,   284,   294,   304,   305,   306,   307,   319,   324,   329,
     333,   339,   340,   341,   359,   364,   365,   366,   367,   368,
     371,   375,   376,   379,   380,   381,   382,   383,   386,   397,
     400,   402,   403,   406,   407,   410,   413,   416,   417,   418,
     419,   420,   421,   423,   424,   425,   428,   429,   430,   430
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
  "\"end of file\"", "error", "\"invalid token\"", "TK_IDENTIFICADOR",
  "TK_IDENTIFICADOR_B", "TK_ALGORITMO", "TK_FALGORITMO", "TK_SECUENCIAL",
  "TK_COMENTARIO", "TK_TIPO", "TK_FTIPO", "TK_CONST", "TK_FCONST",
  "TK_VAR", "TK_FVAR", "TK_CREACION_TIPO", "TK_TUPLA", "TK_FTUPLA",
  "TK_TABLA", "TK_FINAL_ARRAY", "TK_DE", "TK_SUBRANGO",
  "TK_LITERAL_CARACTER", "TK_DEFINICION_TIPO", "TK_TIPOBASE", "TK_PUNTO",
  "TK_INICIO_ARRAY", "TK_REF", "TK_ENTRADA", "TK_SALIDA", "TK_SEPARADOR",
  "TK_SUMA", "TK_RESTA", "TK_MODULO", "TK_DIV", "TK_PRODUCTO",
  "TK_DIVISION", "UMENOS", "TK_LITERAL_NUMERICO", "TK_OPREL",
  "TK_APERTURA_PARENTESIS", "TK_CIERRE_PARENTESIS", "TK_O", "TK_Y",
  "TK_VERDADERO", "TK_FALSO", "TK_LITERAL_CADENA", "TK_LITERAL_BOOLEANO",
  "TK_NO", "NEGACION", "TK_CONTINUAR", "TK_ASIGNACION", "TK_SI",
  "TK_ENTONCES", "TK_FSI", "TK_SINO", "TK_MIENTRAS", "TK_HACER",
  "TK_FMIENTRAS", "TK_PARA", "TK_HASTA", "TK_FPARA", "TK_ACCION",
  "TK_FACCION", "TK_FUNCION", "TK_DEV", "TK_FFUNCION", "TK_ENTRADA_SALIDA",
  "$accept", "desc_algoritmo", "cabecera_alg", "bloque_alg",
  "decl_globales", "decl_a_f", "bloque", "declaraciones",
  "declaracion_tipo", "declaracion_cte", "declaracion_var", "lista_d_tipo",
  "d_tipo", "expresion_t", "lista_campos", "lista_d_cte", "lista_d_var",
  "lista_id", "decl_ent_sal", "decl_ent", "decl_salida", "expresion",
  "exp_a", "exp_b", "M", "operando", "operando_b", "instrucciones",
  "instruccion", "asignacion", "alternativa", "lista_opciones",
  "iteracion", "it_cota_exp", "it_cota_fija", "accion_d", "funcion_d",
  "a_cabecera", "f_cabecera", "d_par_form", "d_p_form", "accion_ll",
  "funcion_ll", "l_ll", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-122)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-24)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,    17,    39,    37,  -122,    86,    44,    52,   111,    42,
      86,    86,    46,    65,    74,   101,    97,   117,   132,    15,
     111,   111,   111,   147,   150,    -5,    42,    42,  -122,  -122,
     156,   175,    -9,   182,   160,   140,   170,   148,  -122,   163,
    -122,  -122,   107,  -122,   192,     7,   153,  -122,   198,  -122,
    -122,  -122,  -122,  -122,  -122,  -122,  -122,  -122,   168,   111,
     169,   111,    97,    97,   202,   177,  -122,  -122,  -122,    10,
     208,   190,  -122,  -122,   156,    11,  -122,    11,   210,   197,
    -122,   102,   131,  -122,  -122,   212,   213,   214,   215,  -122,
      97,   216,   156,  -122,    50,   184,   107,  -122,  -122,   107,
     186,    -1,  -122,   107,   176,   223,    50,  -122,    50,   107,
      15,    -3,   165,    97,   164,  -122,  -122,  -122,  -122,    50,
     207,   217,     8,  -122,  -122,   127,   166,    44,     8,    11,
      11,    11,    11,    11,    11,    52,    52,    52,    52,  -122,
    -122,   224,   203,   191,   166,   124,  -122,    50,  -122,  -122,
      15,    30,    50,  -122,   218,  -122,    -7,  -122,    97,    97,
      97,   194,   229,  -122,   199,    50,   200,   156,  -122,   221,
    -122,  -122,  -122,   127,   127,  -122,  -122,  -122,  -122,  -122,
    -122,  -122,  -122,    97,    50,  -122,  -122,  -122,   107,   107,
     183,  -122,   179,  -122,   220,   222,   225,   237,    -3,   181,
     185,  -122,   240,     8,  -122,  -122,  -122,  -122,   107,   195,
      15,    50,   156,   156,   156,  -122,  -122,   156,  -122,   208,
     231,    41,  -122,   196,   201,  -122,  -122,  -122,   245,  -122,
     233,    15,  -122,    15,  -122,   156,   183,   204,  -122,  -122,
    -122
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    35,    15,    10,
       7,     7,     0,     0,     0,     0,    37,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    39,     0,     0,     0,     4,    66,
      70,    73,     0,    65,     0,     0,     0,    11,    72,    74,
      75,    76,    84,    83,    77,    12,    13,    14,     0,    15,
       0,    15,    37,    37,     0,    40,    42,     8,     9,    66,
      30,     0,    28,    26,     0,     0,    55,     0,     0,     0,
      27,    45,    54,    46,    16,     0,     0,     0,     0,    17,
       0,     0,     0,     2,     0,    66,     0,    61,    62,     0,
       0,     0,    60,     0,     0,     0,     0,    69,     0,     0,
       0,    92,     0,    37,     0,    43,    44,     3,    41,     0,
       0,     0,     0,    25,    66,    56,     0,    20,     0,     0,
       0,     0,     0,     0,     0,    35,    35,    35,    35,    38,
      18,     0,    99,     0,    45,     0,    59,     0,    65,    65,
       0,     0,     0,    67,     0,    78,    79,    71,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,    21,     0,
      53,    19,    24,    47,    48,    51,    52,    49,    50,    33,
      34,    32,    31,    37,     0,    96,    64,    63,     0,     0,
      82,    65,     0,    68,     0,     0,     0,     0,    92,     0,
       0,    97,     0,     0,    36,    98,    58,    57,     0,     0,
       0,     0,     0,     0,     0,    89,    91,     0,    88,    30,
       0,     0,    80,     0,     0,    93,    94,    95,     0,    29,
       0,     0,    85,     0,    90,     0,    82,     0,    22,    81,
      86
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -122,  -122,  -122,  -122,   119,   143,   120,   155,    88,    98,
    -122,   128,   -71,  -118,    38,    49,   -56,   -82,  -122,  -122,
     205,   -40,   -15,   -87,  -121,   -19,   -18,  -105,  -122,  -122,
    -122,    20,  -122,  -122,  -122,  -122,  -122,  -122,  -122,    61,
    -122,  -122,  -122,  -104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    78,    79,   121,    15,    35,    36,    64,    65,
      66,    80,    81,   101,   103,    82,   102,    47,    48,    49,
      50,   209,    51,    52,    53,    26,    27,    59,    61,   161,
     162,    54,    83,   143
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      45,    46,   100,   123,   169,   157,   115,   116,   139,   145,
     172,    95,   146,    85,   124,   166,   151,   -23,    39,    40,
       3,   141,   156,    62,    63,   158,   159,   188,   189,    86,
      72,     1,   105,   106,   107,   148,   149,    87,    88,     4,
      75,   148,   149,    75,     5,   190,    76,    12,    77,    76,
     119,    77,   150,    95,   142,    14,   100,   164,   108,   100,
     125,    30,   126,   100,   160,    41,   154,    42,   155,   100,
     210,    43,   148,   149,    44,    31,   194,   195,   196,   142,
     205,   144,    75,   148,   149,   220,   153,   191,    76,    32,
      77,    45,    46,    10,   231,     6,   202,     7,    10,    10,
      34,   206,   207,    11,    23,   223,    24,   187,    11,    11,
      95,    40,   192,    33,   173,   174,   175,   176,   177,   178,
       6,   221,     7,    37,    16,   200,   236,   204,   237,    28,
      29,    45,    46,   129,   130,   131,   132,   133,   134,    75,
      38,   225,   226,   227,   142,    76,   228,    96,   100,   100,
      58,    97,    98,    60,    91,    99,   105,   106,   107,    69,
     131,   132,   133,   134,   238,   186,   148,   149,   100,    67,
      68,   224,    70,    93,    71,    55,    56,    57,    72,   112,
      73,   114,    84,    74,   179,   180,   181,   182,    75,    89,
      90,    45,    46,    92,    76,   104,    77,   129,   130,   131,
     132,   133,   134,    94,   109,   110,    63,   170,   111,   113,
     117,   120,    45,    46,    45,    46,   122,   127,   128,   135,
     136,   137,   138,   140,   119,   147,   124,   152,   163,   165,
     167,   183,   185,   184,   168,   197,   198,   193,   208,   211,
     199,   201,   203,   212,   215,   213,   217,   219,   214,   222,
     230,   218,   234,   235,   232,   171,   239,   229,   233,   216,
       0,     0,     0,     0,     0,   240,     0,     0,     0,     0,
     118
};

static const yytype_int16 yycheck[] =
{
      19,    19,    42,    74,   122,   110,    62,    63,    90,    96,
     128,     3,    99,    22,     3,   119,   103,     7,     3,     4,
       3,    92,   109,    28,    29,    28,    29,   148,   149,    38,
      22,     5,    25,    26,    27,    42,    43,    46,    47,     0,
      32,    42,    43,    32,     7,   150,    38,     3,    40,    38,
      40,    40,    53,     3,    94,     3,    96,   113,    51,    99,
      75,    15,    77,   103,    67,    50,   106,    52,   108,   109,
     191,    56,    42,    43,    59,    10,   158,   159,   160,   119,
     184,    96,    32,    42,    43,   203,   105,    57,    38,    15,
      40,   110,   110,     5,    53,     9,   167,    11,    10,    11,
       3,   188,   189,     5,    62,   210,    64,   147,    10,    11,
       3,     4,   152,    12,   129,   130,   131,   132,   133,   134,
       9,   208,    11,     6,    13,   165,   231,   183,   233,    10,
      11,   150,   150,    31,    32,    33,    34,    35,    36,    32,
       8,   212,   213,   214,   184,    38,   217,    40,   188,   189,
       3,    44,    45,     3,    14,    48,    25,    26,    27,     3,
      33,    34,    35,    36,   235,    41,    42,    43,   208,    26,
      27,   211,    16,    25,    18,    20,    21,    22,    22,    59,
      24,    61,     7,    27,   135,   136,   137,   138,    32,     7,
      30,   210,   210,    23,    38,     3,    40,    31,    32,    33,
      34,    35,    36,    40,    51,     7,    29,    41,    40,    40,
       8,     3,   231,   231,   233,   233,    26,     7,    21,     7,
       7,     7,     7,     7,    40,    39,     3,    51,    63,    65,
      23,     7,    41,    30,    17,    41,     7,    19,    55,    60,
      41,    41,    21,    23,     7,    23,    65,     7,    23,    54,
      19,    66,     7,    20,    58,   127,   236,   219,    57,   198,
      -1,    -1,    -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,
      65
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     5,    69,     3,     0,     7,     9,    11,    70,    72,
      76,    77,     3,    79,     3,    83,    13,    71,    74,    75,
      76,    77,    78,    62,    64,    73,   103,   104,    72,    72,
      15,    10,    15,    12,     3,    84,    85,     6,     8,     3,
       4,    50,    52,    56,    59,    93,    94,    95,    96,    97,
      98,   100,   101,   102,   109,    75,    75,    75,     3,   105,
       3,   106,    28,    29,    86,    87,    88,    73,    73,     3,
      16,    18,    22,    24,    27,    32,    38,    40,    80,    81,
      89,    90,    93,   110,     7,    22,    38,    46,    47,     7,
      30,    14,    23,    25,    40,     3,    40,    44,    45,    48,
      89,    91,    94,    92,     3,    25,    26,    27,    51,    51,
       7,    40,    74,    40,    74,    84,    84,     8,    88,    40,
       3,    82,    26,    80,     3,    90,    90,     7,    21,    31,
      32,    33,    34,    35,    36,     7,     7,     7,     7,    85,
       7,    80,    89,   111,    90,    91,    91,    39,    42,    43,
      53,    91,    51,    93,    89,    89,    91,    95,    28,    29,
      67,   107,   108,    63,    84,    65,   111,    23,    17,    81,
      41,    79,    81,    90,    90,    90,    90,    90,    90,    83,
      83,    83,    83,     7,    30,    41,    41,    89,    92,    92,
      95,    57,    89,    19,    85,    85,    85,    41,     7,    41,
      89,    41,    80,    21,    84,   111,    91,    91,    55,    99,
      92,    60,    23,    23,    23,     7,   107,    65,    66,     7,
      81,    91,    54,    95,    89,    80,    80,    80,    80,    82,
      19,    53,    58,    57,     7,    20,    95,    95,    80,    99,
      61
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    68,    69,    70,    71,    72,    72,    72,    73,    73,
      73,    74,    75,    75,    75,    75,    76,    77,    78,    79,
      79,    80,    80,    80,    80,    80,    80,    81,    81,    82,
      82,    83,    83,    83,    83,    83,    84,    84,    85,    85,
      86,    86,    86,    87,    88,    89,    89,    90,    90,    90,
      90,    90,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    92,    93,    93,    93,    93,
      94,    95,    95,    96,    96,    96,    96,    96,    97,    97,
      98,    99,    99,   100,   100,   101,   102,   103,   104,   105,
     106,   107,   107,   108,   108,   108,   109,   110,   111,   111
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     5,     5,     5,     0,     5,     0,     3,     1,
       1,     2,     1,     2,     2,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     2,     4,     4,     2,
       1,     1,     1,     3,     3,     0,     1,     3,     4,     2,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     3,
       6,     5,     0,     1,     1,     7,     9,     4,     6,     5,
       7,     3,     0,     4,     4,     4,     4,     4,     3,     1
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
  case 2: /* desc_algoritmo: TK_ALGORITMO TK_IDENTIFICADOR TK_SECUENCIAL cabecera_alg bloque_alg TK_FALGORITMO TK_PUNTO  */
#line 74 "parserv3.y"
                                                                                                          {writeQuadruplesToFile("output.txt", quadruplesTable, quadruplesTableIndex+1);}
#line 1626 "parserv3.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal TK_COMENTARIO  */
#line 76 "parserv3.y"
                                                               {;}
#line 1632 "parserv3.tab.c"
    break;

  case 4: /* bloque_alg: bloque TK_COMENTARIO  */
#line 78 "parserv3.y"
                                {;}
#line 1638 "parserv3.tab.c"
    break;

  case 5: /* decl_globales: declaracion_tipo decl_globales  */
#line 80 "parserv3.y"
                                             {;}
#line 1644 "parserv3.tab.c"
    break;

  case 6: /* decl_globales: declaracion_cte decl_globales  */
#line 81 "parserv3.y"
                                            {;}
#line 1650 "parserv3.tab.c"
    break;

  case 7: /* decl_globales: %empty  */
#line 82 "parserv3.y"
               {;}
#line 1656 "parserv3.tab.c"
    break;

  case 8: /* decl_a_f: accion_d decl_a_f  */
#line 85 "parserv3.y"
                           {;}
#line 1662 "parserv3.tab.c"
    break;

  case 9: /* decl_a_f: funcion_d decl_a_f  */
#line 86 "parserv3.y"
                            {;}
#line 1668 "parserv3.tab.c"
    break;

  case 10: /* decl_a_f: %empty  */
#line 87 "parserv3.y"
          {;}
#line 1674 "parserv3.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 90 "parserv3.y"
                                   {;}
#line 1680 "parserv3.tab.c"
    break;

  case 12: /* declaraciones: declaracion_tipo declaraciones  */
#line 92 "parserv3.y"
                                             {;}
#line 1686 "parserv3.tab.c"
    break;

  case 13: /* declaraciones: declaracion_cte declaraciones  */
#line 93 "parserv3.y"
                                            {;}
#line 1692 "parserv3.tab.c"
    break;

  case 14: /* declaraciones: declaracion_var declaraciones  */
#line 94 "parserv3.y"
                                            {;}
#line 1698 "parserv3.tab.c"
    break;

  case 15: /* declaraciones: %empty  */
#line 95 "parserv3.y"
               {;}
#line 1704 "parserv3.tab.c"
    break;

  case 16: /* declaracion_tipo: TK_TIPO lista_d_tipo TK_FTIPO TK_SECUENCIAL  */
#line 100 "parserv3.y"
                                                             {;}
#line 1710 "parserv3.tab.c"
    break;

  case 17: /* declaracion_cte: TK_CONST lista_d_cte TK_FCONST TK_SECUENCIAL  */
#line 102 "parserv3.y"
                                                             {;}
#line 1716 "parserv3.tab.c"
    break;

  case 18: /* declaracion_var: TK_VAR lista_d_var TK_FVAR TK_SECUENCIAL  */
#line 104 "parserv3.y"
                                                         { liberar_lista_id(&(yyvsp[-2].paraListaId));}
#line 1722 "parserv3.tab.c"
    break;

  case 19: /* lista_d_tipo: TK_IDENTIFICADOR TK_CREACION_TIPO d_tipo TK_SECUENCIAL lista_d_tipo  */
#line 108 "parserv3.y"
                                                                                 {;}
#line 1728 "parserv3.tab.c"
    break;

  case 20: /* lista_d_tipo: %empty  */
#line 109 "parserv3.y"
              {;}
#line 1734 "parserv3.tab.c"
    break;

  case 21: /* d_tipo: TK_TUPLA lista_campos TK_FTUPLA  */
#line 112 "parserv3.y"
                                       {;}
#line 1740 "parserv3.tab.c"
    break;

  case 22: /* d_tipo: TK_TABLA TK_INICIO_ARRAY expresion_t TK_SUBRANGO expresion_t TK_FINAL_ARRAY TK_DE d_tipo  */
#line 113 "parserv3.y"
                                                                                                {;}
#line 1746 "parserv3.tab.c"
    break;

  case 23: /* d_tipo: TK_IDENTIFICADOR  */
#line 114 "parserv3.y"
                        {;}
#line 1752 "parserv3.tab.c"
    break;

  case 24: /* d_tipo: expresion_t TK_SUBRANGO expresion_t  */
#line 115 "parserv3.y"
                                           {;}
#line 1758 "parserv3.tab.c"
    break;

  case 25: /* d_tipo: TK_REF d_tipo  */
#line 116 "parserv3.y"
                     {;}
#line 1764 "parserv3.tab.c"
    break;

  case 26: /* d_tipo: TK_TIPOBASE  */
#line 117 "parserv3.y"
                   {(yyval.paraNombreTipo)=(yyvsp[0].paraNombreTipo)}
#line 1770 "parserv3.tab.c"
    break;

  case 27: /* expresion_t: expresion  */
#line 120 "parserv3.y"
                      {;}
#line 1776 "parserv3.tab.c"
    break;

  case 28: /* expresion_t: TK_LITERAL_CARACTER  */
#line 121 "parserv3.y"
                                {;}
#line 1782 "parserv3.tab.c"
    break;

  case 29: /* lista_campos: TK_IDENTIFICADOR TK_DEFINICION_TIPO d_tipo TK_SECUENCIAL lista_campos  */
#line 124 "parserv3.y"
                                                                                   {;}
#line 1788 "parserv3.tab.c"
    break;

  case 30: /* lista_campos: %empty  */
#line 125 "parserv3.y"
              {;}
#line 1794 "parserv3.tab.c"
    break;

  case 31: /* lista_d_cte: TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_BOOLEANO TK_SECUENCIAL lista_d_cte  */
#line 130 "parserv3.y"
                                                                                            {;}
#line 1800 "parserv3.tab.c"
    break;

  case 32: /* lista_d_cte: TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_CADENA TK_SECUENCIAL lista_d_cte  */
#line 131 "parserv3.y"
                                                                                          {;}
#line 1806 "parserv3.tab.c"
    break;

  case 33: /* lista_d_cte: TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_CARACTER TK_SECUENCIAL lista_d_cte  */
#line 132 "parserv3.y"
                                                                                            {;}
#line 1812 "parserv3.tab.c"
    break;

  case 34: /* lista_d_cte: TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_NUMERICO TK_SECUENCIAL lista_d_cte  */
#line 133 "parserv3.y"
                                                                                            {;}
#line 1818 "parserv3.tab.c"
    break;

  case 35: /* lista_d_cte: %empty  */
#line 134 "parserv3.y"
             {;}
#line 1824 "parserv3.tab.c"
    break;

  case 36: /* lista_d_var: lista_id TK_DEFINICION_TIPO d_tipo TK_SECUENCIAL lista_d_var  */
#line 137 "parserv3.y"
             {
                volcar_lista_id(&(yyvsp[-4].paraListaId), (yyvsp[-2].paraNombreTipo));
                inicializar_lista_id(&(yyval.paraListaId));
                concatenar_lista_id(&(yyval.paraListaId), &(yyvsp[-4].paraListaId));
                concatenar_lista_id(&(yyval.paraListaId), &(yyvsp[0].paraListaId));
             }
#line 1835 "parserv3.tab.c"
    break;

  case 37: /* lista_d_var: %empty  */
#line 143 "parserv3.y"
             {;}
#line 1841 "parserv3.tab.c"
    break;

  case 38: /* lista_id: TK_IDENTIFICADOR TK_SEPARADOR lista_id  */
#line 147 "parserv3.y"
        {
                anhadir_a_lista_id((yyvsp[-2].paraCadena), &(yyvsp[0].paraListaId));
                (yyval.paraListaId) = (yyvsp[0].paraListaId);
        }
#line 1850 "parserv3.tab.c"
    break;

  case 39: /* lista_id: TK_IDENTIFICADOR  */
#line 152 "parserv3.y"
        {
                inicializar_lista_id(&(yyval.paraListaId));
                anhadir_a_lista_id((yyvsp[0].paraCadena), &(yyval.paraListaId));
        }
#line 1859 "parserv3.tab.c"
    break;

  case 40: /* decl_ent_sal: decl_ent  */
#line 157 "parserv3.y"
                       {;}
#line 1865 "parserv3.tab.c"
    break;

  case 41: /* decl_ent_sal: decl_ent decl_salida  */
#line 158 "parserv3.y"
                                   {;}
#line 1871 "parserv3.tab.c"
    break;

  case 42: /* decl_ent_sal: decl_salida  */
#line 159 "parserv3.y"
                         {;}
#line 1877 "parserv3.tab.c"
    break;

  case 43: /* decl_ent: TK_ENTRADA lista_d_var  */
#line 162 "parserv3.y"
                                {
        for (int i = 0; i < (yyvsp[0].paraListaId).size; i++) {
               gen(O_ENTRADA, , , lookup_symbol_idx(lookup_symbol((yyvsp[0].paraListaId).ids[i]))); 
        }
        liberar_lista_id(&(yyvsp[0].paraListaId));
        }
#line 1888 "parserv3.tab.c"
    break;

  case 44: /* decl_salida: TK_SALIDA lista_d_var  */
#line 169 "parserv3.y"
                                  {
        for (int i = 0; i < (yyvsp[0].paraListaId).size; i++) {
               gen(O_SALIDA, , , lookup_symbol_idx(lookup_symbol((yyvsp[0].paraListaId).ids[i]))); 
        }
        liberar_lista_id(&(yyvsp[0].paraListaId));
        }
#line 1899 "parserv3.tab.c"
    break;

  case 45: /* expresion: exp_a  */
#line 180 "parserv3.y"
                {(yyval.paraSymbolEntry)=(yyvsp[0].paraSymbolEntry);}
#line 1905 "parserv3.tab.c"
    break;

  case 46: /* expresion: funcion_ll  */
#line 181 "parserv3.y"
                     {;}
#line 1911 "parserv3.tab.c"
    break;

  case 47: /* exp_a: exp_a TK_SUMA exp_a  */
#line 184 "parserv3.y"
                          {
        SymbolEntry* t = newTemp();
        if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO) {
                t->type = paraNombreTipo.T_ENTERO;
                gen(O_SUMA, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;
        }
        else if((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_REAL){
                t->type = paraNombreTipo.T_REAL;
                gen(O_ITOF, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), , lookup_symbol_idx(*t));
                gen(O_SUMA, lookup_symbol_idx(*t), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;
        }
        else if((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_REAL && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO){
                t->type = paraNombreTipo.T_REAL;
                gen(O_ITOF, lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), , lookup_symbol_idx(*t));
                gen(O_SUMA, lookup_symbol_idx(*t), lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;
        }
        else if((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_REAL && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_REAL){
                t->type = paraNombreTipo.T_REAL;
                gen(O_SUMA, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;
        }
        }
#line 1941 "parserv3.tab.c"
    break;

  case 48: /* exp_a: exp_a TK_RESTA exp_a  */
#line 209 "parserv3.y"
                           {
        SymbolEntry* t = newTemp();
        if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO) {
                t->type = paraNombreTipo.T_ENTERO;
                gen(O_RESTA, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;

        } else if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_REAL) {
                t->type = paraNombreTipo.T_REAL;
                gen(O_FTOI, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), , lookup_symbol_idx(*t));
                gen(O_RESTA, lookup_symbol_idx(*t), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;

        } else if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_REAL && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO) {
                t->type = paraNombreTipo.T_REAL;
                gen(O_ITOF, lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), , lookup_symbol_idx(*t));
                gen(O_RESTA, lookup_symbol_idx(*t), lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;

        } else if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_REAL && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_REAL) {
                t->type = paraNombreTipo.T_REAL;
                gen(O_RESTA, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;
        }
     }
#line 1971 "parserv3.tab.c"
    break;

  case 49: /* exp_a: exp_a TK_PRODUCTO exp_a  */
#line 234 "parserv3.y"
                              {
        SymbolEntry* t = newTemp();
        if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO) {
                t->type = paraNombreTipo.T_ENTERO;
                gen(O_MUL, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;

        } else if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_REAL) {
                t->type = paraNombreTipo.T_REAL;
                gen(O_ITOF, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), , lookup_symbol_idx(*t));
                gen(O_MUL, lookup_symbol_idx(*t), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;

        } else if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_REAL && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO) {
                t->type = paraNombreTipo.T_REAL;
                gen(O_ITOF, lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), , lookup_symbol_idx(*t));
                gen(O_MUL, lookup_symbol_idx(*t), lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;

        } else if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_REAL && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_REAL) {
                t->type = paraNombreTipo.T_REAL;
                gen(O_MUL, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;
        }
     }
#line 2001 "parserv3.tab.c"
    break;

  case 50: /* exp_a: exp_a TK_DIVISION exp_a  */
#line 259 "parserv3.y"
                              {
        SymbolEntry* t = newTemp();
        if  ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO) {
                t->type = paraNombreTipo.T_ENTERO;
                gen(O_DIVISION, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;

        } else if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_REAL) {
                t->type = paraNombreTipo.T_REAL;
                gen(O_ITOF, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), , lookup_symbol_idx(*t));
                gen(O_DIVISION, lookup_symbol_idx(*t), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;

        } else if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_REAL && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO) {
                t->type = paraNombreTipo.T_REAL;
                gen(O_ITOF, lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), , lookup_symbol_idx(*t));
                gen(O_DIVISION, lookup_symbol_idx(*t), lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;

        } else if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_REAL && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_REAL) {
                t->type = paraNombreTipo.T_REAL;
                gen(O_DIVISION, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;
        }
        }
#line 2031 "parserv3.tab.c"
    break;

  case 51: /* exp_a: exp_a TK_MODULO exp_a  */
#line 284 "parserv3.y"
                            {
        if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO) {
                SymbolEntry* t = newTemp();
                t->type = paraNombreTipo.T_ENTERO;
                gen(O_MOD, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;
        } else {
                error();
        }
       }
#line 2046 "parserv3.tab.c"
    break;

  case 52: /* exp_a: exp_a TK_DIV exp_a  */
#line 294 "parserv3.y"
                         {
        if ((yyvsp[-2].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO && (yyvsp[0].paraSymbolEntry)->type == paraNombreTipo.T_ENTERO) {
                SymbolEntry* t = newTemp();
                t->type = paraNombreTipo.T_ENTERO;
                gen(O_DIV, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), lookup_symbol_idx(*t));
                (yyval.paraSymbolEntry) = t;
        } else {
                error();
        }
     }
#line 2061 "parserv3.tab.c"
    break;

  case 53: /* exp_a: TK_APERTURA_PARENTESIS exp_a TK_CIERRE_PARENTESIS  */
#line 304 "parserv3.y"
                                                        {(yyval.paraSymbolEntry) = (yyvsp[-1].paraSymbolEntry);}
#line 2067 "parserv3.tab.c"
    break;

  case 54: /* exp_a: operando  */
#line 305 "parserv3.y"
               {(yyval.paraSymbolEntry) = (yyvsp[0].paraSymbolEntry);}
#line 2073 "parserv3.tab.c"
    break;

  case 55: /* exp_a: TK_LITERAL_NUMERICO  */
#line 306 "parserv3.y"
                          {}
#line 2079 "parserv3.tab.c"
    break;

  case 56: /* exp_a: TK_RESTA exp_a  */
#line 307 "parserv3.y"
                                  {
        // no hay inversion de valor real
        SymbolEntry* t = newTemp();
        t->type = (yyvsp[0].paraSymbolEntry)->type;
        gen(UMENOS, lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), , lookup_symbol_idx(*t));
        (yyval.paraSymbolEntry) = t;
     }
#line 2091 "parserv3.tab.c"
    break;

  case 57: /* exp_b: exp_b TK_Y M exp_b  */
#line 319 "parserv3.y"
                         {
        backpatch((yyvsp[-3].paraBooleano).FALSE, (yyvsp[-1].paraEmanem).quad);
        (yyval.paraBooleano).TRUE = *merge(&(yyvsp[-3].paraBooleano).TRUE, &(yyvsp[-1].paraEmanem).TRUE);
        (yyval.paraBooleano).FALSE = (yyvsp[-1].paraEmanem).FALSE;
     }
#line 2101 "parserv3.tab.c"
    break;

  case 58: /* exp_b: exp_b TK_O M exp_b  */
#line 324 "parserv3.y"
                         {
        backpatch((yyvsp[-3].paraBooleano).TRUE, (yyvsp[-1].paraEmanem).quad);
        (yyval.paraBooleano).FALSE = *merge(&(yyvsp[-3].paraBooleano).FALSE, &(yyvsp[-1].paraEmanem).FALSE);
        (yyval.paraBooleano).TRUE = (yyvsp[-1].paraEmanem).TRUE;
     }
#line 2111 "parserv3.tab.c"
    break;

  case 59: /* exp_b: TK_NO exp_b  */
#line 329 "parserv3.y"
                                 {
        (yyval.paraBooleano).FALSE = (yyvsp[0].paraBooleano).TRUE;
        (yyval.paraBooleano).TRUE = (yyvsp[0].paraBooleano).FALSE;
     }
#line 2120 "parserv3.tab.c"
    break;

  case 60: /* exp_b: operando_b  */
#line 333 "parserv3.y"
                 {
        (yyval.paraBooleano).TRUE = *makeList(nextquad());
        (yyval.paraBooleano).FALSE = *makeList(nextquad()+1);
        gen(O_SII, lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), 'true', );
        gen(O_GOTO, , , );
        }
#line 2131 "parserv3.tab.c"
    break;

  case 61: /* exp_b: TK_VERDADERO  */
#line 339 "parserv3.y"
                   {;}
#line 2137 "parserv3.tab.c"
    break;

  case 62: /* exp_b: TK_FALSO  */
#line 340 "parserv3.y"
               {;}
#line 2143 "parserv3.tab.c"
    break;

  case 63: /* exp_b: expresion TK_OPREL expresion  */
#line 341 "parserv3.y"
                                   {
        (yyval.paraBooleano).TRUE = *makeList(nextquad());
        (yyval.paraBooleano).FALSE = *makeList(nextquad()+1);
        if (TK_OPREL == O_MENOR) {
                gen(O_SIMEN, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), );
        } else if (TK_OPREL == O_MAYOR) {
                gen(O_SIMAY, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), );
        } else if (TK_OPREL == O_MENORI) {
                gen(O_SIMENI, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), );
        } else if (TK_OPREL == O_MAYORI) {
                gen(O_SIMAYI, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), );
        } else if (TK_OPREL == O_IGUAL) {
                gen(O_SII, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), );
        } else if (TK_OPREL == O_DISTINTO) {
                gen(O_SID, lookup_symbol_idx(*(yyvsp[-2].paraSymbolEntry)), lookup_symbol_idx(*(yyvsp[0].paraSymbolEntry)), );
        }
        gen(O_GOTO, , , );
     }
#line 2166 "parserv3.tab.c"
    break;

  case 64: /* exp_b: TK_APERTURA_PARENTESIS exp_b TK_CIERRE_PARENTESIS  */
#line 359 "parserv3.y"
                                                        {
        (yyval.paraBooleano).TRUE = *makeList(nextquad());
        (yyval.paraBooleano).FALSE = *makeList(nextquad()+1);
     }
#line 2175 "parserv3.tab.c"
    break;

  case 65: /* M: %empty  */
#line 364 "parserv3.y"
  {(yyval.paraEmanem).quad = nextquad(); }
#line 2181 "parserv3.tab.c"
    break;

  case 66: /* operando: TK_IDENTIFICADOR  */
#line 365 "parserv3.y"
                          {lookup_symbol((yyvsp[0].paraCadena));}
#line 2187 "parserv3.tab.c"
    break;

  case 67: /* operando: operando TK_PUNTO operando  */
#line 366 "parserv3.y"
                                       {;}
#line 2193 "parserv3.tab.c"
    break;

  case 68: /* operando: operando TK_INICIO_ARRAY expresion TK_FINAL_ARRAY  */
#line 367 "parserv3.y"
                                                             {;}
#line 2199 "parserv3.tab.c"
    break;

  case 69: /* operando: operando TK_REF  */
#line 368 "parserv3.y"
                           {;}
#line 2205 "parserv3.tab.c"
    break;

  case 70: /* operando_b: TK_IDENTIFICADOR_B  */
#line 371 "parserv3.y"
                              {(yyval.paraSymbolEntry) = lookup_symbol((yyvsp[0].paraCadena))}
#line 2211 "parserv3.tab.c"
    break;

  case 71: /* instrucciones: instruccion TK_SECUENCIAL instrucciones  */
#line 375 "parserv3.y"
                                                      {;}
#line 2217 "parserv3.tab.c"
    break;

  case 72: /* instrucciones: instruccion  */
#line 376 "parserv3.y"
                          {;}
#line 2223 "parserv3.tab.c"
    break;

  case 73: /* instruccion: TK_CONTINUAR  */
#line 379 "parserv3.y"
                         {;}
#line 2229 "parserv3.tab.c"
    break;

  case 74: /* instruccion: asignacion  */
#line 380 "parserv3.y"
                       {;}
#line 2235 "parserv3.tab.c"
    break;

  case 75: /* instruccion: alternativa  */
#line 381 "parserv3.y"
                        {;}
#line 2241 "parserv3.tab.c"
    break;

  case 76: /* instruccion: iteracion  */
#line 382 "parserv3.y"
                      {;}
#line 2247 "parserv3.tab.c"
    break;

  case 77: /* instruccion: accion_ll  */
#line 383 "parserv3.y"
                      {;}
#line 2253 "parserv3.tab.c"
    break;

  case 78: /* asignacion: operando TK_ASIGNACION expresion  */
#line 387 "parserv3.y"
        {if(consulta_tipo_TS((yyvsp[-2].paraSymbolEntry).name) == (yyvsp[0].paraSymbolEntry)->type){
                gen(O_ASIGNACION, lookup_symbol_idx((yyvsp[0].paraSymbolEntry)), , lookup_symbol_idx((yyvsp[-2].paraSymbolEntry)));
        }
        else if(consulta_tipo_TS((yyvsp[-2].paraSymbolEntry).name) == T_REAL && (yyvsp[0].paraSymbolEntry)->type == T_ENTERO){
                gen(O_ITOF, lookup_symbol_idx((yyvsp[0].paraSymbolEntry)), , lookup_symbol_idx((yyvsp[0].paraSymbolEntry)));
                gen(O_ASIGNACION, lookup_symbol_idx((yyvsp[0].paraSymbolEntry)), , lookup_symbol_idx((yyvsp[-2].paraSymbolEntry)));
        }
        else{
                error();
        }}
#line 2268 "parserv3.tab.c"
    break;

  case 79: /* asignacion: operando_b TK_ASIGNACION exp_b  */
#line 397 "parserv3.y"
                                          {;}
#line 2274 "parserv3.tab.c"
    break;

  case 80: /* alternativa: TK_SI exp_b TK_ENTONCES instrucciones lista_opciones TK_FSI  */
#line 400 "parserv3.y"
                                                                        {;}
#line 2280 "parserv3.tab.c"
    break;

  case 81: /* lista_opciones: TK_SINO exp_b TK_ENTONCES instrucciones lista_opciones  */
#line 402 "parserv3.y"
                                                                      {;}
#line 2286 "parserv3.tab.c"
    break;

  case 82: /* lista_opciones: %empty  */
#line 403 "parserv3.y"
                {;}
#line 2292 "parserv3.tab.c"
    break;

  case 83: /* iteracion: it_cota_fija  */
#line 406 "parserv3.y"
                       {;}
#line 2298 "parserv3.tab.c"
    break;

  case 84: /* iteracion: it_cota_exp  */
#line 407 "parserv3.y"
                      {;}
#line 2304 "parserv3.tab.c"
    break;

  case 85: /* it_cota_exp: TK_MIENTRAS M exp_b TK_HACER M instrucciones TK_FMIENTRAS  */
#line 411 "parserv3.y"
           {}
#line 2310 "parserv3.tab.c"
    break;

  case 86: /* it_cota_fija: TK_PARA TK_IDENTIFICADOR TK_ASIGNACION expresion TK_HASTA expresion TK_HACER instrucciones TK_FPARA  */
#line 413 "parserv3.y"
                                                                                                                 {;}
#line 2316 "parserv3.tab.c"
    break;

  case 87: /* accion_d: TK_ACCION a_cabecera bloque TK_FACCION  */
#line 416 "parserv3.y"
                                                 {;}
#line 2322 "parserv3.tab.c"
    break;

  case 88: /* funcion_d: TK_FUNCION f_cabecera bloque TK_DEV expresion TK_FFUNCION  */
#line 417 "parserv3.y"
                                                                    {;}
#line 2328 "parserv3.tab.c"
    break;

  case 89: /* a_cabecera: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS d_par_form TK_CIERRE_PARENTESIS TK_SECUENCIAL  */
#line 418 "parserv3.y"
                                                                                                 {;}
#line 2334 "parserv3.tab.c"
    break;

  case 90: /* f_cabecera: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS lista_d_var TK_CIERRE_PARENTESIS TK_DEV d_tipo TK_SECUENCIAL  */
#line 419 "parserv3.y"
                                                                                                                {;}
#line 2340 "parserv3.tab.c"
    break;

  case 91: /* d_par_form: d_p_form TK_SECUENCIAL d_par_form  */
#line 420 "parserv3.y"
                                              {;}
#line 2346 "parserv3.tab.c"
    break;

  case 92: /* d_par_form: %empty  */
#line 421 "parserv3.y"
            {;}
#line 2352 "parserv3.tab.c"
    break;

  case 93: /* d_p_form: TK_ENTRADA lista_id TK_DEFINICION_TIPO d_tipo  */
#line 423 "parserv3.y"
                                                       {;}
#line 2358 "parserv3.tab.c"
    break;

  case 94: /* d_p_form: TK_SALIDA lista_id TK_DEFINICION_TIPO d_tipo  */
#line 424 "parserv3.y"
                                                       {;}
#line 2364 "parserv3.tab.c"
    break;

  case 95: /* d_p_form: TK_ENTRADA_SALIDA lista_id TK_DEFINICION_TIPO d_tipo  */
#line 425 "parserv3.y"
                                                               {;}
#line 2370 "parserv3.tab.c"
    break;

  case 96: /* accion_ll: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS l_ll TK_CIERRE_PARENTESIS  */
#line 428 "parserv3.y"
                                                                            {;}
#line 2376 "parserv3.tab.c"
    break;

  case 97: /* funcion_ll: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS l_ll TK_CIERRE_PARENTESIS  */
#line 429 "parserv3.y"
                                                                             {;}
#line 2382 "parserv3.tab.c"
    break;

  case 99: /* l_ll: expresion  */
#line 430 "parserv3.y"
                                             {;}
#line 2388 "parserv3.tab.c"
    break;


#line 2392 "parserv3.tab.c"

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

#line 432 "parserv3.y"


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
