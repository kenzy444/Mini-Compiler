
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "syntaxique.y"
 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"
   int nb_ligne=1, c=1;
   int yylex(void);
   void yyerror(char *s);
 char tabvar[50][100];
 int k=0,ty=0,x;char tmp[100] ;



/* Line 189 of yacc.c  */
#line 87 "syntaxique.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     mc_idenD = 258,
     mc_progID = 259,
     mc_dataD = 260,
     mc_workS = 261,
     mc_procD = 262,
     mc_stopR = 263,
     mc_int = 264,
     mc_float = 265,
     mc_char = 266,
     mc_str = 267,
     mc_cnst = 268,
     mc_accpt = 269,
     mc_display = 270,
     mc_if = 271,
     mc_else = 272,
     mc_end = 273,
     mc_move = 274,
     mc_to = 275,
     mc_or = 276,
     mc_and = 277,
     mc_line = 278,
     mc_size = 279,
     mc_not = 280,
     affec = 281,
     PO = 282,
     PF = 283,
     mult = 284,
     moins = 285,
     plus = 286,
     bare = 287,
     sup = 288,
     inf = 289,
     supeg = 290,
     infeg = 291,
     egale = 292,
     difrnt = 293,
     idf = 294,
     intNS = 295,
     intS = 296,
     car = 297,
     str = 298,
     reelNS = 299,
     reelS = 300,
     division = 301,
     vrg = 302,
     point = 303,
     apst = 304,
     guil = 305,
     Dpoints = 306,
     adr = 307,
     dollar = 308,
     prcent = 309,
     hashtag = 310,
     etcom = 311
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 13 "syntaxique.y"

  int entier;
  char *str;
  float reel;
  char caractere;
  int type; 
struct s {
float val;
int type;
}s;     
 



/* Line 214 of yacc.c  */
#line 194 "syntaxique.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 206 "syntaxique.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   182

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  58
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNRULES -- Number of states.  */
#define YYNSTATES  180

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   312

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      55,    56,    57
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    13,    16,    19,    22,    26,    30,    34,
      37,    39,    44,    48,    50,    52,    54,    56,    60,    64,
      72,    74,    76,    78,    80,    84,    86,    89,    91,    93,
      95,    97,   101,   104,   107,   110,   113,   117,   123,   129,
     133,   137,   139,   143,   147,   149,   153,   155,   157,   159,
     161,   163,   165,   167,   178,   180,   182,   184,   186,   194,
     199,   202,   204,   207,   209,   211,   213,   216,   219,   229,
     236,   239,   241,   245,   247,   249,   253,   255,   257,   259,
     263,   269,   271,   273,   275,   277,   279,   281,   288,   296
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      59,     0,    -1,     3,     4,    39,     5,     6,    60,     7,
      67,     8,    -1,    61,    48,    -1,    62,    48,    -1,    64,
      48,    -1,    61,    48,    60,    -1,    62,    48,    60,    -1,
      64,    48,    60,    -1,    66,    65,    -1,    66,    -1,    13,
      39,    26,    63,    -1,    13,    66,    65,    -1,    40,    -1,
      41,    -1,    44,    -1,    45,    -1,    49,    42,    49,    -1,
      50,    43,    50,    -1,    39,    23,    40,    47,    24,    40,
      65,    -1,     9,    -1,    10,    -1,    11,    -1,    12,    -1,
      39,    32,    66,    -1,    39,    -1,    68,    48,    -1,    74,
      -1,    76,    -1,    81,    -1,    90,    -1,    68,    48,    67,
      -1,    74,    67,    -1,    76,    67,    -1,    81,    67,    -1,
      90,    67,    -1,    39,    26,    69,    -1,    39,    26,    49,
      42,    49,    -1,    39,    26,    50,    43,    50,    -1,    69,
      31,    70,    -1,    69,    30,    70,    -1,    70,    -1,    70,
      46,    71,    -1,    70,    29,    71,    -1,    71,    -1,    27,
      69,    28,    -1,    72,    -1,    39,    -1,    73,    -1,    40,
      -1,    41,    -1,    44,    -1,    45,    -1,    14,    27,    50,
      75,    50,    51,    52,    39,    28,    48,    -1,    53,    -1,
      54,    -1,    55,    -1,    56,    -1,    15,    27,    50,    80,
      77,    28,    48,    -1,    78,    50,    51,    79,    -1,    75,
      78,    -1,    75,    -1,    39,    79,    -1,    39,    -1,    43,
      -1,    57,    -1,    57,    80,    -1,    43,    80,    -1,    16,
      82,    51,    67,    17,    51,    67,    18,    48,    -1,    16,
      82,    51,    67,    18,    48,    -1,    25,    82,    -1,    83,
      -1,    84,    21,    85,    -1,    85,    -1,    83,    -1,    86,
      22,    87,    -1,    87,    -1,    85,    -1,    88,    -1,    27,
      82,    28,    -1,    27,    69,    89,    69,    28,    -1,    33,
      -1,    34,    -1,    35,    -1,    36,    -1,    37,    -1,    38,
      -1,    19,    39,    20,    39,    67,    18,    -1,    19,    39,
      20,    40,    67,    18,    48,    -1,    19,    40,    20,    40,
      67,    18,    48,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    37,    37,    39,    40,    41,    42,    43,    44,    46,
      47,    49,    50,    52,    53,    54,    55,    56,    57,    59,
      61,    62,    63,    64,    66,    67,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    80,    93,   107,   125,
     127,   129,   131,   134,   137,   139,   140,   142,   154,   156,
     157,   158,   159,   161,   163,   164,   165,   166,   168,   170,
     172,   173,   175,   176,   178,   179,   180,   181,   183,   184,
     186,   187,   189,   190,   192,   194,   195,   197,   199,   200,
     202,   204,   205,   206,   207,   208,   209,   211,   212,   213
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "mc_idenD", "mc_progID", "mc_dataD",
  "mc_workS", "mc_procD", "mc_stopR", "mc_int", "mc_float", "mc_char",
  "mc_str", "mc_cnst", "mc_accpt", "mc_display", "mc_if", "mc_else",
  "mc_end", "mc_move", "mc_to", "mc_or", "mc_and", "mc_line", "mc_size",
  "mc_not", "affec", "PO", "PF", "mult", "moins", "plus", "bare", "sup",
  "inf", "supeg", "infeg", "egale", "difrnt", "idf", "intNS", "intS",
  "car", "str", "reelNS", "reelS", "division", "vrg", "point", "apst",
  "guil", "Dpoints", "adr", "dollar", "prcent", "hashtag", "etcom",
  "\" \"", "$accept", "S", "DEC", "Dec_var", "Dec_const", "ValeurCnst",
  "Dec_tab", "TYPE", "ListIDF", "INST", "Affect", "Expression", "T", "F",
  "ID", "Val", "Scan", "Sign_for", "Print", "Affichage", "Signs",
  "ListVar", "Chaine", "Condition", "O", "op", "D", "Na", "J", "Ma",
  "Op_comp", "Operateur_comp", "Boucle", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    58,    59,    60,    60,    60,    60,    60,    60,    61,
      61,    62,    62,    63,    63,    63,    63,    63,    63,    64,
      65,    65,    65,    65,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    67,    67,    67,    68,    68,    68,    69,
      69,    69,    70,    70,    70,    71,    71,    72,    72,    73,
      73,    73,    73,    74,    75,    75,    75,    75,    76,    77,
      78,    78,    79,    79,    80,    80,    80,    80,    81,    81,
      82,    82,    83,    83,    84,    85,    85,    86,    87,    87,
      88,    89,    89,    89,    89,    89,    89,    90,    90,    90
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     9,     2,     2,     2,     3,     3,     3,     2,
       1,     4,     3,     1,     1,     1,     1,     3,     3,     7,
       1,     1,     1,     1,     3,     1,     2,     1,     1,     1,
       1,     3,     2,     2,     2,     2,     3,     5,     5,     3,
       3,     1,     3,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,    10,     1,     1,     1,     1,     7,     4,
       2,     1,     2,     1,     1,     1,     2,     2,     9,     6,
       2,     1,     3,     1,     1,     3,     1,     1,     1,     3,
       5,     1,     1,     1,     1,     1,     1,     6,     7,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     0,     0,     0,    25,
       0,     0,     0,     0,    10,    25,     0,     0,     0,     0,
       3,     4,     5,    20,    21,    22,    23,     9,     0,    12,
       0,    25,    24,     0,     0,     0,     0,     0,     0,     0,
      27,    28,    29,    30,     6,     7,     8,    13,    14,    15,
      16,     0,     0,    11,     0,     0,     0,     0,     0,     0,
      71,     0,    73,     0,    76,    78,     0,     0,     0,     2,
      26,    32,    33,    34,    35,     0,     0,     0,     0,     0,
      70,     0,    47,    49,    50,    51,    52,     0,    41,    44,
      46,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    36,    31,    17,    18,     0,    54,    55,    56,    57,
       0,    64,    65,     0,     0,     0,     0,    81,    82,    83,
      84,    85,    86,     0,     0,     0,    79,     0,    72,    75,
       0,     0,     0,     0,     0,     0,    19,     0,    67,    66,
      61,     0,     0,    45,    40,    39,     0,    43,    42,     0,
       0,     0,     0,     0,    37,    38,     0,    60,     0,     0,
      80,     0,    69,    87,     0,     0,     0,    58,     0,     0,
      88,    89,     0,    63,    59,     0,     0,    62,    68,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,    10,    11,    12,    53,    13,    27,    14,    38,
      39,    87,    88,    89,    90,    91,    40,   140,    41,   141,
     142,   174,   113,    42,    92,    60,    61,    62,    63,    64,
      65,   123,    43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -64
static const yytype_int16 yypact[] =
{
      24,    17,    31,     5,   -64,    56,    69,    -7,    33,    -9,
      27,    59,    67,    76,    39,   -10,    39,    47,    63,    -6,
      -7,    -7,    -7,   -64,   -64,   -64,   -64,   -64,    54,   -64,
      78,    94,   -64,   100,   101,    89,     0,   103,   122,    84,
      -6,    -6,    -6,    -6,   -64,   -64,   -64,   -64,   -64,   -64,
     -64,    91,    88,   -64,   110,    85,    86,    89,    18,    87,
     116,   118,   119,   120,   -64,   -64,   123,   124,    -3,   -64,
      -6,   -64,   -64,   -64,   -64,    96,    90,   106,    29,   -31,
     -64,    18,   -64,   -64,   -64,   -64,   -64,    75,   -18,   -64,
     -64,   -64,   121,    -6,   125,   125,    28,   107,    25,   108,
     105,    66,   -64,   -64,   -64,    39,   -64,   -64,   -64,   -64,
     104,   -31,   -31,    29,    43,    25,    25,   -64,   -64,   -64,
     -64,   -64,   -64,    25,    25,    25,   -64,    83,   119,   -64,
      -6,    -6,    -6,   -11,   102,   109,   -64,   111,   -64,   -64,
      29,   127,   113,   -64,   -18,   -18,    58,   -64,   -64,   114,
     112,   135,   138,   139,   -64,   -64,   115,   -64,   126,   117,
     -64,    -6,   -64,   -64,   128,   129,   130,   -64,   131,   140,
     -64,   -64,   133,   131,   -64,   132,   134,   -64,   -64,   -64
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -64,   -64,    34,   -64,   -64,   -64,   -64,   -12,     7,   -40,
     -64,   -63,     2,    -5,   -64,   -64,   -64,    93,   -64,   -64,
      26,    -1,    11,   -64,   -28,   -64,   -64,    70,   -64,    80,
     -64,   -64,   -64
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -78
static const yytype_int16 yytable[] =
{
      71,    72,    73,    74,    29,   101,     8,    59,    33,    34,
      35,   124,   111,    36,    17,    16,    28,   143,   114,   115,
     116,     3,    18,    18,    98,    32,   112,     1,   125,    80,
     102,     4,     9,    37,    19,   133,    82,    83,    84,    66,
      67,    85,    86,    57,     5,    81,    99,   100,    23,    24,
      25,    26,    98,   127,    44,    45,    46,    82,    83,    84,
     146,     6,    85,    86,    82,    83,    84,   130,   131,    85,
      86,   143,    15,   115,   116,     7,   117,   118,   119,   120,
     121,   122,   106,   107,   108,   109,   160,    30,   115,   116,
     151,   152,   153,   136,    47,    48,   115,   116,    49,    50,
     149,   150,    31,    51,    52,   115,   116,    20,   117,   118,
     119,   120,   121,   122,    57,    21,    58,   144,   145,   147,
     148,   169,   138,   139,    22,    54,    18,    55,    56,    68,
      69,    76,    70,    75,    77,    78,    79,   -74,    93,    94,
     104,   -77,    95,    96,    97,   103,   105,   132,   135,   126,
     134,   154,    58,   163,   137,   158,   164,   165,   175,   155,
     162,   176,   156,   159,   128,   161,   157,   166,   168,   172,
     173,   110,   177,     0,   167,   129,   170,   171,     0,     0,
     178,     0,   179
};

static const yytype_int16 yycheck[] =
{
      40,    41,    42,    43,    16,    68,    13,    35,    14,    15,
      16,    29,    43,    19,    23,     8,    26,    28,    81,    30,
      31,     4,    32,    32,    27,    18,    57,     3,    46,    57,
      70,     0,    39,    39,     7,    98,    39,    40,    41,    39,
      40,    44,    45,    25,    39,    27,    49,    50,     9,    10,
      11,    12,    27,    93,    20,    21,    22,    39,    40,    41,
     123,     5,    44,    45,    39,    40,    41,    39,    40,    44,
      45,    28,    39,    30,    31,     6,    33,    34,    35,    36,
      37,    38,    53,    54,    55,    56,    28,    40,    30,    31,
     130,   131,   132,   105,    40,    41,    30,    31,    44,    45,
      17,    18,    39,    49,    50,    30,    31,    48,    33,    34,
      35,    36,    37,    38,    25,    48,    27,   115,   116,   124,
     125,   161,   111,   112,    48,    47,    32,    27,    27,    26,
       8,    43,    48,    42,    24,    50,    50,    21,    51,    21,
      50,    22,    22,    20,    20,    49,    40,    40,    43,    28,
      42,    49,    27,    18,    50,    28,    18,    18,    18,    50,
      48,    28,    51,    50,    94,    51,   140,    52,    51,    39,
      39,    78,   173,    -1,    48,    95,    48,    48,    -1,    -1,
      48,    -1,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    59,     4,     0,    39,     5,     6,    13,    39,
      60,    61,    62,    64,    66,    39,    66,    23,    32,     7,
      48,    48,    48,     9,    10,    11,    12,    65,    26,    65,
      40,    39,    66,    14,    15,    16,    19,    39,    67,    68,
      74,    76,    81,    90,    60,    60,    60,    40,    41,    44,
      45,    49,    50,    63,    47,    27,    27,    25,    27,    82,
      83,    84,    85,    86,    87,    88,    39,    40,    26,     8,
      48,    67,    67,    67,    67,    42,    43,    24,    50,    50,
      82,    27,    39,    40,    41,    44,    45,    69,    70,    71,
      72,    73,    82,    51,    21,    22,    20,    20,    27,    49,
      50,    69,    67,    49,    50,    40,    53,    54,    55,    56,
      75,    43,    57,    80,    69,    30,    31,    33,    34,    35,
      36,    37,    38,    89,    29,    46,    28,    67,    85,    87,
      39,    40,    40,    69,    42,    43,    65,    50,    80,    80,
      75,    77,    78,    28,    70,    70,    69,    71,    71,    17,
      18,    67,    67,    67,    49,    50,    51,    78,    28,    50,
      28,    51,    48,    18,    18,    18,    52,    48,    51,    67,
      48,    48,    39,    39,    79,    18,    28,    79,    48,    48
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
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

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 37 "syntaxique.y"
    {printf("Programme Syntaxiquement Correct\n"); YYACCEPT;;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 46 "syntaxique.y"
    {if (doubleDeclaration(tabvar,k,ty)==-1){printf("Erreur Semantique :double Declaration \n");exit(1);} k=0;ty=0;;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 49 "syntaxique.y"
    { strcpy(tabvar[k],(yyvsp[(2) - (4)].str));k++;if (doubleDeclaration(tabvar,k,ty)==-1){printf("Erreur Semantique :double Declaration \n");exit(1);}else{insererVALString((yyvsp[(2) - (4)].str),tmp);}k=0;ty=0;;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 50 "syntaxique.y"
    {if (doubleDeclaration(tabvar,k,ty)==-1){printf("Erreur Semantique :double Declaration \n");exit(1);} k=0;ty=0;;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 52 "syntaxique.y"
    {ty=1; sprintf(tmp,"%.2d",(yyvsp[(1) - (1)].entier));;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 53 "syntaxique.y"
    {ty=1; sprintf(tmp,"%.2d",(yyvsp[(1) - (1)].entier));;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 54 "syntaxique.y"
    {ty=2; sprintf(tmp,"%.2f",(yyvsp[(1) - (1)].reel));;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 55 "syntaxique.y"
    {ty=2; sprintf(tmp,"%.2f",(yyvsp[(1) - (1)].reel));;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 56 "syntaxique.y"
    {ty=3;sprintf(tmp,"%.2d",(yyvsp[(2) - (3)].caractere));;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 57 "syntaxique.y"
    {ty=4;strcpy(tmp,(yyvsp[(2) - (3)].str));;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 61 "syntaxique.y"
    {ty=1;;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 62 "syntaxique.y"
    {ty=2;;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 63 "syntaxique.y"
    {ty=3;;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 64 "syntaxique.y"
    {ty=4;;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 66 "syntaxique.y"
    { strcpy(tabvar[k],(yyvsp[(1) - (3)].str));k++;;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 67 "syntaxique.y"
    { strcpy(tabvar[k],(yyvsp[(1) - (1)].str));k++;;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 80 "syntaxique.y"
    { 
	if(recherche((yyvsp[(1) - (3)].str))==0) 
		{ printf("Erreur semantiique ligne %d colonne %d : identifiant non déclaré \n",nb_ligne,c); exit(1);} 
	else { if(recherche((yyvsp[(1) - (3)].str))==1)
		{printf("Erreur semantiique ligne %d colonne %d: modification d'une constante  \n",nb_ligne,c); exit(1);}
		else 
		{
		if(getType((yyvsp[(1) - (3)].str))!=(yyvsp[(3) - (3)].s).type){ if ((yyvsp[(3) - (3)].s).type==1){printf("Erreur sémantique ligne %d colonne %d : Incompatibilité des types ( %s and INTERGER )\n",nb_ligne,c,(yyvsp[(1) - (3)].str));exit(1);}else{printf("Erreur sémantique ligne %d colonne %d : Incompatibilité des types ( %s and FLOAT )\n",nb_ligne,c,(yyvsp[(1) - (3)].str));exit(1);} }
		else{  sprintf(tmp,"%.2f",(yyvsp[(3) - (3)].s).val);insererVALString((yyvsp[(1) - (3)].str),tmp);}
		}
	      
	     }
			   ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 93 "syntaxique.y"
    { 
	if(recherche((yyvsp[(1) - (5)].str))==0) 
		{ printf("Erreur semantiique ligne %d colonne %d : identifiant non déclaré \n",nb_ligne,c); exit(1);} 
	else { if(recherche((yyvsp[(1) - (5)].str))==1)
		{ printf("Erreur semantiique ligne %d colonne %d: modification d'une constante  \n",nb_ligne,c); exit(1);}
		else {
			//verification de la compatibilité des types 
		if(!VerifType((yyvsp[(1) - (5)].str),"CHAR")){ printf("Erreur sémantique ligne %d colonne %d : Incompatibilité des types ( %s and CHAR )\n",nb_ligne,c,(yyvsp[(1) - (5)].str)); exit(1); } else
{
insererVALChar((yyvsp[(1) - (5)].str),(yyvsp[(4) - (5)].caractere));
}
		     } 
	      }
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 107 "syntaxique.y"
    {
		if(recherche((yyvsp[(1) - (5)].str))==0) 
		{ printf("Erreur semantiique ligne %d colonne %d: identifiant non déclaré \n",nb_ligne,c); exit(1);} 
	else { if(recherche((yyvsp[(1) - (5)].str))==1)
		 {printf("Erreur semantiique ligne %d colonne %d: modification d'une constante  \n",nb_ligne,c);exit(1);}
		else
		{
		//verification de la compatibilité des types
		if(!VerifType((yyvsp[(1) - (5)].str),"STRING")){ printf("Erreur sémantique ligne %d colonne %d: Incompatibilité des types ( %s and STRING )\n",nb_ligne,c,(yyvsp[(1) - (5)].str)); exit(1); } else
{

insererVALString((yyvsp[(1) - (5)].str),(yyvsp[(4) - (5)].str));
}
		
	      }
}
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 125 "syntaxique.y"
    { if ((yyvsp[(1) - (3)].s).type!=(yyvsp[(3) - (3)].s).type) { printf("Erreur sémantique ligne %d colonne %d : incompatibilité des types\n",nb_ligne,c); exit (1);}
else {(yyval.s).type=(yyvsp[(1) - (3)].s).type;(yyval.s).val=((yyvsp[(1) - (3)].s).val+(yyvsp[(3) - (3)].s).val);} ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 127 "syntaxique.y"
    { if ((yyvsp[(1) - (3)].s).type!=(yyvsp[(3) - (3)].s).type) { printf("Erreur sémantique ligne %d colonne %d : incompatibilité des types\n",nb_ligne,c); exit (1);}
else {(yyval.s).type=(yyvsp[(1) - (3)].s).type;(yyval.s).val=((yyvsp[(1) - (3)].s).val-(yyvsp[(3) - (3)].s).val);} ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 129 "syntaxique.y"
    { (yyval.s).type=(yyvsp[(1) - (1)].s).type; (yyval.s).val=(yyvsp[(1) - (1)].s).val;;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 131 "syntaxique.y"
    { if ((yyvsp[(1) - (3)].s).type!=(yyvsp[(3) - (3)].s).type) { printf("Erreur sémantique ligne %d colonne %d : incompatibilité des types\n",nb_ligne,c); exit(1); }
else if((yyvsp[(3) - (3)].s).val==0){printf("Erreur semantique ligne %d colonne %d : division sur 0\n",nb_ligne,c);exit(1);}else{float v=((yyvsp[(1) - (3)].s).val/(yyvsp[(3) - (3)].s).val);(yyval.s).type=veref(v);(yyval.s).val=v;} ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 134 "syntaxique.y"
    { if ((yyvsp[(1) - (3)].s).type!=(yyvsp[(3) - (3)].s).type){ printf("Erreur sémantique ligne %d colonne %d : incompatibilité des types\n",nb_ligne,c); exit(1);}
else (yyval.s).type=(yyvsp[(1) - (3)].s).type;(yyval.s).val=((yyvsp[(1) - (3)].s).val*(yyvsp[(3) - (3)].s).val); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 137 "syntaxique.y"
    { (yyval.s).type=(yyvsp[(1) - (1)].s).type; (yyval.s).val=(yyvsp[(1) - (1)].s).val;;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 139 "syntaxique.y"
    { (yyval.s).type=(yyvsp[(2) - (3)].s).type; (yyval.s).val=(yyvsp[(2) - (3)].s).val;;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 140 "syntaxique.y"
    { (yyval.s).type=(yyvsp[(1) - (1)].s).type; (yyval.s).val=(yyvsp[(1) - (1)].s).val;;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 142 "syntaxique.y"
    { if(recherche((yyvsp[(1) - (1)].str))==0) 
		{ printf("Erreur semantiique ligne %d colonne %d : identifiant non déclaré \n",nb_ligne,c); exit(1);} 
	else
	{
	int t=getType((yyvsp[(1) - (1)].str));
	(yyval.s).type=t;
	char *valeur=NULL; 
	valeur=getVal((yyvsp[(1) - (1)].str));
	float v =atof(valeur);
	(yyval.s).val=v;
         
	} ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 154 "syntaxique.y"
    { (yyval.s).type=(yyvsp[(1) - (1)].s).type;(yyval.s).val=(yyvsp[(1) - (1)].s).val;;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 156 "syntaxique.y"
    { (yyval.s).type=1;(yyval.s).val=(yyvsp[(1) - (1)].entier);x=1;;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 157 "syntaxique.y"
    { (yyval.s).type=1; (yyval.s).val=(yyvsp[(1) - (1)].entier);x=1;;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 158 "syntaxique.y"
    { (yyval.s).type=2; (yyval.s).val=(yyvsp[(1) - (1)].reel);x=2;;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 159 "syntaxique.y"
    { (yyval.s).type=2; (yyval.s).val=(yyvsp[(1) - (1)].reel);x=2;;}
    break;



/* Line 1455 of yacc.c  */
#line 1847 "syntaxique.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 215 "syntaxique.y"

int main()
{
initialisation();
yyparse();
 afficher();
}
int yywrap()
{}
void yyerror (char*msg)
{
printf("Erreur Syntaxique a la ligne %d et la colonne %d \n",nb_ligne,c);
exit(1);
} 

