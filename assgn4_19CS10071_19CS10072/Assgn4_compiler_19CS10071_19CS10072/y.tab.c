/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "assgn4_19CS10071_19CS10072.y" /* yacc.c:339  */


    #include<stdio.h>
    extern int yylex();
    extern char* yytext;
    extern int lineNo;
    void yyerror(char* s);

#line 75 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    KEYWORD_ = 258,
    AUTO_ = 259,
    BREAK_ = 260,
    CASE_ = 261,
    CHAR_ = 262,
    CONST_ = 263,
    CONTINUE_ = 264,
    DEFAULT_ = 265,
    DO_ = 266,
    DOUBLE_ = 267,
    ELSE_ = 268,
    ENUM_ = 269,
    EXTERN_ = 270,
    FLOAT_ = 271,
    FOR_ = 272,
    GOTO_ = 273,
    IF_ = 274,
    INLINE_ = 275,
    INT_ = 276,
    LONG_ = 277,
    REGISTER_ = 278,
    RESTRICT_ = 279,
    RETURN_ = 280,
    SHORT_ = 281,
    SIGNED_ = 282,
    SIZEOF_ = 283,
    STATIC_ = 284,
    STRUCT_ = 285,
    SWITCH_ = 286,
    TYPEDEF_ = 287,
    UNION_ = 288,
    UNSIGNED_ = 289,
    VOID_ = 290,
    VOLATILE_ = 291,
    WHILE_ = 292,
    BOOL_ = 293,
    COMPLEX_ = 294,
    IMAGINARY_ = 295,
    SQRBRK_OPEN_ = 296,
    SQRBRK_CLOSE_ = 297,
    PAREN_OPEN_ = 298,
    PAREN_CLOSE_ = 299,
    CURBRK_OPEN_ = 300,
    CURBRK_CLOSE_ = 301,
    DOT_ = 302,
    ARROW_ = 303,
    INCR_ = 304,
    DECR_ = 305,
    AND_ = 306,
    STAR_ = 307,
    PLUS_ = 308,
    MINUS_ = 309,
    TILDA_ = 310,
    NOT_ = 311,
    SLASH_ = 312,
    PERCENT_ = 313,
    LSHFT_ = 314,
    RSHFT_ = 315,
    LESS_ = 316,
    GRTH_ = 317,
    LESSE_ = 318,
    GRTHE_ = 319,
    EQUALS_ = 320,
    NOTEQ_ = 321,
    XOR_ = 322,
    OR_ = 323,
    ANDAND_ = 324,
    OROR_ = 325,
    QUES_ = 326,
    COLON_ = 327,
    SEMICOLON_ = 328,
    TRPDOTS_ = 329,
    ASSGN_ = 330,
    ASSGNMUL_ = 331,
    ASSGNDIV_ = 332,
    ASSGNPERCENT_ = 333,
    ASSGNPLUS_ = 334,
    ASSGNMINUS_ = 335,
    ASSGNLSHT_ = 336,
    ASSGNRSHT_ = 337,
    ASSGNAND_ = 338,
    ASSGNOR_ = 339,
    ASSGNXOR_ = 340,
    COMMA_ = 341,
    HASH_ = 342,
    PUNCTUATOR_ = 343,
    IDENTIFIER_ = 344,
    FLOAT_CONSTANT_ = 345,
    CHARACTER_CONSTANT_ = 346,
    STRING_LITERAL_ = 347,
    ENUMERATION_CONSTANT_ = 348,
    INTEGER_CONSTANT_ = 349,
    FRACTIONAL_CONSTANT_ = 350
  };
#endif
/* Tokens.  */
#define KEYWORD_ 258
#define AUTO_ 259
#define BREAK_ 260
#define CASE_ 261
#define CHAR_ 262
#define CONST_ 263
#define CONTINUE_ 264
#define DEFAULT_ 265
#define DO_ 266
#define DOUBLE_ 267
#define ELSE_ 268
#define ENUM_ 269
#define EXTERN_ 270
#define FLOAT_ 271
#define FOR_ 272
#define GOTO_ 273
#define IF_ 274
#define INLINE_ 275
#define INT_ 276
#define LONG_ 277
#define REGISTER_ 278
#define RESTRICT_ 279
#define RETURN_ 280
#define SHORT_ 281
#define SIGNED_ 282
#define SIZEOF_ 283
#define STATIC_ 284
#define STRUCT_ 285
#define SWITCH_ 286
#define TYPEDEF_ 287
#define UNION_ 288
#define UNSIGNED_ 289
#define VOID_ 290
#define VOLATILE_ 291
#define WHILE_ 292
#define BOOL_ 293
#define COMPLEX_ 294
#define IMAGINARY_ 295
#define SQRBRK_OPEN_ 296
#define SQRBRK_CLOSE_ 297
#define PAREN_OPEN_ 298
#define PAREN_CLOSE_ 299
#define CURBRK_OPEN_ 300
#define CURBRK_CLOSE_ 301
#define DOT_ 302
#define ARROW_ 303
#define INCR_ 304
#define DECR_ 305
#define AND_ 306
#define STAR_ 307
#define PLUS_ 308
#define MINUS_ 309
#define TILDA_ 310
#define NOT_ 311
#define SLASH_ 312
#define PERCENT_ 313
#define LSHFT_ 314
#define RSHFT_ 315
#define LESS_ 316
#define GRTH_ 317
#define LESSE_ 318
#define GRTHE_ 319
#define EQUALS_ 320
#define NOTEQ_ 321
#define XOR_ 322
#define OR_ 323
#define ANDAND_ 324
#define OROR_ 325
#define QUES_ 326
#define COLON_ 327
#define SEMICOLON_ 328
#define TRPDOTS_ 329
#define ASSGN_ 330
#define ASSGNMUL_ 331
#define ASSGNDIV_ 332
#define ASSGNPERCENT_ 333
#define ASSGNPLUS_ 334
#define ASSGNMINUS_ 335
#define ASSGNLSHT_ 336
#define ASSGNRSHT_ 337
#define ASSGNAND_ 338
#define ASSGNOR_ 339
#define ASSGNXOR_ 340
#define COMMA_ 341
#define HASH_ 342
#define PUNCTUATOR_ 343
#define IDENTIFIER_ 344
#define FLOAT_CONSTANT_ 345
#define CHARACTER_CONSTANT_ 346
#define STRING_LITERAL_ 347
#define ENUMERATION_CONSTANT_ 348
#define INTEGER_CONSTANT_ 349
#define FRACTIONAL_CONSTANT_ 350

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 11 "assgn4_19CS10071_19CS10072.y" /* yacc.c:355  */

    int Int;
    char* Punctuator;
    char* Id;
    float Float;
    double Double;
    char* String;
    char Char;

#line 315 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 332 "y.tab.c" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   994

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  341

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    46,    46,    47,    48,    49,    50,    54,    55,    56,
      57,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      72,    73,    76,    77,    81,    82,    83,    84,    85,    86,
      90,    91,    92,    93,    94,    95,   100,   101,   105,   106,
     107,   108,   112,   113,   114,   118,   119,   120,   124,   125,
     126,   127,   128,   131,   132,   133,   136,   137,   141,   142,
     145,   146,   150,   151,   155,   156,   160,   161,   164,   165,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   181,   182,   186,   191,   193,   194,   197,   198,   199,
     200,   202,   203,   206,   207,   210,   211,   214,   215,   220,
     221,   222,   223,   226,   227,   228,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   242,   243,   246,   247,
     250,   251,   252,   255,   256,   259,   260,   263,   264,   267,
     268,   269,   272,   275,   278,   279,   282,   283,   284,   285,
     286,   287,   288,   289,   292,   293,   296,   297,   300,   301,
     304,   305,   308,   309,   312,   313,   318,   319,   322,   323,
     325,   328,   329,   330,   333,   334,   337,   338,   341,   344,
     345,   348,   349,   355,   356,   357,   358,   359,   360,   363,
     364,   365,   368,   371,   372,   375,   376,   379,   380,   383,
     386,   387,   390,   391,   392,   395,   396,   397,   398,   401,
     402,   403,   404,   408,   409,   412,   413,   416,   417,   420,
     423,   424
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "KEYWORD_", "AUTO_", "BREAK_", "CASE_",
  "CHAR_", "CONST_", "CONTINUE_", "DEFAULT_", "DO_", "DOUBLE_", "ELSE_",
  "ENUM_", "EXTERN_", "FLOAT_", "FOR_", "GOTO_", "IF_", "INLINE_", "INT_",
  "LONG_", "REGISTER_", "RESTRICT_", "RETURN_", "SHORT_", "SIGNED_",
  "SIZEOF_", "STATIC_", "STRUCT_", "SWITCH_", "TYPEDEF_", "UNION_",
  "UNSIGNED_", "VOID_", "VOLATILE_", "WHILE_", "BOOL_", "COMPLEX_",
  "IMAGINARY_", "SQRBRK_OPEN_", "SQRBRK_CLOSE_", "PAREN_OPEN_",
  "PAREN_CLOSE_", "CURBRK_OPEN_", "CURBRK_CLOSE_", "DOT_", "ARROW_",
  "INCR_", "DECR_", "AND_", "STAR_", "PLUS_", "MINUS_", "TILDA_", "NOT_",
  "SLASH_", "PERCENT_", "LSHFT_", "RSHFT_", "LESS_", "GRTH_", "LESSE_",
  "GRTHE_", "EQUALS_", "NOTEQ_", "XOR_", "OR_", "ANDAND_", "OROR_",
  "QUES_", "COLON_", "SEMICOLON_", "TRPDOTS_", "ASSGN_", "ASSGNMUL_",
  "ASSGNDIV_", "ASSGNPERCENT_", "ASSGNPLUS_", "ASSGNMINUS_", "ASSGNLSHT_",
  "ASSGNRSHT_", "ASSGNAND_", "ASSGNOR_", "ASSGNXOR_", "COMMA_", "HASH_",
  "PUNCTUATOR_", "IDENTIFIER_", "FLOAT_CONSTANT_", "CHARACTER_CONSTANT_",
  "STRING_LITERAL_", "ENUMERATION_CONSTANT_", "INTEGER_CONSTANT_",
  "FRACTIONAL_CONSTANT_", "$accept", "constant", "primary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "identifier_list_opt", "storage_class_specifier", "type_specifier",
  "specifier_qualifier_list", "specifier_qualifier_list_opt",
  "enum_specifier", "identifier_opt", "enumerator_list", "enumerator",
  "type_qualifier", "function_specifier", "declarator", "pointer_opt",
  "direct_declarator", "pointer", "type_qualifier_list_opt",
  "assignment_expression_opt", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation_opt", "designation", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "declaration_list_opt", "function_definition",
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350
};
# endif

#define YYPACT_NINF -216

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-216)))

#define YYTABLE_NINF -209

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     954,  -216,  -216,  -216,  -216,   -58,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,    -4,   954,   954,  -216,   954,   954,   917,
    -216,  -216,     5,    25,   125,    35,   -44,  -216,   664,   -26,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,    52,  -216,
      15,   125,  -216,    15,   708,  -216,    -4,    48,   954,    15,
    -216,    63,    76,   -32,  -216,  -216,  -216,  -216,    78,   738,
     535,     2,   791,   791,  -216,  -216,  -216,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,   109,
     176,   807,  -216,    34,   113,   -38,   126,    22,   117,   103,
     106,   115,    68,  -216,  -216,  -216,   263,  -216,  -216,   134,
     136,   627,   807,  -216,   -31,   535,  -216,  -216,    -7,   203,
    -216,   203,   142,   807,   111,   -28,   708,  -216,    62,  -216,
     535,  -216,  -216,   807,   807,   118,   119,  -216,  -216,  -216,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,  -216,
     807,  -216,  -216,   807,   807,   807,   807,   807,   807,   807,
     807,   807,   807,   807,   807,   807,   807,   807,   807,   807,
     807,   807,   148,   807,   149,   120,   446,   166,   137,   185,
     807,   188,   190,   162,   154,  -216,  -216,  -216,  -216,   189,
     263,  -216,  -216,   172,  -216,  -216,  -216,  -216,   125,   821,
     177,  -216,    -8,   202,   204,   161,  -216,   163,  -216,  -216,
    -216,  -216,   218,  -216,   807,  -216,  -216,  -216,   722,   221,
    -216,  -216,    54,  -216,  -216,  -216,   220,   -30,   222,   179,
    -216,  -216,  -216,  -216,  -216,  -216,  -216,    34,    34,   113,
     113,   -38,   -38,   -38,   -38,   126,   126,    22,   117,   103,
     106,   115,   -21,  -216,   223,  -216,   446,   256,   355,   231,
     807,   232,   807,   807,   446,  -216,  -216,  -216,   807,   254,
    -216,   265,   807,  -216,  -216,  -216,   706,   233,   264,  -216,
       2,  -216,  -216,  -216,   708,   264,  -216,  -216,   807,   807,
     446,  -216,   267,   807,   238,  -216,    -6,  -216,    -5,    -3,
    -216,   278,  -216,  -216,   279,  -216,  -216,  -216,   -14,  -216,
    -216,  -216,  -216,   807,   250,   807,   446,   446,   446,  -216,
    -216,  -216,    95,     3,   807,   251,   312,  -216,  -216,  -216,
     253,   283,   807,   446,  -216,   446,   284,  -216,  -216,   446,
    -216
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   101,   104,   129,   109,   124,    99,   108,   132,   106,
     107,   102,   130,   105,   110,   100,   111,   103,   131,   112,
     113,   114,   206,   135,    92,    92,   115,    92,    92,     0,
     203,   205,   122,     0,   147,     0,    85,    93,    95,     0,
     134,    91,    87,    88,    89,    90,     1,   204,     0,   150,
     144,   146,    84,   135,     0,   210,   135,     0,   207,   135,
     136,   133,   127,     0,   125,   145,   151,    94,    95,     0,
       0,   167,     0,     0,    30,    31,    32,    33,    34,    35,
       7,     2,     3,     9,     4,     5,     6,     8,    11,    24,
      36,     0,    38,    42,    45,    48,    53,    56,    58,    60,
      62,    64,    66,    68,   161,    96,   184,   209,   211,     0,
     147,    98,     0,   120,     0,     0,    28,    81,     0,   119,
     160,   119,     0,     0,     0,     0,     0,   166,     0,   169,
       0,    25,    26,     0,    21,     0,     0,    16,    17,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
       0,    36,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   191,     0,     0,     0,
     191,     0,     0,     7,   190,   187,   188,   173,   174,     0,
     183,   185,   175,     0,   176,   177,   178,   137,   147,   149,
     146,   158,   135,     0,     0,   152,   154,    97,    83,   128,
     121,   126,     0,    10,     0,   118,   116,   117,     0,     0,
     172,   162,   167,   164,   168,   170,     0,     0,     0,    20,
      22,    14,    15,    69,    39,    40,    41,    43,    44,    46,
      47,    49,    50,    51,    52,    54,    55,    57,    59,    61,
      63,    65,     0,   201,     0,   200,   191,     0,   191,     0,
       0,     0,     0,     0,   191,   182,   186,   189,     0,    31,
     148,     0,     0,   156,   143,   142,     0,     0,    29,    82,
     167,    37,   171,   163,     0,     0,    12,    13,     0,     0,
     191,   181,     0,   191,     0,   199,     0,   202,     0,     0,
     179,     0,   141,   138,     0,   153,   155,   159,     0,   165,
      23,    67,   180,     0,     0,   191,   191,   191,   191,   139,
     140,    18,   167,     0,   191,     0,   192,   194,   195,    19,
       0,     0,   191,   191,   196,   191,     0,   193,   198,   191,
     197
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -216,  -216,  -216,  -216,  -216,  -216,   -39,  -216,   -78,    20,
      40,    42,    16,   164,   165,   167,   160,   168,  -216,  -107,
     -52,  -216,   -69,  -113,   -35,  -216,     0,    85,  -216,   280,
    -216,  -216,   -62,    27,   210,  -216,  -216,  -216,   225,   -25,
    -216,   -19,  -216,  -216,   287,   -99,  -216,   224,  -216,  -216,
      64,  -216,   -95,  -120,    61,  -215,  -216,  -216,   214,  -121,
    -216,   286,  -216,  -216,   155,  -216,  -161,  -216,  -216,  -216,
    -216,   315,  -216,  -216,  -216
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    87,    88,    89,   228,   229,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     117,   150,   184,   209,    22,    35,    56,    42,    36,    37,
     203,    24,    25,   120,   216,    26,    33,    63,    64,    27,
      28,    68,    39,    61,    40,    50,   271,    51,   204,   205,
     206,   207,   122,   105,   125,   126,   127,   128,   129,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
      29,    30,    57,    31,    58
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   118,   104,    55,    38,   208,   223,   284,   119,    49,
     219,   199,   286,   152,   113,   210,   208,    59,   221,   261,
     212,   158,   159,   108,    41,    41,    66,    41,    41,    23,
     116,    32,   321,   131,   132,   226,  -157,   213,   316,   317,
     109,   318,    53,   123,    34,   121,   118,   330,    34,   124,
    -123,   289,   151,   119,   114,   257,   214,   119,   222,   119,
     254,   118,    62,    60,   227,   214,   208,    34,   119,   -86,
      48,   185,   322,   151,   104,   234,   235,   236,  -157,   214,
     214,   214,   230,   214,   151,    49,   153,   164,   165,   214,
     121,   154,   155,   106,   121,   123,   121,   294,   233,   268,
     283,   124,   252,   123,   110,   121,   111,   284,    52,   124,
      43,   202,    44,    45,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   314,     3,   151,   291,   123,   224,   170,   171,
     281,   329,   124,   300,     3,    62,   215,   270,   215,    12,
     133,   112,   134,    54,   325,   185,   135,   136,   137,   138,
      12,    18,   279,   331,   309,   198,   156,   157,   166,   312,
     167,   336,    18,    49,   168,    66,   237,   238,   197,   151,
     245,   246,   311,   273,   169,     3,   218,   160,   161,   162,
     163,   296,   256,   298,   299,   326,   327,   328,   239,   240,
     220,    12,   241,   242,   243,   244,   272,   231,   232,   258,
       2,     3,   337,    18,   338,     4,   301,     5,   340,     7,
     304,   253,   255,   293,     9,    10,   259,    12,   260,    13,
      14,   262,   104,   263,   264,   265,   310,    16,    17,    18,
     214,    19,    20,    21,   323,   267,   274,   276,   275,   277,
     151,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   278,   282,   285,   288,   287,     1,   172,   173,
       2,     3,   174,   175,   176,     4,   202,     5,     6,     7,
     177,   178,   179,     8,     9,    10,    11,    12,   180,    13,
      14,    69,    15,   292,   181,   290,   302,    16,    17,    18,
     182,    19,    20,    21,   295,   297,    70,   303,   106,   280,
     313,   315,    72,    73,    74,    75,    76,    77,    78,    79,
     319,   320,   307,   324,   332,   333,   334,   335,   339,   250,
     247,   217,   248,    67,   200,   249,  -191,    65,   251,   211,
     306,   308,   225,   107,    47,   266,     0,     0,     0,     0,
       0,     0,   183,    81,    82,    83,    84,    85,    86,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,    69,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,    70,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,    81,    82,    83,    84,    85,
      86,   172,   173,     0,     0,   174,   175,   176,     0,     0,
       0,     0,     0,   177,   178,   179,     0,     0,     0,     0,
       0,   180,     0,     0,    69,     0,     0,   181,     0,     0,
       0,     0,     0,   182,     0,     0,     0,     0,     0,    70,
       0,   106,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   183,    81,    82,    83,    84,
      85,    86,     2,     3,     0,     0,     0,     4,     0,     5,
       0,     7,     0,     0,     0,     0,     9,    10,     0,    12,
       0,    13,    14,    69,     0,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     0,     0,    70,     0,
       0,     0,     0,     0,    72,    73,    74,    75,    76,    77,
      78,    79,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    80,    81,    82,    83,    84,    85,
      86,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21,     0,     0,     0,     0,  -208,
       1,     0,     0,     2,     3,     0,   201,     0,     4,     0,
       5,     6,     7,     0,     0,     0,     8,     9,    10,    11,
      12,     0,    13,    14,     0,    15,    69,     0,     0,    54,
      16,    17,    18,     0,    19,    20,    21,     0,     0,     0,
      69,    70,     0,    71,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,    70,    69,   280,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,     0,
     305,   115,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,     0,     0,    80,    81,    82,
      83,    84,    85,    86,     0,     0,     0,     0,     0,     0,
       0,    80,    81,    82,    83,    84,    85,    86,     0,    69,
       0,     0,     0,     0,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,   130,    69,     0,     0,     0,     0,
      72,    73,    74,    75,    76,    77,    78,    79,     0,    69,
      70,     0,     0,     0,     0,     0,    72,    73,    74,    75,
      76,    77,    78,    79,    70,     0,     0,     0,     0,     0,
      72,    73,    74,   269,    76,    77,    78,    79,     0,     0,
      80,    81,    82,    83,    84,    85,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    80,    81,    82,    83,
      84,    85,    86,     0,     0,     0,     0,     0,     0,     0,
      80,    81,    82,    83,    84,    85,    86,    46,     0,     0,
       0,     1,     0,     0,     2,     3,     0,     0,     0,     4,
       0,     5,     6,     7,     0,     0,     0,     8,     9,    10,
      11,    12,     0,    13,    14,     0,    15,     0,     0,     0,
       0,    16,    17,    18,     0,    19,    20,    21,     1,     0,
       0,     2,     3,     0,     0,     0,     4,     0,     5,     6,
       7,     0,     0,     0,     8,     9,    10,    11,    12,     0,
      13,    14,     0,    15,     0,     0,     0,     0,    16,    17,
      18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    70,    54,    38,    23,   112,   126,   222,    70,    34,
     123,   110,    42,    91,    46,    46,   123,    43,    46,   180,
     115,    59,    60,    58,    24,    25,    51,    27,    28,    29,
      69,    89,    46,    72,    73,   130,    44,    44,    44,    44,
      59,    44,    86,    41,    52,    70,   115,    44,    52,    47,
      45,    72,    91,   115,    86,   176,    86,   119,    86,   121,
     173,   130,    93,    89,   133,    86,   173,    52,   130,    73,
      45,   106,    86,   112,   126,   153,   154,   155,    86,    86,
      86,    86,   134,    86,   123,   110,    52,    65,    66,    86,
     115,    57,    58,    45,   119,    41,   121,   258,   150,   198,
      46,    47,   171,    41,    41,   130,    43,   322,    73,    47,
      25,   111,    27,    28,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   293,     8,   173,   256,    41,    75,    70,    71,
     218,    46,    47,   264,     8,    93,   119,   199,   121,    24,
      41,    75,    43,    75,   315,   190,    47,    48,    49,    50,
      24,    36,   214,   324,   284,    29,    53,    54,    51,   290,
      67,   332,    36,   198,    68,   200,   156,   157,    44,   218,
     164,   165,   289,   202,    69,     8,    44,    61,    62,    63,
      64,   260,    72,   262,   263,   316,   317,   318,   158,   159,
      89,    24,   160,   161,   162,   163,    29,    89,    89,    43,
       7,     8,   333,    36,   335,    12,   268,    14,   339,    16,
     272,    73,    73,   258,    21,    22,    89,    24,    43,    26,
      27,    43,   284,    43,    72,    46,   288,    34,    35,    36,
      86,    38,    39,    40,   313,    73,    44,    86,    44,    86,
     289,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    44,    42,    44,    86,    44,     4,     5,     6,
       7,     8,     9,    10,    11,    12,   276,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    37,    31,    72,    42,    34,    35,    36,
      37,    38,    39,    40,    73,    73,    43,    42,    45,    45,
      43,    73,    49,    50,    51,    52,    53,    54,    55,    56,
      42,    42,    89,    73,    73,    13,    73,    44,    44,   169,
     166,   121,   167,    53,   110,   168,    73,    50,   170,   114,
     276,   280,   128,    57,    29,   190,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    93,    94,    95,     4,
      -1,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,    14,
      15,    16,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      -1,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    -1,    38,    39,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,    94,
      95,     5,     6,    -1,    -1,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    -1,    -1,    -1,    -1,
      -1,    25,    -1,    -1,    28,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    45,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,
      94,    95,     7,     8,    -1,    -1,    -1,    12,    -1,    14,
      -1,    16,    -1,    -1,    -1,    -1,    21,    22,    -1,    24,
      -1,    26,    27,    28,    -1,    -1,    -1,    -1,    -1,    34,
      35,    36,    -1,    38,    39,    40,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,    54,
      55,    56,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,    94,
      95,     4,    -1,    -1,     7,     8,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    -1,
      -1,    34,    35,    36,    -1,    38,    39,    40,     4,    -1,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,
      36,    -1,    38,    39,    40,    -1,    -1,    -1,    -1,    45,
       4,    -1,    -1,     7,     8,    -1,    89,    -1,    12,    -1,
      14,    15,    16,    -1,    -1,    -1,    20,    21,    22,    23,
      24,    -1,    26,    27,    -1,    29,    28,    -1,    -1,    75,
      34,    35,    36,    -1,    38,    39,    40,    -1,    -1,    -1,
      28,    43,    -1,    45,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    43,    28,    45,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      74,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    90,    91,    92,    93,    94,    95,    -1,    28,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    43,    28,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    28,
      43,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,    52,
      53,    54,    55,    56,    43,    -1,    -1,    -1,    -1,    -1,
      49,    50,    51,    52,    53,    54,    55,    56,    -1,    -1,
      89,    90,    91,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      89,    90,    91,    92,    93,    94,    95,     0,    -1,    -1,
      -1,     4,    -1,    -1,     7,     8,    -1,    -1,    -1,    12,
      -1,    14,    15,    16,    -1,    -1,    -1,    20,    21,    22,
      23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,    -1,
      -1,    34,    35,    36,    -1,    38,    39,    40,     4,    -1,
      -1,     7,     8,    -1,    -1,    -1,    12,    -1,    14,    15,
      16,    -1,    -1,    -1,    20,    21,    22,    23,    24,    -1,
      26,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,    35,
      36,    -1,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     7,     8,    12,    14,    15,    16,    20,    21,
      22,    23,    24,    26,    27,    29,    34,    35,    36,    38,
      39,    40,   120,   122,   127,   128,   131,   135,   136,   166,
     167,   169,    89,   132,    52,   121,   124,   125,   137,   138,
     140,   122,   123,   123,   123,   123,     0,   167,    45,   135,
     141,   143,    73,    86,    75,   120,   122,   168,   170,    43,
      89,   139,    93,   133,   134,   140,   135,   125,   137,    28,
      43,    45,    49,    50,    51,    52,    53,    54,    55,    56,
      89,    90,    91,    92,    93,    94,    95,    97,    98,    99,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   149,    45,   157,   120,   137,
      41,    43,    75,    46,    86,    43,   102,   116,   118,   128,
     129,   135,   148,    41,    47,   150,   151,   152,   153,   154,
      43,   102,   102,    41,    43,    47,    48,    49,    50,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     117,   102,   104,    52,    57,    58,    53,    54,    59,    60,
      61,    62,    63,    64,    65,    66,    51,    67,    68,    69,
      70,    71,     5,     6,     9,    10,    11,    17,    18,    19,
      25,    31,    37,    89,   118,   120,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,    44,    29,   141,
     143,    89,   122,   126,   144,   145,   146,   147,   115,   119,
      46,   134,   148,    44,    86,   129,   130,   130,    44,   119,
      89,    46,    86,   149,    75,   154,   148,   118,   100,   101,
     116,    89,    89,   116,   104,   104,   104,   105,   105,   106,
     106,   107,   107,   107,   107,   108,   108,   109,   110,   111,
     112,   113,   118,    73,   119,    73,    72,   155,    43,    89,
      43,   162,    43,    43,    72,    46,   160,    73,   141,    52,
     116,   142,    29,   137,    44,    44,    86,    86,    44,   116,
      45,   104,    42,    46,   151,    44,    42,    44,    86,    72,
      72,   155,    37,   120,   162,    73,   118,    73,   118,   118,
     155,   116,    42,    42,   116,    74,   146,    89,   150,   149,
     116,   115,   155,    43,   162,    73,    44,    44,    44,    42,
      42,    46,    86,   118,    73,   162,   155,   155,   155,    46,
      44,   162,    73,    13,    73,    44,   162,   155,   155,    44,
     155
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    97,    97,    97,    97,    98,    98,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
     100,   100,   101,   101,   102,   102,   102,   102,   102,   102,
     103,   103,   103,   103,   103,   103,   104,   104,   105,   105,
     105,   105,   106,   106,   106,   107,   107,   107,   108,   108,
     108,   108,   108,   109,   109,   109,   110,   110,   111,   111,
     112,   112,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   118,   118,   119,   120,   121,   121,   122,   122,   122,
     122,   123,   123,   124,   124,   125,   125,   126,   126,   127,
     127,   127,   127,   128,   128,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   128,   128,   129,   129,   130,   130,
     131,   131,   131,   132,   132,   133,   133,   134,   134,   135,
     135,   135,   136,   137,   138,   138,   139,   139,   139,   139,
     139,   139,   139,   139,   140,   140,   141,   141,   142,   142,
     143,   143,   144,   144,   145,   145,   146,   146,   147,   147,
     148,   149,   149,   149,   150,   150,   151,   151,   152,   153,
     153,   154,   154,   155,   155,   155,   155,   155,   155,   156,
     156,   156,   157,   158,   158,   159,   159,   160,   160,   161,
     162,   162,   163,   163,   163,   164,   164,   164,   164,   165,
     165,   165,   165,   166,   166,   167,   167,   168,   168,   169,
     170,   170
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     1,     4,     4,     3,     3,     2,     2,     6,     7,
       1,     0,     1,     3,     1,     2,     2,     2,     2,     4,
       1,     1,     1,     1,     1,     1,     1,     4,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     3,     1,     3,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     5,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     3,     1,     0,     2,     2,     2,
       2,     1,     0,     1,     3,     1,     3,     1,     0,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     0,
       5,     6,     2,     1,     0,     1,     3,     1,     3,     1,
       1,     1,     1,     2,     1,     0,     1,     3,     5,     6,
       6,     5,     4,     4,     2,     3,     1,     0,     1,     0,
       1,     2,     1,     3,     1,     3,     2,     1,     1,     3,
       1,     1,     3,     4,     2,     4,     1,     0,     2,     1,
       2,     3,     2,     1,     1,     1,     1,     1,     1,     3,
       4,     3,     3,     1,     0,     1,     2,     1,     1,     2,
       1,     0,     5,     7,     5,     5,     7,     9,     8,     3,
       2,     2,     3,     1,     2,     1,     1,     1,     0,     4,
       1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
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

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



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

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
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
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
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
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
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


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
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
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
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
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
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
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
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
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
        case 2:
#line 46 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" constant -> float cosntant \n");}
#line 1833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 47 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" constant -> character cosntant \n");}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 48 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" constant -> enumeration constant \n");}
#line 1845 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 49 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" constant -> integer cosntant \n");}
#line 1851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 50 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" constant -> fractional cosntant \n");}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 54 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("primary expression -> identifier\n");}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 55 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("primary expression -> constant\n");}
#line 1869 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 56 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("primary expression -> string literal\n");}
#line 1875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 57 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("primary expression -> ( expression )\n");}
#line 1881 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 61 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("postfix expression -> primary expression \n");}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 62 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("postfix expression -> postfix expression [ expression ] \n");}
#line 1893 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 63 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("postfix expression -> postfix expression ( optional arg list) \n");}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 64 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("postfix expression -> postfix expression . identifier \n");}
#line 1905 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 65 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("postfix expression -> postfix expression -> identifier \n");}
#line 1911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("postfix expression -> postfix expression ++ \n");}
#line 1917 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 67 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("postfix expression -> postfix expression -- \n");}
#line 1923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 68 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("postfix expression -> ( type name ) { initializer list } \n");}
#line 1929 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 69 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("postfix expression -> ( type name , ) { initializer list } \n");}
#line 1935 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 72 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("argument_expression_list_opt -> argument_expression_list \n");}
#line 1941 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 73 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("argument_expression_list_opt -> epsilon \n");}
#line 1947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 76 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { printf(" argument expression list -> assignment expression \n");}
#line 1953 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 77 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { printf(" argument expression list -> assignment expression list , assignment expression \n");}
#line 1959 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 81 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" unary expression -> postfix expression \n");}
#line 1965 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 82 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" unary expression -> ++ unary expression \n");}
#line 1971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 83 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" unary expression -> -- unary expression \n");}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 84 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" unary expression -> unary operator cast expression \n");}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 85 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" unary expression -> sizeof unary expression \n");}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 86 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" unary expression -> sizeof ( type name ) \n");}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 90 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("unary operator -> & \n");}
#line 2001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 91 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("unary operator -> * \n");}
#line 2007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 92 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("unary operator -> + \n");}
#line 2013 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 93 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("unary operator -> - \n");}
#line 2019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 94 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("unary operator -> ~ \n");}
#line 2025 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 95 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("unary operator -> ! \n");}
#line 2031 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 100 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("cast expression -> unary expression \n");}
#line 2037 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 101 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(" cast expression -> ( type name ) cast expression \n");}
#line 2043 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 105 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("multiplicative expression -> cast expression \n");}
#line 2049 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 106 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("multiplicative expression -> multiplicative expression * cast expression \n");}
#line 2055 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 107 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("multiplicative expression -> multiplicative expression / cast expression \n");}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 108 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("multiplicative expression -> multiplicative expression %% cast expression \n");}
#line 2067 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 112 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("additive expression -> multiplicative expresssion \n");}
#line 2073 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 113 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("additive expression -> additive expression + multiplicative expresssion \n");}
#line 2079 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 114 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("additive expression -> additive expression - multiplicative expresssion \n");}
#line 2085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 118 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("shift expression -> additive expresssion \n");}
#line 2091 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 119 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("shift expression -> shift expression << additive expresssion \n");}
#line 2097 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 120 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("shift expression -> shift expression >> additive expresssion \n");}
#line 2103 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 124 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("realtional expression -> shift expression \n");}
#line 2109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 125 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("realtional expression -> relational expression < shift expression \n");}
#line 2115 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 126 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("realtional expression -> relational expression > shift expression \n");}
#line 2121 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 127 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("realtional expression -> relational expression <= shift expression \n");}
#line 2127 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 128 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("realtional expression -> relational expression >= shift expression \n");}
#line 2133 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 131 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("equality expression -> relational expression \n");}
#line 2139 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 132 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("equality expression -> equality expression == relational expression \n");}
#line 2145 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 133 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("equality expression -> equality expression != relational expression \n");}
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 136 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("AND expression -> equality expression \n");}
#line 2157 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 137 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("AND expression -> AND expression & equality expression \n");}
#line 2163 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 141 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("exclusive OR expression -> AND expression \n");}
#line 2169 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 142 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("exclusive OR expression -> exclusive OR expression ^ AND expression \n");}
#line 2175 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 145 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("inclusive OR expression -> exclusive OR expression \n");}
#line 2181 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 146 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("inclusive OR expression -> inclusive OR expression | exclusive OR expression \n");}
#line 2187 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 150 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("logical AND expression -> inclusive OR expression \n");}
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 151 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("logical AND expression -> logical AND expression && inclusive OR expression \n");}
#line 2199 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 155 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("logical OR expression -> logical AND expression \n");}
#line 2205 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 156 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("logical OR expression -> logical OR expression || logical AND expression \n");}
#line 2211 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 160 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("conditional expression -> logical OR expression\n");}
#line 2217 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 161 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("conditional expression -> logical OR Expression ? expression : logical OR expression\n");}
#line 2223 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 164 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment expression -> conditional expression \n");}
#line 2229 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 165 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment expression -> unary expression assignment operator assignment expression \n");}
#line 2235 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 168 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment operator -> = \n");}
#line 2241 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 169 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment operator -> *= \n");}
#line 2247 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 170 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment operator -> /= \n");}
#line 2253 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 171 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment operator -> %%= \n");}
#line 2259 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 172 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment operator -> += \n");}
#line 2265 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 173 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment operator -> -= \n");}
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 174 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment operator -> <<= \n");}
#line 2277 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 175 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment operator -> >>= \n");}
#line 2283 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 176 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment operator -> &= \n");}
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 177 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment operator -> |= \n");}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 178 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment operator -> ^= \n");}
#line 2301 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 181 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("expression -> assignment exprression \n");}
#line 2307 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 182 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("expression -> expression , assignment exprression \n");}
#line 2313 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 186 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("constant expression -> conditional expression \n");}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 191 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declaration -> declaration specifiers init declarator list ; \n");}
#line 2325 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 193 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("init_declarator_list_opt -> init_declarator_list \n");}
#line 2331 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 194 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("init_declarator_list_opt -> epsilon \n");}
#line 2337 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 197 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declaration specifiers -> storage class specifier declaration specifiers list optional \n");}
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 198 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declaration specifiers -> type specifier declaration specifiers list optional \n");}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 199 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declaration specifiers -> type qualifier declaration specifiers list optional \n");}
#line 2355 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 200 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declaration specifiers -> function specifier declaration specifiers list optional \n");}
#line 2361 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 202 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declaration_specifiers_opt -> declaration_specifiers \n");}
#line 2367 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 203 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declaration_specifiers_opt -> epsilon \n");}
#line 2373 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 206 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("init declarator list -> init declarator \n");}
#line 2379 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 207 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("init declarator list -> init declarator list , init declarator \n");}
#line 2385 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 210 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("init declarator -> declarator \n");}
#line 2391 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 211 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("init declarator -> declarator = initializer \n");}
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 214 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("identifier_list_opt -> identifier_list\n");}
#line 2403 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 215 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("identifier_list_opt -> epsilon\n");}
#line 2409 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 220 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("storage_class_specifier -> extern\n");}
#line 2415 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 221 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("storage_class_specifier -> static\n");}
#line 2421 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 222 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("storage_class_specifier -> auto\n");}
#line 2427 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 223 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("storage_class_specifier -> register\n");}
#line 2433 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 226 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> void\n");}
#line 2439 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 227 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> char\n");}
#line 2445 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 228 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> short\n");}
#line 2451 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 229 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> int\n");}
#line 2457 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 230 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> long\n");}
#line 2463 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 231 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> float\n");}
#line 2469 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 232 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> double\n");}
#line 2475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 233 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> signed\n");}
#line 2481 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 234 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> unsigned\n");}
#line 2487 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 235 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> Bool\n");}
#line 2493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 236 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> Complex\n");}
#line 2499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 237 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> Imaginary\n");}
#line 2505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 238 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_specifier -> enum_specifier\n");}
#line 2511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 242 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list -> type_specifier specifier_qualifier_list_opt\n");}
#line 2517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 243 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list -> type_qualifier specifier_qualifier_list_opt\n");}
#line 2523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 246 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list_opt -> specifier_qualifier_list\n");}
#line 2529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 247 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("specifier_qualifier_list_opt -> epsilon\n");}
#line 2535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 250 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("enum_specifier -> enum identifier_opt { enumerator_list }\n");}
#line 2541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 251 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("enum_specifier -> enum identifier_opt { enumerator_list , }\n");}
#line 2547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 252 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("enum_specifier -> enum identifier \n");}
#line 2553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 255 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("identifier_opt -> identifier\n");}
#line 2559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 256 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("identifier_opt -> epsilon\n");}
#line 2565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 259 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("enumerator_list -> enumerator\n");}
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 260 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("enumerator_list -> enumerator_list , enumerator\n");}
#line 2577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 263 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("enumerator -> enumerator_constant\n");}
#line 2583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 264 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("enumerator -> enumerator_constant = constant_expression\n");}
#line 2589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 267 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_qualifier -> const\n");}
#line 2595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 268 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_qualifier -> restrict\n");}
#line 2601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 269 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_qualifier -> volatile\n");}
#line 2607 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 272 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("function_specifier -> inline\n");}
#line 2613 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 275 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declarator -> pointer_opt direct_declarator\n");}
#line 2619 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 278 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("pointer_opt -> pointer\n");}
#line 2625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 279 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("pointer_opt -> epsilon\n");}
#line 2631 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 282 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("direct_declarator -> IDENTIFIER_\n");}
#line 2637 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 283 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("direct_declarator -> ( declarator )\n");}
#line 2643 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 284 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt assignment_expresion_opt ]  \n");}
#line 2649 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 285 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator [ static type_qualifier_list_opt assignment_expresion_opt ]  \n");}
#line 2655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 286 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator [ type_qualifier_list static assignment_expresion_opt ]  \n");}
#line 2661 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 287 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator [ type_qualifier_list_opt * ]  \n");}
#line 2667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 288 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator ( parameter_type_list )\n");}
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 289 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("direct_declarator -> direct_declarator ( identifier_list )\n");}
#line 2679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 292 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("pointer -> * type_qualifier_list_opt\n");}
#line 2685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 293 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("pointer -> * type_qualifier_list_opt pointer\n");}
#line 2691 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 296 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_qualifier_list_opt -> type_qualifier_list\n");}
#line 2697 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 297 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_qualifier_list_opt -> epsilon\n");}
#line 2703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 300 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt -> assignment_expression\n");}
#line 2709 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 301 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("assignment_expression_opt -> epsilon\n");}
#line 2715 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 304 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_qualifier_list -> type_qualifier\n");}
#line 2721 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 305 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_qualifier_list -> type_qualifier_list type_qualifier\n");}
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 308 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("parameter_type_list -> parameter_list\n");}
#line 2733 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 309 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("parameter_type_list -> parameter_list , ...\n");}
#line 2739 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 312 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("parameter_list -> parameter_declaration\n");}
#line 2745 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 313 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("parameter_list -> parameter_list , parameter_declaration\n");}
#line 2751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 318 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("parameter_declaration -> declaration_specifiers declarator\n");}
#line 2757 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 319 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("parameter_declaration -> declaration_specifiers \n");}
#line 2763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 322 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("identifier_list -> identifier \n");}
#line 2769 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 323 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("identifier_list -> identifier_list , identifier \n");}
#line 2775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 325 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("type_name -> specifier_qualifier_list\n");}
#line 2781 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 328 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("initializer -> assignmeny_expression \n");}
#line 2787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 329 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("initializer -> { initializer_list } \n");}
#line 2793 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 330 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("initializer -> { initializer_list , } \n");}
#line 2799 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 333 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("initializer_list -> designation_opt initializer\n");}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 334 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("initializer_list -> initializer_list , designation_opt initializer\n");}
#line 2811 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 337 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("designation_opt -> designation\n");}
#line 2817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 338 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("designation_opt -> epsilon\n");}
#line 2823 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 341 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("designation -> designator_list =\n");}
#line 2829 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 344 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("designator_list -> designator\n");}
#line 2835 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 345 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("designator_list -> designator_list designator\n");}
#line 2841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 348 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("[ constant_expression ]\n");}
#line 2847 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 349 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf(". identifier\n");}
#line 2853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 355 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("statement -> labeled_statement\n");}
#line 2859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 356 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("statement -> compound_statement\n");}
#line 2865 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 357 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("statement -> expression_statement\n");}
#line 2871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 358 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("statement -> selection_statement\n");}
#line 2877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 359 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("statement -> iteration_statement\n");}
#line 2883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 360 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("statement -> jump_statement\n");}
#line 2889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 363 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("labeled_statement-> identifier : statement\n");}
#line 2895 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 364 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("labeled_statement-> CASE constant_expression : statement \n");}
#line 2901 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 365 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("labeled_statement -> DEFAULT : statement\n");}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 368 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("compound_statement -> { block_item_list_opt}\n");}
#line 2913 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 371 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("block_item_list_opt -> block_item_list \n");}
#line 2919 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 372 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("block_item_list_opt -> epsilon\n");}
#line 2925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 375 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("block_item_list -> block_item\n");}
#line 2931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 376 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("block_item_list -> block_item_list block_item\n");}
#line 2937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 379 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("block_item -> declaration \n");}
#line 2943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 380 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("block_item -> statement \n");}
#line 2949 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 383 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("expression_statement -> expression_opt ;\n");}
#line 2955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 386 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("expression_opt -> expression\n");}
#line 2961 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 387 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("expression_opt -> epsilon\n");}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 390 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("selection_statement -> if ( expression ) statement\n");}
#line 2973 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 391 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("selection_statement -> if ( expression ) statement else statement\n");}
#line 2979 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 392 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("selection_statement -> switch ( expression ) statement \n");}
#line 2985 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 395 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("iteration_statement -> while ( expression ) statement\n");}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 396 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("iteration_statement -> do statement while ( expression ) ; \n");}
#line 2997 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 397 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("iteration_statement -> for(expression_opt ; expression_opt ; expression_opt) statement\n");}
#line 3003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 398 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("iteration_statement -> for (declaration expression_opt ; expression_opt ; expression_opt) statement\n");}
#line 3009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 401 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("jump_statement -> goto identifier ;\n");}
#line 3015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 402 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("jump_statement -> continue ;\n");}
#line 3021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 403 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("jump_statement -> break ;\n");}
#line 3027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 404 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("jump_statement -> return expression_opt ;\n");}
#line 3033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 408 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("translation_unit->external_declaration\n");}
#line 3039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 409 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("translation_unit->translation_unit external_declaration\n");}
#line 3045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 412 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("external_declaration->function_definition\n");}
#line 3051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 413 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("external_declaration -> declaration\n");}
#line 3057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 416 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declaration_list_opt -> declaration_list\n");}
#line 3063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 417 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declaration_list_opt -> epsilon\n");}
#line 3069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 420 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("function_definition --> declaration_specifiers declarator declaration_list_opt compound_statement\n");}
#line 3075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 423 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declaration_list -> declaration\n");}
#line 3081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 424 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {printf("declaration_list -> declaration_list declaration\n");}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;


#line 3091 "y.tab.c" /* yacc.c:1646  */
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
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
  return yyresult;
}
#line 428 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1906  */


void yyerror(char *y){
    printf("Line %d: %s: %s\n",lineNo+1,yytext,y);//lineNo+1 gives current line number
}
