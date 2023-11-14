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
  YYSYMBOL_TK_ALGORITMO = 3,               /* TK_ALGORITMO  */
  YYSYMBOL_TK_IDENTIFICADOR = 4,           /* TK_IDENTIFICADOR  */
  YYSYMBOL_TK_IDENTIFICADOR_B = 5,         /* TK_IDENTIFICADOR_B  */
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
  YYSYMBOL_TK_TIPOBASE = 22,               /* TK_TIPOBASE  */
  YYSYMBOL_TK_LITERAL_CARACTER = 23,       /* TK_LITERAL_CARACTER  */
  YYSYMBOL_TK_DEFINICION_TIPO = 24,        /* TK_DEFINICION_TIPO  */
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
  YYSYMBOL_operando = 92,                  /* operando  */
  YYSYMBOL_operando_b = 93,                /* operando_b  */
  YYSYMBOL_instrucciones = 94,             /* instrucciones  */
  YYSYMBOL_instruccion = 95,               /* instruccion  */
  YYSYMBOL_asignacion = 96,                /* asignacion  */
  YYSYMBOL_alternativa = 97,               /* alternativa  */
  YYSYMBOL_lista_opciones = 98,            /* lista_opciones  */
  YYSYMBOL_iteracion = 99,                 /* iteracion  */
  YYSYMBOL_it_cota_exp = 100,              /* it_cota_exp  */
  YYSYMBOL_it_cota_fija = 101,             /* it_cota_fija  */
  YYSYMBOL_accion_d = 102,                 /* accion_d  */
  YYSYMBOL_funcion_d = 103,                /* funcion_d  */
  YYSYMBOL_a_cabecera = 104,               /* a_cabecera  */
  YYSYMBOL_f_cabecera = 105,               /* f_cabecera  */
  YYSYMBOL_d_par_form = 106,               /* d_par_form  */
  YYSYMBOL_d_p_form = 107,                 /* d_p_form  */
  YYSYMBOL_accion_ll = 108,                /* accion_ll  */
  YYSYMBOL_funcion_ll = 109,               /* funcion_ll  */
  YYSYMBOL_l_ll = 110                      /* l_ll  */
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
#define YYLAST   258

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  98
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  235

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
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    54,    56,    58,    59,    60,    63,    64,
      65,    68,    70,    71,    72,    73,    78,    80,    82,    86,
      87,    90,    91,    92,    93,    94,    95,    98,    99,   102,
     103,   108,   109,   110,   111,   112,   114,   115,   118,   119,
     122,   123,   124,   127,   129,   133,   134,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   149,   150,   151,
     152,   153,   154,   155,   156,   159,   160,   161,   162,   165,
     169,   170,   173,   174,   175,   176,   177,   180,   181,   184,
     186,   187,   190,   191,   194,   196,   199,   200,   201,   202,
     203,   204,   206,   207,   208,   211,   212,   213,   213
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
  "\"end of file\"", "error", "\"invalid token\"", "TK_ALGORITMO",
  "TK_IDENTIFICADOR", "TK_IDENTIFICADOR_B", "TK_FALGORITMO",
  "TK_SECUENCIAL", "TK_COMENTARIO", "TK_TIPO", "TK_FTIPO", "TK_CONST",
  "TK_FCONST", "TK_VAR", "TK_FVAR", "TK_CREACION_TIPO", "TK_TUPLA",
  "TK_FTUPLA", "TK_TABLA", "TK_FINAL_ARRAY", "TK_DE", "TK_SUBRANGO",
  "TK_TIPOBASE", "TK_LITERAL_CARACTER", "TK_DEFINICION_TIPO", "TK_PUNTO",
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
  "exp_a", "exp_b", "operando", "operando_b", "instrucciones",
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

#define YYPACT_NINF (-114)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-24)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
       9,    34,    43,    47,  -114,    22,    59,    86,    13,     8,
      22,    22,    79,    87,    89,   105,   134,   119,   145,    12,
      13,    13,    13,   146,   154,    -9,     8,     8,  -114,  -114,
       7,   138,    -6,   158,   131,   177,   168,   169,  -114,   153,
    -114,   111,   111,   191,    10,  -114,   189,  -114,  -114,  -114,
    -114,  -114,  -114,  -114,  -114,  -114,   157,    13,   159,    13,
     134,   134,   190,   171,  -114,  -114,  -114,    11,   197,   176,
    -114,  -114,     7,    44,  -114,    44,   196,   183,  -114,   100,
      94,  -114,  -114,   198,   199,   202,   203,  -114,   134,   204,
       7,  -114,    55,   172,  -114,   111,  -114,  -114,   111,   174,
      69,  -114,   -15,   163,   211,    55,  -114,   111,    12,   -14,
     155,   134,   151,  -114,  -114,  -114,  -114,    55,   193,   205,
     114,  -114,  -114,   141,   137,    59,   114,    44,    44,    44,
      44,    44,    44,    86,    86,    86,    86,  -114,  -114,   212,
     194,   180,   137,   142,  -114,    55,   111,   111,    12,    12,
      55,  -114,   201,   174,    32,  -114,   134,   134,   134,   182,
     218,  -114,   185,    55,   186,     7,  -114,   207,  -114,  -114,
    -114,   141,   141,  -114,  -114,  -114,  -114,  -114,  -114,  -114,
    -114,   134,    55,  -114,  -114,  -114,  -114,  -114,   175,   173,
     178,  -114,   208,   209,   210,   222,   -14,   170,   181,  -114,
     229,   114,  -114,  -114,   111,   187,  -114,    55,     7,     7,
       7,  -114,  -114,     7,  -114,   197,   220,    71,  -114,   188,
    -114,  -114,  -114,   230,  -114,   223,    12,    12,  -114,     7,
     175,   192,  -114,  -114,  -114
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       0,     0,     0,     0,     1,     7,    20,    35,    15,    10,
       7,     7,     0,     0,     0,     0,    37,     0,     0,     0,
      15,    15,    15,     0,     0,     0,    10,    10,     5,     6,
       0,     0,     0,     0,    39,     0,     0,     0,     4,    65,
      72,     0,     0,     0,     0,    11,    71,    73,    74,    75,
      83,    82,    76,    12,    13,    14,     0,    15,     0,    15,
      37,    37,     0,    40,    42,     8,     9,    65,    30,     0,
      26,    28,     0,     0,    55,     0,     0,     0,    27,    45,
      54,    46,    16,     0,     0,     0,     0,    17,     0,     0,
       0,     2,     0,    65,    69,     0,    61,    62,     0,     0,
       0,    60,     0,     0,     0,     0,    68,     0,     0,    91,
       0,    37,     0,    43,    44,     3,    41,     0,     0,     0,
       0,    25,    65,    56,     0,    20,     0,     0,     0,     0,
       0,     0,     0,    35,    35,    35,    35,    38,    18,     0,
      98,     0,    45,     0,    59,     0,     0,     0,     0,     0,
       0,    66,     0,    77,    78,    70,     0,     0,     0,     0,
       0,    86,     0,     0,     0,     0,    21,     0,    53,    19,
      24,    47,    48,    51,    52,    49,    50,    33,    34,    32,
      31,    37,     0,    95,    64,    63,    58,    57,    81,     0,
       0,    67,     0,     0,     0,     0,    91,     0,     0,    96,
       0,     0,    36,    97,     0,     0,    84,     0,     0,     0,
       0,    88,    90,     0,    87,    30,     0,     0,    79,     0,
      92,    93,    94,     0,    29,     0,     0,     0,    89,     0,
      81,     0,    22,    80,    85
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -114,  -114,  -114,  -114,   179,   121,    24,   166,    81,   152,
    -114,   115,   -69,  -113,    27,    46,   -55,   -78,  -114,  -114,
     195,   -40,   -29,   -38,   -19,  -114,   -99,  -114,  -114,  -114,
      14,  -114,  -114,  -114,  -114,  -114,  -114,  -114,    50,  -114,
    -114,  -114,  -109
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     2,     8,    17,     9,    25,    18,    19,    20,    21,
      22,    13,    76,    77,   119,    15,    35,    36,    62,    63,
      64,    78,    79,   100,    80,   101,    45,    46,    47,    48,
     205,    49,    50,    51,    26,    27,    57,    59,   159,   160,
      52,    81,   141
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      44,    99,    99,   121,   102,   113,   114,   167,   164,   155,
     137,    67,     1,   170,   156,   157,    39,    83,   -23,    60,
      61,   139,     6,    68,     7,    69,    16,   146,   147,    70,
      71,     6,    84,     7,    72,   104,   105,   106,     3,    73,
      85,    86,   149,     4,   123,    74,   124,    75,   122,   188,
     189,   117,   140,   158,     5,    99,   162,   143,    99,    93,
     144,   107,    40,    12,    41,   152,   142,   153,    42,   154,
      23,    43,    24,   203,   146,   147,    73,   140,   192,   193,
     194,   110,    74,   112,    75,   151,    10,    73,   216,    44,
      14,    10,    10,    74,    30,    75,   200,    31,   171,   172,
     173,   174,   175,   176,    32,   185,    99,    99,   186,   187,
     190,   146,   147,   146,   147,    93,    94,    33,    93,   104,
     105,   106,   148,   198,   226,    37,   202,   230,   231,    44,
      44,   127,   128,   129,   130,   131,   132,    71,    34,   220,
     221,   222,   140,    73,   223,    82,    73,    65,    66,    74,
      56,    95,    74,    38,    75,    96,    97,    11,    58,    98,
     232,    88,    11,    11,    99,    87,   217,   219,   127,   128,
     129,   130,   131,   132,   129,   130,   131,   132,   168,   177,
     178,   179,   180,   184,   146,   147,    53,    54,    55,    28,
      29,    89,    90,    92,    91,   103,   108,   109,   115,   111,
      61,   118,   120,   125,   126,   133,   134,    44,    44,   135,
     136,   138,   117,   145,   150,   122,   163,   165,   161,   181,
     191,   183,   166,   195,   182,   196,   197,   199,   201,   211,
     204,   206,   208,   209,   210,   213,   215,   228,   207,   225,
     169,   218,   224,   229,   233,   227,   212,   214,     0,     0,
       0,     0,     0,   234,     0,     0,     0,     0,   116
};

static const yytype_int16 yycheck[] =
{
      19,    41,    42,    72,    42,    60,    61,   120,   117,   108,
      88,     4,     3,   126,    28,    29,     4,    23,     7,    28,
      29,    90,     9,    16,    11,    18,    13,    42,    43,    22,
      23,     9,    38,    11,    27,    25,    26,    27,     4,    32,
      46,    47,    57,     0,    73,    38,    75,    40,     4,   148,
     149,    40,    92,    67,     7,    95,   111,    95,    98,     4,
      98,    51,    50,     4,    52,   105,    95,   107,    56,   107,
      62,    59,    64,   182,    42,    43,    32,   117,   156,   157,
     158,    57,    38,    59,    40,   104,     5,    32,   201,   108,
       4,    10,    11,    38,    15,    40,   165,    10,   127,   128,
     129,   130,   131,   132,    15,   145,   146,   147,   146,   147,
     150,    42,    43,    42,    43,     4,     5,    12,     4,    25,
      26,    27,    53,   163,    53,     6,   181,   226,   227,   148,
     149,    31,    32,    33,    34,    35,    36,    23,     4,   208,
     209,   210,   182,    32,   213,     7,    32,    26,    27,    38,
       4,    40,    38,     8,    40,    44,    45,     5,     4,    48,
     229,    30,    10,    11,   204,     7,   204,   207,    31,    32,
      33,    34,    35,    36,    33,    34,    35,    36,    41,   133,
     134,   135,   136,    41,    42,    43,    20,    21,    22,    10,
      11,    14,    24,    40,    25,     4,     7,    40,     8,    40,
      29,     4,    26,     7,    21,     7,     7,   226,   227,     7,
       7,     7,    40,    39,    51,     4,    65,    24,    63,     7,
      19,    41,    17,    41,    30,     7,    41,    41,    21,     7,
      55,    58,    24,    24,    24,    65,     7,     7,    60,    19,
     125,    54,   215,    20,   230,    57,   196,    66,    -1,    -1,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    63
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,    69,     4,     0,     7,     9,    11,    70,    72,
      76,    77,     4,    79,     4,    83,    13,    71,    74,    75,
      76,    77,    78,    62,    64,    73,   102,   103,    72,    72,
      15,    10,    15,    12,     4,    84,    85,     6,     8,     4,
      50,    52,    56,    59,    92,    94,    95,    96,    97,    99,
     100,   101,   108,    75,    75,    75,     4,   104,     4,   105,
      28,    29,    86,    87,    88,    73,    73,     4,    16,    18,
      22,    23,    27,    32,    38,    40,    80,    81,    89,    90,
      92,   109,     7,    23,    38,    46,    47,     7,    30,    14,
      24,    25,    40,     4,     5,    40,    44,    45,    48,    89,
      91,    93,    91,     4,    25,    26,    27,    51,     7,    40,
      74,    40,    74,    84,    84,     8,    88,    40,     4,    82,
      26,    80,     4,    90,    90,     7,    21,    31,    32,    33,
      34,    35,    36,     7,     7,     7,     7,    85,     7,    80,
      89,   110,    90,    91,    91,    39,    42,    43,    53,    57,
      51,    92,    89,    89,    91,    94,    28,    29,    67,   106,
     107,    63,    84,    65,   110,    24,    17,    81,    41,    79,
      81,    90,    90,    90,    90,    90,    90,    83,    83,    83,
      83,     7,    30,    41,    41,    89,    91,    91,    94,    94,
      89,    19,    85,    85,    85,    41,     7,    41,    89,    41,
      80,    21,    84,   110,    55,    98,    58,    60,    24,    24,
      24,     7,   106,    65,    66,     7,    81,    91,    54,    89,
      80,    80,    80,    80,    82,    19,    53,    57,     7,    20,
      94,    94,    80,    98,    61
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
      91,    91,    91,    91,    91,    92,    92,    92,    92,    93,
      94,    94,    95,    95,    95,    95,    95,    96,    96,    97,
      98,    98,    99,    99,   100,   101,   102,   103,   104,   105,
     106,   106,   107,   107,   107,   108,   109,   110,   110
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     7,     4,     2,     2,     2,     0,     2,     2,
       0,     2,     2,     2,     2,     0,     4,     4,     4,     5,
       0,     3,     8,     1,     3,     2,     1,     1,     1,     5,
       0,     5,     5,     5,     5,     0,     5,     0,     3,     1,
       1,     2,     1,     2,     2,     1,     1,     3,     3,     3,
       3,     3,     3,     3,     1,     1,     2,     3,     3,     2,
       1,     1,     1,     3,     3,     1,     3,     4,     2,     1,
       3,     1,     1,     1,     1,     1,     1,     3,     3,     6,
       5,     0,     1,     1,     5,     9,     4,     6,     5,     7,
       3,     0,     4,     4,     4,     4,     4,     3,     1
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
#line 52 "parserv3.y"
                                                                                                          {;}
#line 1618 "parserv3.tab.c"
    break;

  case 3: /* cabecera_alg: decl_globales decl_a_f decl_ent_sal TK_COMENTARIO  */
#line 54 "parserv3.y"
                                                               {;}
#line 1624 "parserv3.tab.c"
    break;

  case 4: /* bloque_alg: bloque TK_COMENTARIO  */
#line 56 "parserv3.y"
                                {;}
#line 1630 "parserv3.tab.c"
    break;

  case 5: /* decl_globales: declaracion_tipo decl_globales  */
#line 58 "parserv3.y"
                                             {;}
#line 1636 "parserv3.tab.c"
    break;

  case 6: /* decl_globales: declaracion_cte decl_globales  */
#line 59 "parserv3.y"
                                            {;}
#line 1642 "parserv3.tab.c"
    break;

  case 7: /* decl_globales: %empty  */
#line 60 "parserv3.y"
               {;}
#line 1648 "parserv3.tab.c"
    break;

  case 8: /* decl_a_f: accion_d decl_a_f  */
#line 63 "parserv3.y"
                           {;}
#line 1654 "parserv3.tab.c"
    break;

  case 9: /* decl_a_f: funcion_d decl_a_f  */
#line 64 "parserv3.y"
                            {;}
#line 1660 "parserv3.tab.c"
    break;

  case 10: /* decl_a_f: %empty  */
#line 65 "parserv3.y"
          {;}
#line 1666 "parserv3.tab.c"
    break;

  case 11: /* bloque: declaraciones instrucciones  */
#line 68 "parserv3.y"
                                   {;}
#line 1672 "parserv3.tab.c"
    break;

  case 12: /* declaraciones: declaracion_tipo declaraciones  */
#line 70 "parserv3.y"
                                             {;}
#line 1678 "parserv3.tab.c"
    break;

  case 13: /* declaraciones: declaracion_cte declaraciones  */
#line 71 "parserv3.y"
                                            {;}
#line 1684 "parserv3.tab.c"
    break;

  case 14: /* declaraciones: declaracion_var declaraciones  */
#line 72 "parserv3.y"
                                            {;}
#line 1690 "parserv3.tab.c"
    break;

  case 15: /* declaraciones: %empty  */
#line 73 "parserv3.y"
               {;}
#line 1696 "parserv3.tab.c"
    break;

  case 16: /* declaracion_tipo: TK_TIPO lista_d_tipo TK_FTIPO TK_SECUENCIAL  */
#line 78 "parserv3.y"
                                                             {;}
#line 1702 "parserv3.tab.c"
    break;

  case 17: /* declaracion_cte: TK_CONST lista_d_cte TK_FCONST TK_SECUENCIAL  */
#line 80 "parserv3.y"
                                                             {;}
#line 1708 "parserv3.tab.c"
    break;

  case 18: /* declaracion_var: TK_VAR lista_d_var TK_FVAR TK_SECUENCIAL  */
#line 82 "parserv3.y"
                                                         {;}
#line 1714 "parserv3.tab.c"
    break;

  case 19: /* lista_d_tipo: TK_IDENTIFICADOR TK_CREACION_TIPO d_tipo TK_SECUENCIAL lista_d_tipo  */
#line 86 "parserv3.y"
                                                                                 {;}
#line 1720 "parserv3.tab.c"
    break;

  case 20: /* lista_d_tipo: %empty  */
#line 87 "parserv3.y"
              {;}
#line 1726 "parserv3.tab.c"
    break;

  case 21: /* d_tipo: TK_TUPLA lista_campos TK_FTUPLA  */
#line 90 "parserv3.y"
                                       {;}
#line 1732 "parserv3.tab.c"
    break;

  case 22: /* d_tipo: TK_TABLA TK_INICIO_ARRAY expresion_t TK_SUBRANGO expresion_t TK_FINAL_ARRAY TK_DE d_tipo  */
#line 91 "parserv3.y"
                                                                                                {;}
#line 1738 "parserv3.tab.c"
    break;

  case 23: /* d_tipo: TK_IDENTIFICADOR  */
#line 92 "parserv3.y"
                        {;}
#line 1744 "parserv3.tab.c"
    break;

  case 24: /* d_tipo: expresion_t TK_SUBRANGO expresion_t  */
#line 93 "parserv3.y"
                                           {;}
#line 1750 "parserv3.tab.c"
    break;

  case 25: /* d_tipo: TK_REF d_tipo  */
#line 94 "parserv3.y"
                     {;}
#line 1756 "parserv3.tab.c"
    break;

  case 26: /* d_tipo: TK_TIPOBASE  */
#line 95 "parserv3.y"
                   {;}
#line 1762 "parserv3.tab.c"
    break;

  case 27: /* expresion_t: expresion  */
#line 98 "parserv3.y"
                      {;}
#line 1768 "parserv3.tab.c"
    break;

  case 28: /* expresion_t: TK_LITERAL_CARACTER  */
#line 99 "parserv3.y"
                                {;}
#line 1774 "parserv3.tab.c"
    break;

  case 29: /* lista_campos: TK_IDENTIFICADOR TK_DEFINICION_TIPO d_tipo TK_SECUENCIAL lista_campos  */
#line 102 "parserv3.y"
                                                                                   {;}
#line 1780 "parserv3.tab.c"
    break;

  case 30: /* lista_campos: %empty  */
#line 103 "parserv3.y"
              {;}
#line 1786 "parserv3.tab.c"
    break;

  case 31: /* lista_d_cte: TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_BOOLEANO TK_SECUENCIAL lista_d_cte  */
#line 108 "parserv3.y"
                                                                                            {;}
#line 1792 "parserv3.tab.c"
    break;

  case 32: /* lista_d_cte: TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_CADENA TK_SECUENCIAL lista_d_cte  */
#line 109 "parserv3.y"
                                                                                          {;}
#line 1798 "parserv3.tab.c"
    break;

  case 33: /* lista_d_cte: TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_CARACTER TK_SECUENCIAL lista_d_cte  */
#line 110 "parserv3.y"
                                                                                            {;}
#line 1804 "parserv3.tab.c"
    break;

  case 34: /* lista_d_cte: TK_IDENTIFICADOR TK_CREACION_TIPO TK_LITERAL_NUMERICO TK_SECUENCIAL lista_d_cte  */
#line 111 "parserv3.y"
                                                                                            {;}
#line 1810 "parserv3.tab.c"
    break;

  case 35: /* lista_d_cte: %empty  */
#line 112 "parserv3.y"
             {;}
#line 1816 "parserv3.tab.c"
    break;

  case 36: /* lista_d_var: lista_id TK_DEFINICION_TIPO d_tipo TK_SECUENCIAL lista_d_var  */
#line 114 "parserv3.y"
                                                                         {;}
#line 1822 "parserv3.tab.c"
    break;

  case 37: /* lista_d_var: %empty  */
#line 115 "parserv3.y"
             {;}
#line 1828 "parserv3.tab.c"
    break;

  case 38: /* lista_id: TK_IDENTIFICADOR TK_SEPARADOR lista_id  */
#line 118 "parserv3.y"
                                                {;}
#line 1834 "parserv3.tab.c"
    break;

  case 39: /* lista_id: TK_IDENTIFICADOR  */
#line 119 "parserv3.y"
                           {;}
#line 1840 "parserv3.tab.c"
    break;

  case 40: /* decl_ent_sal: decl_ent  */
#line 122 "parserv3.y"
                       {;}
#line 1846 "parserv3.tab.c"
    break;

  case 41: /* decl_ent_sal: decl_ent decl_salida  */
#line 123 "parserv3.y"
                                   {;}
#line 1852 "parserv3.tab.c"
    break;

  case 42: /* decl_ent_sal: decl_salida  */
#line 124 "parserv3.y"
                         {;}
#line 1858 "parserv3.tab.c"
    break;

  case 43: /* decl_ent: TK_ENTRADA lista_d_var  */
#line 127 "parserv3.y"
                                {;}
#line 1864 "parserv3.tab.c"
    break;

  case 44: /* decl_salida: TK_SALIDA lista_d_var  */
#line 129 "parserv3.y"
                                  {;}
#line 1870 "parserv3.tab.c"
    break;

  case 45: /* expresion: exp_a  */
#line 133 "parserv3.y"
                {;}
#line 1876 "parserv3.tab.c"
    break;

  case 46: /* expresion: funcion_ll  */
#line 134 "parserv3.y"
                     {;}
#line 1882 "parserv3.tab.c"
    break;

  case 47: /* exp_a: exp_a TK_SUMA exp_a  */
#line 137 "parserv3.y"
                          {;}
#line 1888 "parserv3.tab.c"
    break;

  case 48: /* exp_a: exp_a TK_RESTA exp_a  */
#line 138 "parserv3.y"
                           {;}
#line 1894 "parserv3.tab.c"
    break;

  case 49: /* exp_a: exp_a TK_PRODUCTO exp_a  */
#line 139 "parserv3.y"
                              {;}
#line 1900 "parserv3.tab.c"
    break;

  case 50: /* exp_a: exp_a TK_DIVISION exp_a  */
#line 140 "parserv3.y"
                              {;}
#line 1906 "parserv3.tab.c"
    break;

  case 51: /* exp_a: exp_a TK_MODULO exp_a  */
#line 141 "parserv3.y"
                            {;}
#line 1912 "parserv3.tab.c"
    break;

  case 52: /* exp_a: exp_a TK_DIV exp_a  */
#line 142 "parserv3.y"
                         {;}
#line 1918 "parserv3.tab.c"
    break;

  case 53: /* exp_a: TK_APERTURA_PARENTESIS exp_a TK_CIERRE_PARENTESIS  */
#line 143 "parserv3.y"
                                                        {;}
#line 1924 "parserv3.tab.c"
    break;

  case 54: /* exp_a: operando  */
#line 144 "parserv3.y"
               {;}
#line 1930 "parserv3.tab.c"
    break;

  case 55: /* exp_a: TK_LITERAL_NUMERICO  */
#line 145 "parserv3.y"
                          {;}
#line 1936 "parserv3.tab.c"
    break;

  case 56: /* exp_a: TK_RESTA exp_a  */
#line 146 "parserv3.y"
                                  {;}
#line 1942 "parserv3.tab.c"
    break;

  case 57: /* exp_b: exp_b TK_Y exp_b  */
#line 149 "parserv3.y"
                       {;}
#line 1948 "parserv3.tab.c"
    break;

  case 58: /* exp_b: exp_b TK_O exp_b  */
#line 150 "parserv3.y"
                       {;}
#line 1954 "parserv3.tab.c"
    break;

  case 59: /* exp_b: TK_NO exp_b  */
#line 151 "parserv3.y"
                                 {;}
#line 1960 "parserv3.tab.c"
    break;

  case 60: /* exp_b: operando_b  */
#line 152 "parserv3.y"
                 {;}
#line 1966 "parserv3.tab.c"
    break;

  case 61: /* exp_b: TK_VERDADERO  */
#line 153 "parserv3.y"
                   {;}
#line 1972 "parserv3.tab.c"
    break;

  case 62: /* exp_b: TK_FALSO  */
#line 154 "parserv3.y"
               {;}
#line 1978 "parserv3.tab.c"
    break;

  case 63: /* exp_b: expresion TK_OPREL expresion  */
#line 155 "parserv3.y"
                                   {;}
#line 1984 "parserv3.tab.c"
    break;

  case 64: /* exp_b: TK_APERTURA_PARENTESIS exp_b TK_CIERRE_PARENTESIS  */
#line 156 "parserv3.y"
                                                        {;}
#line 1990 "parserv3.tab.c"
    break;

  case 65: /* operando: TK_IDENTIFICADOR  */
#line 159 "parserv3.y"
                          {;}
#line 1996 "parserv3.tab.c"
    break;

  case 66: /* operando: operando TK_PUNTO operando  */
#line 160 "parserv3.y"
                                       {;}
#line 2002 "parserv3.tab.c"
    break;

  case 67: /* operando: operando TK_INICIO_ARRAY expresion TK_FINAL_ARRAY  */
#line 161 "parserv3.y"
                                                             {;}
#line 2008 "parserv3.tab.c"
    break;

  case 68: /* operando: operando TK_REF  */
#line 162 "parserv3.y"
                           {;}
#line 2014 "parserv3.tab.c"
    break;

  case 69: /* operando_b: TK_IDENTIFICADOR_B  */
#line 165 "parserv3.y"
                              {;}
#line 2020 "parserv3.tab.c"
    break;

  case 70: /* instrucciones: instruccion TK_SECUENCIAL instrucciones  */
#line 169 "parserv3.y"
                                                      {;}
#line 2026 "parserv3.tab.c"
    break;

  case 71: /* instrucciones: instruccion  */
#line 170 "parserv3.y"
                          {;}
#line 2032 "parserv3.tab.c"
    break;

  case 72: /* instruccion: TK_CONTINUAR  */
#line 173 "parserv3.y"
                         {;}
#line 2038 "parserv3.tab.c"
    break;

  case 73: /* instruccion: asignacion  */
#line 174 "parserv3.y"
                       {;}
#line 2044 "parserv3.tab.c"
    break;

  case 74: /* instruccion: alternativa  */
#line 175 "parserv3.y"
                        {;}
#line 2050 "parserv3.tab.c"
    break;

  case 75: /* instruccion: iteracion  */
#line 176 "parserv3.y"
                      {;}
#line 2056 "parserv3.tab.c"
    break;

  case 76: /* instruccion: accion_ll  */
#line 177 "parserv3.y"
                      {;}
#line 2062 "parserv3.tab.c"
    break;

  case 77: /* asignacion: operando TK_ASIGNACION expresion  */
#line 180 "parserv3.y"
                                            {;}
#line 2068 "parserv3.tab.c"
    break;

  case 78: /* asignacion: operando TK_ASIGNACION exp_b  */
#line 181 "parserv3.y"
                                        {;}
#line 2074 "parserv3.tab.c"
    break;

  case 79: /* alternativa: TK_SI exp_b TK_ENTONCES instrucciones lista_opciones TK_FSI  */
#line 184 "parserv3.y"
                                                                        {;}
#line 2080 "parserv3.tab.c"
    break;

  case 80: /* lista_opciones: TK_SINO exp_b TK_ENTONCES instrucciones lista_opciones  */
#line 186 "parserv3.y"
                                                                      {;}
#line 2086 "parserv3.tab.c"
    break;

  case 81: /* lista_opciones: %empty  */
#line 187 "parserv3.y"
                {;}
#line 2092 "parserv3.tab.c"
    break;

  case 82: /* iteracion: it_cota_fija  */
#line 190 "parserv3.y"
                       {;}
#line 2098 "parserv3.tab.c"
    break;

  case 83: /* iteracion: it_cota_exp  */
#line 191 "parserv3.y"
                      {;}
#line 2104 "parserv3.tab.c"
    break;

  case 84: /* it_cota_exp: TK_MIENTRAS exp_b TK_HACER instrucciones TK_FMIENTRAS  */
#line 194 "parserv3.y"
                                                                  {;}
#line 2110 "parserv3.tab.c"
    break;

  case 85: /* it_cota_fija: TK_PARA TK_IDENTIFICADOR TK_ASIGNACION expresion TK_HASTA expresion TK_HACER instrucciones TK_FPARA  */
#line 196 "parserv3.y"
                                                                                                                 {;}
#line 2116 "parserv3.tab.c"
    break;

  case 86: /* accion_d: TK_ACCION a_cabecera bloque TK_FACCION  */
#line 199 "parserv3.y"
                                                 {;}
#line 2122 "parserv3.tab.c"
    break;

  case 87: /* funcion_d: TK_FUNCION f_cabecera bloque TK_DEV expresion TK_FFUNCION  */
#line 200 "parserv3.y"
                                                                    {;}
#line 2128 "parserv3.tab.c"
    break;

  case 88: /* a_cabecera: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS d_par_form TK_CIERRE_PARENTESIS TK_SECUENCIAL  */
#line 201 "parserv3.y"
                                                                                                 {;}
#line 2134 "parserv3.tab.c"
    break;

  case 89: /* f_cabecera: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS lista_d_var TK_CIERRE_PARENTESIS TK_DEV d_tipo TK_SECUENCIAL  */
#line 202 "parserv3.y"
                                                                                                                {;}
#line 2140 "parserv3.tab.c"
    break;

  case 90: /* d_par_form: d_p_form TK_SECUENCIAL d_par_form  */
#line 203 "parserv3.y"
                                              {;}
#line 2146 "parserv3.tab.c"
    break;

  case 91: /* d_par_form: %empty  */
#line 204 "parserv3.y"
            {;}
#line 2152 "parserv3.tab.c"
    break;

  case 92: /* d_p_form: TK_ENTRADA lista_id TK_DEFINICION_TIPO d_tipo  */
#line 206 "parserv3.y"
                                                       {;}
#line 2158 "parserv3.tab.c"
    break;

  case 93: /* d_p_form: TK_SALIDA lista_id TK_DEFINICION_TIPO d_tipo  */
#line 207 "parserv3.y"
                                                       {;}
#line 2164 "parserv3.tab.c"
    break;

  case 94: /* d_p_form: TK_ENTRADA_SALIDA lista_id TK_DEFINICION_TIPO d_tipo  */
#line 208 "parserv3.y"
                                                               {;}
#line 2170 "parserv3.tab.c"
    break;

  case 95: /* accion_ll: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS l_ll TK_CIERRE_PARENTESIS  */
#line 211 "parserv3.y"
                                                                            {;}
#line 2176 "parserv3.tab.c"
    break;

  case 96: /* funcion_ll: TK_IDENTIFICADOR TK_APERTURA_PARENTESIS l_ll TK_CIERRE_PARENTESIS  */
#line 212 "parserv3.y"
                                                                             {;}
#line 2182 "parserv3.tab.c"
    break;

  case 98: /* l_ll: expresion  */
#line 213 "parserv3.y"
                                             {;}
#line 2188 "parserv3.tab.c"
    break;


#line 2192 "parserv3.tab.c"

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

#line 215 "parserv3.y"


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
