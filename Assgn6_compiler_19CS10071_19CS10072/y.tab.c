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
#line 163 "assgn6_19CS10071_19CS10072.y" /* yacc.c:339  */


    #include<bits/stdc++.h>
    #include "assgn6_19CS10071_19CS10072_translator.h"
    using namespace std;
    extern int yylex();
    extern char* yytext;
    extern int lineNo;
    void yyerror(char* s);
    /**
     * @brief Global Variables
     * 
     */
    extern SymbolTable *ST;// Current Symbol Table
    extern SymbolTable *globalST;// Global Symbol Table
    extern QuadArray quadArr;//Global Quad array
    extern int cnt;//global counter for number of temporaries generated
    extern st_types_* lastType;//global variable storing last encounteres type
    extern map<string,int> labels;
    SymbolTableRow* curr;//points to current symbol during declaration
    SymbolTable* funcParam = NULL;//points to the symbol table of params
    //extern int offset;//global counter for offset
    //extern int isConditional = 0;//If a conditional block like while loop or if etc has started

#line 91 "y.tab.c" /* yacc.c:339  */

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
#line 189 "assgn6_19CS10071_19CS10072.y" /* yacc.c:355  */

    char* Int;
    char* Punctuator;
    char* Id;
    char* Float;
    char* Double;
    char* String;
    char* Char;
    attrM* atrM;
    exprr* expr;
    exprr* arr;
    blockAttr* block;
    char* storage_class_spec__;
    char* type_specifier__;
    st_types_* symType;
    declaratorAttr* decl;
    statementAttr* stmt;
    constAttr* cnst;
    SymbolTableRow* smPtr;
    argAttr* arg;

#line 343 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 360 "y.tab.c" /* yacc.c:358  */

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
#define YYLAST   1159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  380

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
       0,   305,   305,   306,   308,   309,   310,   311,   312,   316,
     327,   335,   342,   350,   378,   397,   420,   421,   422,   430,
     437,   438,   441,   444,   449,   455,   463,   470,   475,   480,
     512,   513,   517,   518,   519,   520,   521,   522,   527,   533,
     541,   591,   608,   624,   642,   648,   699,   717,   721,   731,
     745,   749,   754,   758,   769,   780,   790,   802,   806,   815,
     826,   830,   844,   848,   860,   863,   877,   880,   902,   905,
     927,   930,   956,   960,   984,   985,   986,   987,   988,   989,
     990,   991,   992,   993,   994,   997,  1001,  1007,  1014,  1025,
    1028,  1031,  1034,  1037,  1038,  1040,  1043,  1048,  1051,  1054,
    1057,  1069,  1070,  1075,  1076,  1077,  1078,  1081,  1085,  1088,
    1089,  1096,  1097,  1100,  1101,  1102,  1103,  1104,  1105,  1106,
    1110,  1111,  1114,  1115,  1118,  1119,  1120,  1123,  1124,  1127,
    1128,  1131,  1132,  1135,  1136,  1137,  1140,  1143,  1157,  1160,
    1164,  1176,  1177,  1194,  1198,  1201,  1202,  1222,  1242,  1246,
    1254,  1255,  1258,  1259,  1262,  1263,  1266,  1267,  1270,  1271,
    1276,  1277,  1280,  1281,  1283,  1286,  1297,  1298,  1301,  1302,
    1305,  1306,  1309,  1312,  1313,  1316,  1317,  1323,  1326,  1330,
    1334,  1338,  1342,  1347,  1348,  1349,  1352,  1360,  1364,  1369,
    1371,  1381,  1385,  1392,  1397,  1401,  1411,  1422,  1435,  1438,
    1452,  1463,  1477,  1493,  1495,  1499,  1502,  1506,  1512,  1513,
    1516,  1517,  1520,  1521,  1524,  1547,  1548,  1552
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
  "FRACTIONAL_CONSTANT_", "$accept", "startCond", "endCond", "constant",
  "primary_expression", "postfix_expression",
  "argument_expression_list_opt", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "M", "N", "relational_expression", "equality_expression",
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
  "declaration_list", "changeScope", YY_NULLPTR
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

#define YYPACT_NINF -293

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-293)))

#define YYTABLE_NINF -214

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    1085,  -293,  -293,  -293,  -293,   -66,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,   -18,  1085,  1085,  -293,  1085,  1085,  1048,
    -293,  -293,    -8,    -3,   108,   -41,   -37,  -293,   740,   -22,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,   -40,  -293,
       7,   108,  -293,     7,   784,  -293,   -18,    59,  1085,     7,
    -293,    92,    43,    -2,  -293,  -293,  -293,  -293,    46,   866,
     648,    10,   883,   883,  -293,  -293,  -293,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,   192,
     266,   936,  -293,    57,    54,    83,   220,   102,    74,    67,
      70,    84,   135,  -293,  -293,  -293,  -293,  -293,  -293,   116,
     137,  -293,   936,  -293,   -27,   648,  -293,  -293,   -30,  1119,
    -293,  1119,   125,   936,    87,    -1,   784,  -293,    65,  -293,
     648,  -293,  -293,   936,   936,   100,   110,  -293,  -293,  -293,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
     936,  -293,  -293,   936,   936,   936,   936,   936,   936,   936,
     936,   936,   936,   936,   936,   936,   936,   936,   936,  -293,
    -293,   136,   284,  -293,   108,   952,   162,   239,  -293,  -293,
    -293,  -293,   167,  -293,   936,  -293,  -293,  -293,   798,   139,
    -293,  -293,   111,  -293,  -293,  -293,   170,   -24,   177,   138,
    -293,  -293,  -293,  -293,  -293,  -293,  -293,    57,    57,    54,
      54,    83,    83,    83,    83,   220,   220,   102,    74,    67,
     936,   936,  -293,   149,   936,   155,   157,  -293,   189,   147,
     194,   852,   195,  -293,   172,   164,  -293,  -293,  -293,  -293,
     202,   210,  -293,  -293,   185,  -293,  -293,  -293,   936,   222,
    -293,   227,   936,  -293,   -14,   232,   241,   200,  -293,   201,
     226,  -293,    10,  -293,  -293,  -293,   784,   226,  -293,  -293,
     936,    70,    84,   936,  -293,   242,  -293,   559,  -293,  -293,
     243,  -293,  -293,   -32,   936,   274,   559,  -293,   376,  -293,
     283,  -293,  -293,   288,  -293,  -293,  -293,   782,   237,    40,
    -293,  -293,   164,   559,  -293,   559,   468,  -293,  -293,  -293,
     -13,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,  -293,
     154,   259,  -293,  -293,  -293,   279,   936,   559,  -293,  -293,
    -293,   295,  -293,  -293,   164,  -293,   936,   936,   315,   936,
    -293,   316,   164,  -293,  -293,  -293,   936,  -293,   317,   936,
     286,  -293,   559,  -293,   164,  -293,   289,   350,   559,   320,
     936,  -293,   352,  -293,   293,  -293,   936,  -293,  -293,   323,
    -293,   559,  -293,   324,  -293,   559,  -293,  -293,   559,  -293
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   105,   108,   133,   113,   128,   103,   112,   136,   110,
     111,   106,   134,   109,   114,   104,   115,   107,   135,   116,
     117,   118,   211,   139,    96,    96,   119,    96,    96,     0,
     208,   210,   126,     0,   151,     0,    89,    97,    99,     0,
     138,    95,    91,    92,    93,    94,     1,   209,     0,   154,
     148,   150,    88,   139,     0,   215,   139,     0,   212,   139,
     140,   137,   131,     0,   129,   149,   155,    98,    99,     0,
       0,   171,     0,     0,    32,    33,    34,    35,    36,    37,
       9,     4,     5,    11,     6,     7,     8,    10,    13,    26,
      38,     0,    40,    44,    47,    52,    57,    60,    62,    64,
      66,    68,    70,    72,   165,   100,   217,   214,   216,     0,
     151,   217,     0,   124,     0,     0,    30,    85,     0,   123,
     164,   123,     0,     0,     0,     0,     0,   170,     0,   173,
       0,    27,    28,     0,    23,     0,     0,    18,    19,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
       0,    38,    29,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    50,
      50,     0,   188,   141,   151,   153,   150,   102,    87,   132,
     125,   130,     0,    12,     0,   122,   120,   121,     0,     0,
     176,   166,   171,   168,   172,   174,     0,     0,     0,    22,
      24,    16,    17,    73,    41,    42,    43,    45,    46,    48,
      49,    53,    54,    55,    56,    58,    59,    61,    63,    65,
       0,     0,    50,     0,     0,     0,     0,    50,     0,     0,
       0,     0,     0,    50,     9,   194,   191,   192,   177,   178,
       0,    50,   189,   179,     0,   180,   181,   182,     0,    33,
     152,     0,     0,   162,   139,     0,     0,   156,   158,   101,
      31,    86,   171,    39,   175,   167,     0,     0,    14,    15,
       0,    67,    69,     0,   205,     0,   204,   195,   217,   217,
       0,   217,   207,     0,     0,     0,   195,   186,   195,   193,
       0,   145,   142,     0,   160,   147,   146,     0,     0,     0,
     169,    25,    51,   195,   185,   195,   195,   203,     2,   206,
       0,   217,   183,   190,   143,   144,   157,   159,   163,    20,
     171,     0,   184,    50,    50,     0,     0,   195,     2,    21,
      50,     0,     2,    50,     3,   198,     0,     0,     0,   195,
       2,     0,     3,    71,     2,     3,   195,    50,     0,     0,
       0,     3,   195,    50,     3,    50,     0,   196,   195,     0,
     195,    50,     0,   199,     0,    51,   195,    50,   200,     0,
      51,   195,    50,     0,   197,   195,    50,   202,   195,   201
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -293,  -292,  -167,  -293,  -293,  -293,  -293,  -293,   -65,  -293,
     -78,    53,    60,   193,  -159,  -287,    61,   203,   204,   221,
     150,   151,  -293,  -107,   -21,  -293,   -69,  -113,   -36,  -293,
       0,   165,  -293,   353,  -293,  -293,   -50,    30,   287,  -293,
    -293,  -293,   303,     9,  -293,   -20,  -293,  -293,   359,   -93,
    -293,   308,  -293,  -293,   123,  -293,   -80,  -120,   160,  -183,
    -293,  -293,   296,  -155,  -293,   366,  -293,  -293,   145,  -293,
    -219,  -293,  -293,  -293,  -293,   405,  -293,  -293,  -293,   -99
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   326,   341,    87,    88,    89,   198,   199,    90,    91,
      92,    93,    94,    95,   220,   171,    96,    97,    98,    99,
     100,   101,   102,   103,   117,   150,   235,   179,    22,    35,
      56,    42,    36,    37,   255,    24,    25,   120,   186,    26,
      33,    63,    64,    27,    28,    68,    39,    61,    40,    50,
     251,    51,   256,   257,   258,   259,   122,   105,   125,   126,
     127,   128,   129,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,    29,    30,    57,    31,    58,   172
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      23,   118,    55,    38,   116,   178,   193,   131,   132,   266,
     189,   221,   177,   152,   183,   321,   178,   175,   268,   180,
     119,    59,   108,    32,    41,    41,   151,    41,    41,    23,
    -161,   327,    52,   104,    34,   182,   336,  -127,    34,   109,
     339,   309,    48,    49,   113,   191,   118,   151,   346,    53,
     196,   123,   349,    62,   184,   -90,   184,   124,   151,    34,
      66,   118,   184,   273,   197,   119,    62,    60,   278,   119,
     362,   119,  -161,   184,   285,   204,   205,   206,   369,   121,
     119,   248,   288,   373,   114,   192,   319,   325,   151,   151,
     151,   151,   151,   151,   151,   151,   151,   151,   151,   151,
     151,   151,   151,   151,   106,   104,   123,   156,   157,   153,
     263,   275,   124,   200,   154,   155,     3,   178,   112,    49,
     345,    54,   304,   151,   121,   166,   320,   351,   121,   203,
     121,   312,    12,   110,   167,   111,   236,   266,   168,   121,
     194,   365,   158,   159,    18,     3,   300,   370,   322,   185,
     323,   185,   123,   169,   250,   151,   151,   265,   124,   151,
     173,    12,   283,   261,   331,   332,   174,   164,   165,   188,
       3,   337,   335,    18,   340,   348,   190,   254,   350,   305,
     306,   264,   308,    49,   356,    66,    12,   359,   352,   201,
      43,   252,    44,    45,   358,   123,   360,   357,    18,   202,
     329,   124,   366,   363,   302,   170,   -51,   222,   371,   207,
     208,   260,   328,   375,   267,   310,   374,   378,   209,   210,
     377,   269,   274,   379,   270,   215,   216,   290,   276,   277,
     343,   293,   279,   133,   294,   134,   280,   281,   284,   135,
     136,   137,   138,     1,   286,   104,     2,     3,   287,   301,
     184,     4,   236,     5,     6,     7,  -187,   334,   289,     8,
       9,    10,    11,    12,   291,    13,    14,   342,    15,   292,
     324,   262,   151,    16,    17,    18,   295,    19,    20,    21,
     354,   160,   161,   162,   163,   296,   297,   298,     1,   223,
     224,     2,     3,   225,   226,   227,     4,   254,     5,     6,
       7,   228,   229,   230,     8,     9,    10,    11,    12,   231,
      13,    14,    69,    15,   303,   232,   307,   311,    16,    17,
      18,   233,    19,    20,    21,   314,   318,    70,   253,   106,
     315,   330,   338,    72,    73,    74,    75,    76,    77,    78,
      79,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   333,   211,   212,   213,   214,  -195,   344,   355,
     347,   353,   361,   -51,   364,   367,   368,   372,   376,   217,
     271,   218,   272,   234,    81,    82,    83,    84,    85,    86,
       1,   223,   224,     2,     3,   225,   226,   227,     4,   219,
       5,     6,     7,   228,   229,   230,     8,     9,    10,    11,
      12,   231,    13,    14,    69,    15,    67,   232,   187,    65,
      16,    17,    18,   233,    19,    20,    21,   181,   176,    70,
     317,   106,   299,   107,   195,    72,    73,    74,    75,    76,
      77,    78,    79,   313,    47,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   234,    81,    82,    83,    84,
      85,    86,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,    69,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     0,
       0,    70,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,   223,   224,     0,     0,   225,   226,
     227,     0,     0,     0,     0,     0,   228,   229,   230,     0,
       0,     0,     0,     0,   231,     0,     0,    69,     0,     0,
     232,     0,     0,     0,     0,     0,   233,     0,     0,     0,
       0,     0,    70,     0,   106,     0,     0,     0,    72,    73,
      74,    75,    76,    77,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   234,    81,
      82,    83,    84,    85,    86,     2,     3,     0,     0,     0,
       4,     0,     5,     0,     7,     0,     0,     0,     0,     9,
      10,     0,    12,     0,    13,    14,    69,     0,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     0,
       0,    70,     0,     0,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,     1,     0,     0,     2,     3,     0,
       0,     0,     4,     0,     5,     6,     7,     0,     0,     0,
       8,     9,    10,    11,    12,     0,    13,    14,     0,    15,
       0,     0,     0,     0,    16,    17,    18,     0,    19,    20,
      21,     0,     0,     0,     0,  -213,     1,     0,     0,     2,
       3,     0,     0,     0,     4,     0,     5,     6,     7,     0,
       0,     0,     8,     9,    10,    11,    12,     0,    13,    14,
       0,    15,    69,     0,     0,    54,    16,    17,    18,     0,
      19,    20,    21,     0,     0,     0,    69,    70,     0,    71,
       0,     0,     0,    72,    73,    74,    75,    76,    77,    78,
      79,    70,     0,   262,     0,     0,     0,    72,    73,    74,
      75,    76,    77,    78,    79,     0,   316,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    80,    81,    82,    83,    84,    85,    86,
      69,     0,     0,     0,     0,     0,     0,    80,    81,    82,
      83,    84,    85,    86,    69,    70,     0,     0,     0,     0,
       0,    72,    73,    74,    75,    76,    77,    78,    79,   115,
       0,    69,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,   282,   130,     0,     0,     0,
       0,     0,    72,    73,    74,    75,    76,    77,    78,    79,
       0,    80,    81,    82,    83,    84,    85,    86,     0,     0,
       0,     0,     0,     0,     0,    80,    81,    82,    83,    84,
      85,    86,     0,     0,    69,     0,     0,     0,     0,     0,
       0,     0,    80,    81,    82,    83,    84,    85,    86,    70,
      69,     0,     0,     0,     0,    72,    73,    74,    75,    76,
      77,    78,    79,     0,     0,    70,     0,     0,     0,     0,
       0,    72,    73,    74,   249,    76,    77,    78,    79,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    80,    81,    82,    83,    84,
      85,    86,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    80,    81,    82,    83,    84,    85,    86,    46,     0,
       0,     0,     1,     0,     0,     2,     3,     0,     0,     0,
       4,     0,     5,     6,     7,     0,     0,     0,     8,     9,
      10,    11,    12,     0,    13,    14,     0,    15,     0,     0,
       0,     0,    16,    17,    18,     0,    19,    20,    21,     1,
       0,     0,     2,     3,     0,     0,     0,     4,     0,     5,
       6,     7,     0,     0,     0,     8,     9,    10,    11,    12,
       0,    13,    14,     0,    15,     0,     0,     0,     0,    16,
      17,    18,     0,    19,    20,    21,     2,     3,     0,     0,
       0,     4,     0,     5,     0,     7,     0,     0,     0,     0,
       9,    10,     0,    12,     0,    13,    14,     0,     0,     0,
       0,     0,     0,    16,    17,    18,     0,    19,    20,    21
};

static const yytype_int16 yycheck[] =
{
       0,    70,    38,    23,    69,   112,   126,    72,    73,   192,
     123,   170,   111,    91,    44,   302,   123,   110,    42,    46,
      70,    43,    58,    89,    24,    25,    91,    27,    28,    29,
      44,    44,    73,    54,    52,   115,   328,    45,    52,    59,
     332,    73,    45,    34,    46,    46,   115,   112,   340,    86,
     130,    41,   344,    93,    86,    73,    86,    47,   123,    52,
      51,   130,    86,   222,   133,   115,    93,    89,   227,   119,
     357,   121,    86,    86,   233,   153,   154,   155,   365,    70,
     130,   174,   241,   370,    86,    86,    46,   306,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,    45,   126,    41,    53,    54,    52,
     188,   224,    47,   134,    57,    58,     8,   224,    75,   110,
     339,    75,   277,   188,   115,    51,    86,   346,   119,   150,
     121,   286,    24,    41,    67,    43,   172,   320,    68,   130,
      75,   360,    59,    60,    36,     8,   266,   366,   303,   119,
     305,   121,    41,    69,   175,   220,   221,    46,    47,   224,
      44,    24,   231,   184,   323,   324,    29,    65,    66,    44,
       8,   330,   327,    36,   333,   342,    89,   177,   345,   278,
     279,    42,   281,   174,   351,   176,    24,   354,   347,    89,
      25,    29,    27,    28,   353,    41,   355,   352,    36,    89,
      46,    47,   361,   358,   273,    70,    71,    71,   367,   156,
     157,    44,   311,   372,    44,   284,   371,   376,   158,   159,
     375,    44,    73,   378,    86,   164,   165,   248,    73,    72,
     337,   252,    43,    41,   254,    43,    89,    43,    43,    47,
      48,    49,    50,     4,    72,   266,     7,     8,    46,   270,
      86,    12,   288,    14,    15,    16,    46,   326,    73,    20,
      21,    22,    23,    24,    42,    26,    27,   336,    29,    42,
     306,    45,   337,    34,    35,    36,    44,    38,    39,    40,
     349,    61,    62,    63,    64,    44,    86,    86,     4,     5,
       6,     7,     8,     9,    10,    11,    12,   297,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    72,    31,    73,    43,    34,    35,
      36,    37,    38,    39,    40,    42,    89,    43,    89,    45,
      42,    72,    37,    49,    50,    51,    52,    53,    54,    55,
      56,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    73,   160,   161,   162,   163,    73,    43,    73,
      44,    44,    73,    13,    44,    13,    73,    44,    44,   166,
     220,   167,   221,    89,    90,    91,    92,    93,    94,    95,
       4,     5,     6,     7,     8,     9,    10,    11,    12,   168,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    53,    31,   121,    50,
      34,    35,    36,    37,    38,    39,    40,   114,   110,    43,
     297,    45,   262,    57,   128,    49,    50,    51,    52,    53,
      54,    55,    56,   288,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,
      94,    95,     4,    -1,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    -1,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    34,    35,    36,    -1,    38,    39,    40,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,     5,     6,    -1,    -1,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    -1,
      -1,    -1,    -1,    -1,    25,    -1,    -1,    28,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,    -1,
      -1,    -1,    43,    -1,    45,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,
      91,    92,    93,    94,    95,     7,     8,    -1,    -1,    -1,
      12,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,    21,
      22,    -1,    24,    -1,    26,    27,    28,    -1,    -1,    -1,
      -1,    -1,    34,    35,    36,    -1,    38,    39,    40,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,     4,    -1,    -1,     7,     8,    -1,
      -1,    -1,    12,    -1,    14,    15,    16,    -1,    -1,    -1,
      20,    21,    22,    23,    24,    -1,    26,    27,    -1,    29,
      -1,    -1,    -1,    -1,    34,    35,    36,    -1,    38,    39,
      40,    -1,    -1,    -1,    -1,    45,     4,    -1,    -1,     7,
       8,    -1,    -1,    -1,    12,    -1,    14,    15,    16,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    -1,    26,    27,
      -1,    29,    28,    -1,    -1,    75,    34,    35,    36,    -1,
      38,    39,    40,    -1,    -1,    -1,    28,    43,    -1,    45,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    54,    55,
      56,    43,    -1,    45,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    54,    55,    56,    -1,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    89,    90,    91,    92,    93,    94,    95,
      28,    -1,    -1,    -1,    -1,    -1,    -1,    89,    90,    91,
      92,    93,    94,    95,    28,    43,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    43,
      -1,    28,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    73,    43,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    52,    53,    54,    55,    56,
      -1,    89,    90,    91,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,
      94,    95,    -1,    -1,    28,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    89,    90,    91,    92,    93,    94,    95,    43,
      28,    -1,    -1,    -1,    -1,    49,    50,    51,    52,    53,
      54,    55,    56,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    49,    50,    51,    52,    53,    54,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    89,    90,    91,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    89,    90,    91,    92,    93,    94,    95,     0,    -1,
      -1,    -1,     4,    -1,    -1,     7,     8,    -1,    -1,    -1,
      12,    -1,    14,    15,    16,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    -1,    26,    27,    -1,    29,    -1,    -1,
      -1,    -1,    34,    35,    36,    -1,    38,    39,    40,     4,
      -1,    -1,     7,     8,    -1,    -1,    -1,    12,    -1,    14,
      15,    16,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      -1,    26,    27,    -1,    29,    -1,    -1,    -1,    -1,    34,
      35,    36,    -1,    38,    39,    40,     7,     8,    -1,    -1,
      -1,    12,    -1,    14,    -1,    16,    -1,    -1,    -1,    -1,
      21,    22,    -1,    24,    -1,    26,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    34,    35,    36,    -1,    38,    39,    40
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     4,     7,     8,    12,    14,    15,    16,    20,    21,
      22,    23,    24,    26,    27,    29,    34,    35,    36,    38,
      39,    40,   124,   126,   131,   132,   135,   139,   140,   170,
     171,   173,    89,   136,    52,   125,   128,   129,   141,   142,
     144,   126,   127,   127,   127,   127,     0,   171,    45,   139,
     145,   147,    73,    86,    75,   124,   126,   172,   174,    43,
      89,   143,    93,   137,   138,   144,   139,   129,   141,    28,
      43,    45,    49,    50,    51,    52,    53,    54,    55,    56,
      89,    90,    91,    92,    93,    94,    95,    99,   100,   101,
     104,   105,   106,   107,   108,   109,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   153,    45,   161,   124,   141,
      41,    43,    75,    46,    86,    43,   104,   120,   122,   132,
     133,   139,   152,    41,    47,   154,   155,   156,   157,   158,
      43,   104,   104,    41,    43,    47,    48,    49,    50,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
     121,   104,   106,    52,    57,    58,    53,    54,    59,    60,
      61,    62,    63,    64,    65,    66,    51,    67,    68,    69,
      70,   111,   175,    44,    29,   145,   147,   175,   119,   123,
      46,   138,   152,    44,    86,   133,   134,   134,    44,   123,
      89,    46,    86,   153,    75,   158,   152,   122,   102,   103,
     120,    89,    89,   120,   106,   106,   106,   107,   107,   108,
     108,   109,   109,   109,   109,   112,   112,   113,   114,   115,
     110,   110,    71,     5,     6,     9,    10,    11,    17,    18,
      19,    25,    31,    37,    89,   122,   124,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   145,    52,
     120,   146,    29,    89,   126,   130,   148,   149,   150,   151,
      44,   120,    45,   106,    42,    46,   155,    44,    42,    44,
      86,   116,   117,   110,    73,   123,    73,    72,   110,    43,
      89,    43,    73,   122,    43,   110,    72,    46,   110,    73,
     120,    42,    42,   120,   141,    44,    44,    86,    86,   154,
     153,   120,   122,    72,   159,   175,   175,    73,   175,    73,
     122,    43,   159,   164,    42,    42,    74,   150,    89,    46,
      86,   111,   159,   159,   124,   166,    97,    44,   175,    46,
      72,   110,   110,    73,   122,   159,    97,   110,    37,    97,
     110,    98,   122,   119,    43,   166,    97,    44,    98,    97,
      98,   166,   110,    44,   122,    73,    98,   159,   110,    98,
     110,    73,   111,   159,    44,   166,   110,    13,    73,   111,
     166,   110,    44,   111,   159,   110,    44,   159,   110,   159
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    99,    99,    99,    99,    99,   100,
     100,   100,   100,   101,   101,   101,   101,   101,   101,   101,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   104,
     104,   104,   105,   105,   105,   105,   105,   105,   106,   106,
     107,   107,   107,   107,   108,   108,   108,   109,   109,   109,
     110,   111,   112,   112,   112,   112,   112,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     119,   119,   120,   120,   121,   121,   121,   121,   121,   121,
     121,   121,   121,   121,   121,   122,   122,   123,   124,   125,
     125,   126,   126,   126,   126,   127,   127,   128,   128,   129,
     129,   130,   130,   131,   131,   131,   131,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     133,   133,   134,   134,   135,   135,   135,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   140,   141,   142,   142,
     143,   143,   143,   143,   143,   143,   143,   143,   144,   144,
     145,   145,   146,   146,   147,   147,   148,   148,   149,   149,
     150,   150,   151,   151,   152,   153,   153,   153,   154,   154,
     155,   155,   156,   157,   157,   158,   158,   159,   159,   159,
     159,   159,   159,   160,   160,   160,   161,   162,   162,   163,
     163,   164,   164,   165,   166,   166,   167,   167,   167,   168,
     168,   168,   168,   169,   169,   169,   169,   169,   170,   170,
     171,   171,   172,   172,   173,   174,   174,   175
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     1,     4,     4,     3,     3,     2,     2,
       6,     7,     1,     0,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       0,     0,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     4,     1,     4,
       1,     9,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     3,     1,
       0,     2,     2,     2,     2,     1,     0,     1,     3,     1,
       3,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     1,     0,     5,     6,     2,     1,     0,     1,
       3,     1,     3,     1,     1,     1,     1,     2,     1,     0,
       1,     3,     5,     6,     6,     5,     5,     5,     2,     3,
       1,     0,     1,     0,     1,     2,     1,     3,     1,     3,
       2,     1,     1,     3,     1,     1,     3,     4,     2,     4,
       1,     0,     2,     1,     2,     3,     2,     1,     1,     1,
       1,     1,     1,     3,     4,     3,     4,     1,     0,     1,
       3,     1,     1,     2,     1,     0,     9,    13,     5,    10,
      12,    16,    15,     3,     2,     2,     3,     2,     1,     2,
       1,     1,     1,     0,     4,     1,     2,     0
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
#line 305 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {isConditional = 1;}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 306 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {isConditional = 0;}
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 308 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { (yyval.cnst) = new constAttr(new FLOAT(),(yyvsp[0].Double)); }
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 309 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.cnst) = new constAttr(new CHAR(),(yyvsp[0].Char));}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 310 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { }
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 311 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.cnst) = new constAttr(new INT(),(yyvsp[0].Int));}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 312 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { }
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 316 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
    funcParam = NULL;
                            
                            (yyval.expr) = new exprr();
                            (yyval.expr)->loc  = (yyvsp[0].smPtr);
                            //h1
                            //if($$->loc->type_==NULL) $$->loc->type_  = lastType;
                            (yyval.expr)->Type = (yyval.expr)->loc->type_;
                            
                            
                        }
#line 1955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 327 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        funcParam = NULL;
                        (yyval.expr) = new exprr();
                        (yyval.expr)->loc = gentemp((yyvsp[0].cnst)->tp,(yyvsp[0].cnst)->val);
                        (yyval.expr)->Type = (yyvsp[0].cnst)->tp;
                        (yyval.expr)->loc->initVal_ = (yyvsp[0].cnst)->val;
                        emit("=",(yyval.expr)->loc->name_,(yyvsp[0].cnst)->val);
                    }
#line 1968 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 335 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        funcParam = NULL;
                        (yyval.expr) = new exprr();
                        (yyval.expr)->loc  = gentemp(new PTR(0,new CHAR()),(yyvsp[0].String));
                        (yyval.expr)->Type = (yyval.expr)->loc->type_;
                        emit("=",(yyval.expr)->loc->name_,(yyvsp[0].String));
                    }
#line 1980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 342 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { 
                        funcParam = NULL;
                        (yyval.expr) = (yyvsp[-1].expr);
                        //
                        }
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 350 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                         
                        
                        
                        if((yyvsp[0].expr)->isBool){
                            (yyval.arr) = (yyvsp[0].expr);
                        }else{
                             
                             
                            (yyval.arr) = new exprr((yyvsp[0].expr)->loc->type_->name_);
                            
                            (yyval.arr)->array = (yyvsp[0].expr)->loc;
                            
                            string tpName = (yyvsp[0].expr)->loc->type_->name_;
                            
                            if(tpName.size()>=5&&tpName.substr(0,5)=="array"){
                                (yyval.arr)->loc = gentemp(new INT());
                                (yyval.arr)->loc->initVal_ = "0";
                                emit("=",(yyval.arr)->loc->name_,"0");

                            }else (yyval.arr)->loc = (yyvsp[0].expr)->loc;
                            (yyval.arr)->Type = (yyvsp[0].expr)->Type;
                        }
                        
                        //
                        //
                        //
                        }
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 378 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                          
                        (yyval.arr) = (yyvsp[-3].arr);
                        
                        if((yyvsp[-3].arr)->Type->type_==NULL){
                            throw typeError();
                        }
                        
                        (yyval.arr)->Type = (yyvsp[-3].arr)->Type->type_;//next type in type expression tree
                        
                        //SymbolTableRow* t = gentemp(new INT());   //for address calculations
                        (yyval.arr)->loc = gentemp(new INT());        
                        string nme =  (yyval.arr)->loc->name_; 
                                     
                        emit("*",(yyvsp[-1].expr)->loc->name_,to_string((yyval.arr)->Type->width),nme);                        
                        //emit("+",$1->loc->name_,t->name_,nme);
                          

                    }
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 397 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                         
                        (yyval.arr)=new exprr();	
                        
		                //$$->array=gentemp($1->Type);
                        //_FUNC
                        (yyval.arr)->array = (yyval.arr)->loc = (yyvsp[-3].arr)->loc;
		                (yyval.arr)->Type = (yyvsp[-3].arr)->Type;
                        
                        if((yyvsp[-3].arr)->array->type_->retType==NULL)//void function
                        {
                            emit("call",(yyvsp[-3].arr)->array->name_,to_string((yyvsp[-1].arg)->params.size()),"");
                            (yyval.arr) = NULL;
                            
                        }else{
                            (yyval.arr)->loc = (yyval.arr)->array = gentemp((yyvsp[-3].arr)->array->type_->retType);
                            (yyval.arr)->Type = (yyvsp[-3].arr)->array->type_->retType;
                            
                            emit("call",(yyvsp[-3].arr)->array->name_,to_string((yyvsp[-1].arg)->params.size()),(yyval.arr)->loc->name_);
                        }
                        
		                
                    }
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 420 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 421 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 422 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {

                        (yyval.arr) = new exprr();
                        (yyval.arr)->loc = (yyval.arr)->array = gentemp((yyvsp[-1].arr)->Type);
                        (yyval.arr)->Type = (yyvsp[-1].arr)->Type;
                        emit("=",(yyval.arr)->loc->name_,(yyvsp[-1].arr)->loc->name_);
                        emit("+",(yyvsp[-1].arr)->loc->name_,"1",(yyvsp[-1].arr)->loc->name_);
                    }
#line 2100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 430 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        (yyval.arr) = new exprr();
                        (yyval.arr)->loc =  (yyval.arr)->array = gentemp((yyvsp[-1].arr)->Type);
                        (yyval.arr)->Type = (yyvsp[-1].arr)->Type;
                        emit("=",(yyval.arr)->loc->name_,(yyvsp[-1].arr)->loc->name_);
                        emit("-",(yyvsp[-1].arr)->loc->name_,"1",(yyvsp[-1].arr)->loc->name_);
                    }
#line 2112 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 437 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 2118 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 438 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 441 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                               (yyval.arg) = (yyvsp[0].arg);
                                }
#line 2132 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 444 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                 (yyval.arg)= new argAttr();
                             }
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 449 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { 
                                    
                                    (yyval.arg) = new argAttr();                                   
                                    (yyval.arg)->params.push_back((yyvsp[0].expr)->loc);
                                    emit("param",(yyvsp[0].expr)->loc->name_,"","");
                                }
#line 2151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 455 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                (yyval.arg) = (yyvsp[-2].arg);                                   
                                (yyval.arg)->params.push_back((yyvsp[0].expr)->loc);
                                emit("param",(yyvsp[0].expr)->loc->name_,"","");
                            }
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 463 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {    
                            
                        (yyval.arr) = (yyvsp[0].arr);
                        //
                       // 
                        //
                        }
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 470 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                         
                        emit("+",(yyvsp[0].arr)->loc->name_,"1",(yyvsp[0].arr)->loc->name_);
                        (yyval.arr) = (yyvsp[0].arr);
                    }
#line 2183 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 475 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                         
                        emit("-",(yyvsp[0].arr)->loc->name_,"1",(yyvsp[0].arr)->loc->name_);
                        (yyval.arr) = (yyvsp[0].arr);
                    }
#line 2193 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 480 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                         
                        (yyval.arr) = new exprr();
                        if((yyvsp[-1].Punctuator)=="*"){
                            if((yyvsp[0].arr)->Type->type_==NULL)   throw typeError();
                            (yyval.arr)->array = (yyvsp[0].arr)->loc;
                            (yyval.arr)->loc = gentemp((yyvsp[0].arr)->Type->type_);
                            (yyval.arr)->Type = (yyvsp[0].arr)->Type->type_;
                            emit("="+string((yyvsp[-1].Punctuator)),(yyval.arr)->loc->name_,(yyvsp[0].arr)->loc->name_);
                        }else if((yyvsp[-1].Punctuator)=="&"){
                            SymbolTableRow* temp;
                            
                            string tpName = (yyvsp[0].arr)->array->type_->name_;
                            if(tpName.size()>=5&&tpName.substr(0,5)=="array"){
                                temp = gentemp(new PTR(0,(yyvsp[0].arr)->array->type_));
                                
                                emit("=&",temp->name_,(yyvsp[0].arr)->array->name_);
                            }else{
                                temp = gentemp(new PTR(0,(yyvsp[0].arr)->array->type_));
                                emit("=&",temp->name_,(yyvsp[0].arr)->loc->name_);
                            }
                            (yyval.arr)->loc = temp;
                            (yyval.arr)->Type = temp->type_;
                            (yyval.arr)->array = temp;                            
                        }
                        else{
                            (yyval.arr)->array = (yyval.arr)->loc = gentemp((yyvsp[0].arr)->Type);
                            (yyval.arr)->Type = (yyvsp[0].arr)->Type;
                            emit("="+string((yyvsp[-1].Punctuator)),(yyval.arr)->loc->name_,(yyvsp[0].arr)->loc->name_);
                        }
                        
                    }
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 512 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 513 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 517 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = "&";}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 518 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = "*";}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 519 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator)="+";}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 520 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator)="-";}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 521 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator)="~";}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 522 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator)="!";}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 527 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { 
    
                         (yyval.arr) = (yyvsp[0].arr);
                       //  
                        //
                         }
#line 2289 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 533 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        
                        (yyval.arr) = new exprr();
                        typecheck2((yyvsp[0].arr),lastType);//forced casting
                    }
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 541 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
   // 
                                
                                if((yyvsp[0].arr)==NULL){
                                    (yyval.expr) = NULL;
                                }else{
                                    if((yyvsp[0].arr)->isBool){
                                    (yyval.expr) = (yyvsp[0].arr);
                                    }else{
                                        (yyval.expr) = new exprr();
                                    //
                                    //
                                        string tpName = (yyvsp[0].arr)->array->type_->name_;
                                    // 
                                        if(tpName.size()>=3&&tpName.substr(0,3)=="ptr"){
                                            (yyval.expr)->loc = (yyvsp[0].arr)->loc;
                                            
                                        }else if(tpName.size()>=5&&tpName.substr(0,5)=="array"){
                                            
                                            if((yyvsp[0].arr)->Type->type_==NULL){
                                                //Need to dereference
                                                (yyval.expr)->loc  = gentemp((yyvsp[0].arr)->Type);
                                                emit("=[]",(yyvsp[0].arr)->array->name_,(yyvsp[0].arr)->loc->name_,(yyval.expr)->loc->name_);
                                            }else{
                                                
                                                (yyval.expr)->loc= gentemp(new PTR(0,(yyvsp[0].arr)->array->type_->type_));
                                                emit("+",(yyvsp[0].arr)->array->name_,(yyvsp[0].arr)->loc->name_,(yyval.expr)->loc->name_);
                                            }
                                            

                                        }else if((yyvsp[0].arr)->loc->type_->name_=="function"){
                                            
                                            (yyval.expr)->loc = (yyvsp[0].arr)->loc;
                                            
                                        }
                                        else{
                                            
                                            //normal variable
                                            (yyval.expr)->loc = (yyvsp[0].arr)->loc;
                                        
                                        
                                        }
                                        (yyval.expr)->Type = (yyvsp[0].arr)->Type;
                                    }
                                    
                                }
                                
                                 //
                                 //
                            }
#line 2354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 591 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                (yyval.expr) = new exprr();
                                if((yyvsp[-2].expr)->Type->name_==(yyvsp[0].arr)->Type->name_){
                                    (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->Type);
                                    emit("*",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].arr)->loc->name_,(yyval.expr)->loc->name_);
                                }else{//some casting required
                                    
                                    if(typecheck1((yyvsp[-2].expr),(yyvsp[0].arr))){
                                        (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->loc->type_);
                                        emit("*",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].arr)->loc->name_,(yyval.expr)->loc->name_);
                                    } else{
                                        throw typeError();
                                    }
                                }
                                 (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                                
                            }
#line 2376 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 608 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                (yyval.expr) = new exprr();
                                if((yyvsp[-2].expr)->Type->name_==(yyvsp[0].arr)->Type->name_){
                                    (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->Type);
                                    emit("/",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].arr)->loc->name_,(yyval.expr)->loc->name_);
                                }else{//some casting required
                                   
                                    if(typecheck1((yyvsp[-2].expr),(yyvsp[0].arr))){
                                        (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->loc->type_);
                                        emit("/",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].arr)->loc->name_,(yyval.expr)->loc->name_);
                                    } else{
                                        throw typeError();
                                    }
                                }
                                 (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                            }
#line 2397 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 624 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                (yyval.expr) = new exprr();
                                if((yyvsp[-2].expr)->Type->name_==(yyvsp[0].arr)->Type->name_){
                                    (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->Type);
                                    emit("%",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].arr)->loc->name_,(yyval.expr)->loc->name_);
                                }else{//some casting required
                                    if(typecheck1((yyvsp[-2].expr),(yyvsp[0].arr))){
                                        (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->loc->type_);
                                        emit("%",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].arr)->loc->name_,(yyval.expr)->loc->name_);
                                    } else{
                                        throw typeError();
                                    }
                                }
                                 (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                            }
#line 2417 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 642 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            
                            (yyval.expr) = (yyvsp[0].expr);//Just copy
                            
                                
                            }
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 648 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                
                                (yyval.expr) = new exprr();/*
                                //
                                //quadArr.print();
                               // 
                               // 
                                if($1->Type->name_==$3->Type->name_){
                                    //
                                   // 
                                    $$->loc = gentemp($1->Type);
                                   // 
                                   // 
                                   // 
                                   // 
                                    emit("+",$1->loc->name_,$3->loc->name_,$$->loc->name_);
                                    //quadArr.print();
                                    //
                                }else{//some casting required
                                    
                                }*/
                                if((!(yyvsp[-2].expr)->isBool)&&((yyvsp[-2].expr)->loc->type_->name_.size()>=3&&(yyvsp[-2].expr)->loc->type_->name_.substr(0,3)=="ptr")){
                                   
                                    
                                    if((yyvsp[0].expr)->isBool) convBooltoInt((yyvsp[0].expr));
                                    if((yyvsp[0].expr)->loc->type_->name_=="int"){//Pointer arithmetic for plus
                                        SymbolTableRow* temp = gentemp(new INT());
                                        emit("*",(yyvsp[0].expr)->loc->name_,to_string((yyvsp[-2].expr)->loc->type_->type_->width),temp->name_);
                                        (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->loc->type_);
                                        (yyval.expr)->array = (yyvsp[-2].expr)->array;
                                        emit("+",(yyvsp[-2].expr)->loc->name_,temp->name_,(yyval.expr)->loc->name_);
                                    }else throw typeError();
                                
                                }else if((!(yyvsp[-2].expr)->isBool)&&((yyvsp[-2].expr)->loc->type_->name_.size()>=5&&(yyvsp[-2].expr)->loc->type_->name_.substr(0,5)=="array")){
                                    if((yyvsp[0].expr)->isBool) convBooltoInt((yyvsp[0].expr));
                                    if((yyvsp[0].expr)->loc->type_->name_=="int"){//Pointer arithmetic for plus
                                        SymbolTableRow* temp = gentemp(new INT());
                                        emit("*",(yyvsp[0].expr)->loc->name_,to_string((yyvsp[-2].expr)->loc->type_->type_->width),temp->name_);
                                        (yyval.expr)->loc = gentemp(new PTR(0,(yyvsp[-2].expr)->loc->type_->type_));
                                        (yyval.expr)->array = (yyvsp[-2].expr)->array;
                                        emit("+",(yyvsp[-2].expr)->loc->name_,temp->name_,(yyval.expr)->loc->name_);
                                    }else throw typeError();
                                }else  if(typecheck1((yyvsp[-2].expr),(yyvsp[0].expr))){
                                        (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->loc->type_);
                                        emit("+",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,(yyval.expr)->loc->name_);
                                } else{
                                    throw typeError();
                                }
                                 (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                                 
                        }
#line 2484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 699 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            (yyval.expr) = new exprr();
                                if((yyvsp[-2].expr)->Type->name_==(yyvsp[0].expr)->Type->name_){
                                    (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->Type);
                                    emit("-",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,(yyval.expr)->loc->name_);
                                }else{//some casting required
                                   if(typecheck1((yyvsp[-2].expr),(yyvsp[0].expr))){
                                        (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->loc->type_);
                                        emit("-",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,(yyval.expr)->loc->name_);
                                    } else{
                                        throw typeError();
                                    }
                                }
                                 (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                        }
#line 2504 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 717 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            
                            (yyval.expr) = (yyvsp[0].expr);
                        }
#line 2513 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 721 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            (yyval.expr) = new exprr();
                            if((yyvsp[0].expr)->Type->name_=="int"&&(yyvsp[-2].expr)->Type->name_=="int"){
                                (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->Type);
                                emit("<<",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,(yyval.expr)->loc->name_);
                            }else{
                                throw typeError();
                            }
                             (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                        }
#line 2528 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 731 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            (yyval.expr) = new exprr();
                            if((yyvsp[0].expr)->Type->name_=="int"&&(yyvsp[-2].expr)->Type->name_=="int"){
                                (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->Type);
                                emit(">>",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,(yyval.expr)->loc->name_);
                            }else{
                               throw typeError();
                            }
                             (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                        }
#line 2543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 745 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
    (yyval.atrM) = new attrM();
    (yyval.atrM)->instr = nextinstr();
}
#line 2552 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 749 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
    (yyval.stmt) = new statementAttr();
    (yyval.stmt)->nextList = makelist(nextinstr());
    emit("goto","","","");
}
#line 2562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 754 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            
                            (yyval.expr) = (yyvsp[0].expr);
                        }
#line 2571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 758 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            
                            if(!typecheck1((yyvsp[-2].expr),(yyvsp[0].expr))) throw typeError();
                            (yyval.expr) = new exprr();
                            (yyval.expr)->trueList = makelist(nextinstr());
                            (yyval.expr)->falseList = makelist(nextinstr()+1);
                            emit("ifLESSgoto",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,"");
                            emit("goto","","","");
                             (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                             (yyval.expr)->isBool = 1;
                        }
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 769 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            
                            if(!typecheck1((yyvsp[-2].expr),(yyvsp[0].expr))) throw typeError();
                            (yyval.expr) = new exprr();
                            (yyval.expr)->trueList = makelist(nextinstr());
                            (yyval.expr)->falseList = makelist(nextinstr()+1);
                            emit("ifGRTHgoto",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,"");
                            emit("goto","","","");
                            (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                            (yyval.expr)->isBool = 1;
                        }
#line 2603 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 780 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            if(!typecheck1((yyvsp[-2].expr),(yyvsp[0].expr))) throw typeError();
                            (yyval.expr) = new exprr();
                            (yyval.expr)->trueList = makelist(nextinstr());
                            (yyval.expr)->falseList = makelist(nextinstr()+1);
                            emit("ifLESSEgoto",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,"");
                            emit("goto","","","");
                             (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                             (yyval.expr)->isBool = 1;
                        }
#line 2618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 790 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            if(!typecheck1((yyvsp[-2].expr),(yyvsp[0].expr))) throw typeError();
                            (yyval.expr) = new exprr();
                            (yyval.expr)->trueList = makelist(nextinstr());
                            (yyval.expr)->falseList = makelist(nextinstr()+1);
                            emit("ifGRTHEgoto",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,"");
                            emit("goto","","","");
                             (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                             (yyval.expr)->isBool = 1;
                        }
#line 2633 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 802 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            
                            (yyval.expr) = (yyvsp[0].expr);//Same just copy
                        }
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 806 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            (yyval.expr) = new exprr();
                            (yyval.expr)->trueList = makelist(nextinstr());
                            (yyval.expr)->falseList = makelist(nextinstr()+1);
                            emit("ifEQgoto",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,"");
                            emit("goto","","","");
                             (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                             (yyval.expr)->isBool = 1;
                        }
#line 2656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 815 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            (yyval.expr) = new exprr();
                            (yyval.expr)->trueList = makelist(nextinstr());
                            (yyval.expr)->falseList = makelist(nextinstr()+1);
                            emit("ifNEQgoto",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,"");
                            emit("goto","","","");
                             (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                             (yyval.expr)->isBool = 1;
                        }
#line 2670 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 826 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            
                            (yyval.expr) = (yyvsp[0].expr);//Keep Same
                        }
#line 2679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 830 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            (yyval.expr) = new exprr();
                            if((yyvsp[0].expr)->Type->name_=="int"&&(yyvsp[-2].expr)->Type->name_=="int"){
                                (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->Type);
                                emit("&",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,(yyval.expr)->loc->name_);
                            }else{
                                throw typeError();
                            }
                             (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                             
                        }
#line 2695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 844 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                
                                (yyval.expr) = (yyvsp[0].expr);// Keep Same
                            }
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 848 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                (yyval.expr) = new exprr();
                                if((yyvsp[0].expr)->Type->name_=="int"&&(yyvsp[-2].expr)->Type->name_=="int"){
                                    (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->Type);
                                    emit("^",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,(yyval.expr)->loc->name_);
                                }else{
                                    throw typeError();
                                }
                                 (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                            }
#line 2719 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 860 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { 
                                    
                                    (yyval.expr) = (yyvsp[0].expr);}
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 863 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                    
                                    (yyval.expr) = new exprr();
                                    if((yyvsp[0].expr)->Type->name_=="int"&&(yyvsp[-2].expr)->Type->name_=="int"){
                                        (yyval.expr)->loc = gentemp((yyvsp[-2].expr)->Type);
                                        emit("|",(yyvsp[-2].expr)->loc->name_,(yyvsp[0].expr)->loc->name_,(yyval.expr)->loc->name_);
                                    }else{
                                        throw typeError();
                                    }
                                     (yyval.expr)->Type = (yyvsp[-2].expr)->Type;
                                }
#line 2743 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 877 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                
                            (yyval.expr) = (yyvsp[0].expr);}
#line 2751 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 880 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                (yyval.expr) = new exprr();
                                if(!(yyvsp[-3].expr)->isBool){
                                    if((yyvsp[-3].expr)->loc->type_->name_=="int"){
                                        convInttoBool((yyvsp[-3].expr));
                                    }else throw typeError();
                                }
                                if(!(yyvsp[0].expr)->isBool){
                                    if((yyvsp[0].expr)->loc->type_->name_=="int"){
                                        convInttoBool((yyvsp[0].expr));
                                    }else throw typeError();
                                }
                                
                                backpatch((yyvsp[-3].expr)->trueList, (yyvsp[-1].atrM)->instr);
                                (yyval.expr)->trueList = (yyvsp[0].expr)->trueList;
                                (yyval.expr)->falseList = merge((yyvsp[-3].expr)->falseList,(yyvsp[0].expr)->falseList);
                                 (yyval.expr)->Type = (yyvsp[-3].expr)->Type;
                                 (yyval.expr)->isBool = 1;
                            }
#line 2775 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 902 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                
    (yyval.expr) = (yyvsp[0].expr);}
#line 2783 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 905 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                
                                (yyval.expr) = new exprr();
                                if(!(yyvsp[-3].expr)->isBool){
                                    if((yyvsp[-3].expr)->loc->type_->name_=="int"){
                                        convInttoBool((yyvsp[-3].expr));
                                    }else throw typeError();
                                }
                                if(!(yyvsp[0].expr)->isBool){
                                    if((yyvsp[0].expr)->loc->type_->name_=="int"){
                                        convInttoBool((yyvsp[0].expr));
                                    }else throw typeError();
                                }
                                backpatch((yyvsp[-3].expr)->falseList, (yyvsp[-1].atrM)->instr );
                                (yyval.expr)->trueList = merge((yyvsp[-3].expr)->trueList, (yyvsp[0].expr)->trueList);
                                (yyval.expr)->falseList = (yyvsp[0].expr)->falseList;
                                 (yyval.expr)->Type = (yyvsp[-3].expr)->Type;
                                 (yyval.expr)->isBool = 1;
                            }
#line 2807 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 927 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
    
    (yyval.expr) = (yyvsp[0].expr);}
#line 2815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 930 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                (yyval.expr) = new exprr();
                                //Convert condition to bool
                                if(!(yyvsp[-8].expr)->isBool){
                                    if((yyvsp[-8].expr)->loc->type_->name_=="int"){
                                        convInttoBool((yyvsp[-8].expr));
                                    }else throw typeError();
                                }
                                (yyval.expr)->loc = gentemp((yyvsp[-4].expr)->Type);
                                emit("=",(yyval.expr)->loc->name_,(yyvsp[0].expr)->loc->name_);
                                list<int> L= makelist(nextinstr());
                                emit("goto","","","");
                                backpatch((yyvsp[-3].stmt)->nextList,nextinstr());
                                emit("=",(yyval.expr)->loc->name_,(yyvsp[-4].expr)->loc->name_);
                                L = merge(L,makelist(nextinstr()));
                                emit("goto","","","");
                                backpatch((yyvsp[-7].stmt)->nextList,nextinstr());
                                //convInttoBool($$->loc);
                                backpatch((yyvsp[-8].expr)->trueList,(yyvsp[-5].atrM)->instr);
                                backpatch((yyvsp[-8].expr)->falseList,(yyvsp[-1].atrM)->instr);
                                backpatch(L,nextinstr());
                                 (yyval.expr)->Type = (yyvsp[-8].expr)->Type;

                            }
#line 2844 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 956 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                
                                (yyval.expr) = (yyvsp[0].expr);//Same
                            }
#line 2853 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 960 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                
                                if((yyvsp[-2].arr)->isBool){
                                    throw typeError();
                                }
                                
                                if(!typecheck2((yyvsp[0].expr),(yyvsp[-2].arr)->loc->type_))  throw typeError();
                                (yyval.expr) = (yyvsp[0].expr);//fall through of assignment
                                
                                string tpName = (yyvsp[-2].arr)->array->type_->name_;
                                
                                if(tpName.size()>5&&tpName.substr(0,5)=="array"){
                                    
                                    emit("[]=",(yyvsp[-2].arr)->array->name_,(yyvsp[-2].arr)->loc->name_,(yyvsp[0].expr)->loc->name_);//LHS[ind] = RHS
                                }else if(tpName.size()>3&&tpName.substr(0,3)=="ptr"){
                                    
                                    emit("*=",(yyvsp[-2].arr)->array->name_,"",(yyvsp[0].expr)->loc->name_);//*(LHS) = RHS
                                }else{
                                    emit("=",(yyvsp[-2].arr)->loc->name_,(yyvsp[0].expr)->loc->name_);// LHS = RHS
                                }

                            }
#line 2880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 984 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { (yyval.Punctuator)  = "=";}
#line 2886 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 985 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = "*=";}
#line 2892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 986 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = "/=";}
#line 2898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 987 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = "%=";}
#line 2904 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 988 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = "+=";}
#line 2910 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 989 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = "-=";}
#line 2916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 990 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = "<<=";}
#line 2922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 991 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = ">>=";}
#line 2928 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 992 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = "&=";}
#line 2934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 993 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = "|=";;}
#line 2940 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 994 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.Punctuator) = "^=";}
#line 2946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 997 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
    
                            
    (yyval.expr) = (yyvsp[0].expr);}
#line 2955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1001 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {

                            }
#line 2963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1007 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {

                                }
#line 2971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1014 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                if(funcParam!=NULL) {
                    
                    funcParam = NULL;
                    
                    ST = globalST;  /// 
                }
                curr = NULL;
    
    }
#line 2986 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1025 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
    
    }
#line 2994 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1028 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3000 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1031 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
    
    }
#line 3008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1034 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                
                                }
#line 3016 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1037 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3022 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1038 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1040 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
    
    }
#line 3036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1043 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                               
                               }
#line 3044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1048 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
     
     }
#line 3052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1051 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3058 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1054 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                
                            (yyval.decl) = (yyvsp[0].decl);}
#line 3066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1057 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                                //
                                
                                
                                if(!typecheck2((yyvsp[0].decl),(yyvsp[-2].decl)->loc->type_)) throw typeError();
		                        emit("=", (yyvsp[-2].decl)->loc->name_, (yyvsp[0].decl)->loc->name_);
                                if((yyvsp[0].decl)->loc->initVal_!="") (yyvsp[-2].decl)->loc->initVal_=(yyvsp[0].decl)->loc->initVal_;        
                                (yyval.decl) = (yyvsp[-2].decl);
                                
                            }
#line 3081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1069 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1070 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1075 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.storage_class_spec__) = "extern";}
#line 3099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1076 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.storage_class_spec__) = "static";}
#line 3105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1077 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.storage_class_spec__) = "auto";}
#line 3111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1078 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.storage_class_spec__) = "register";}
#line 3117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1081 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                    (yyval.type_specifier__) = "void";
                    lastType = new VOID();
                }
#line 3126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1085 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.type_specifier__) = "char";
                    lastType = new CHAR();
               }
#line 3134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1088 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.type_specifier__) = "short";}
#line 3140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1089 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                    (yyval.type_specifier__) = new char[20];
                    (yyval.type_specifier__) = "int";
                    
                    lastType = new INT();
                    
               }
#line 3152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1096 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.type_specifier__) = "long";}
#line 3158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1097 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.type_specifier__) = "float";
                    lastType = new FLOAT();
                }
#line 3166 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1100 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.type_specifier__) = "double";}
#line 3172 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1101 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.type_specifier__) = "signed";}
#line 3178 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1102 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.type_specifier__) = "unsigned";}
#line 3184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1103 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.type_specifier__) = "bool";}
#line 3190 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1104 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.type_specifier__) = "complex";}
#line 3196 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1105 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.type_specifier__) = "imaginary";}
#line 3202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1106 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1110 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3214 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1111 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3220 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1114 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3226 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1115 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3232 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1118 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3238 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1119 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3244 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1120 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1123 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.smPtr) = (yyvsp[0].smPtr); }
#line 3256 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1124 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.smPtr) = new SymbolTableRow();}
#line 3262 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1127 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3268 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1128 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1131 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3280 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1132 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3286 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1135 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3292 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1136 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1137 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3304 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1140 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3310 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1143 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                
                //
                
                (yyval.decl) = new declaratorAttr();
                //
                (yyval.decl)->loc = (yyvsp[0].decl)->loc;
                (yyval.decl)->loc->type_ = (yyval.decl)->type = merge((yyvsp[-1].symType),(yyvsp[0].decl)->loc->type_);//if dollar1 is  null the merge func will mange accordingly
                
                (yyval.decl)->width = (yyval.decl)->loc->size_ = (yyval.decl)->type->width;
                //
            }
#line 3327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1157 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { 
            
            (yyval.symType) = (yyvsp[0].symType);}
#line 3335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1160 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { 
                (yyval.symType) = NULL;}
#line 3342 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1164 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {         
                        funcParam = NULL;             
                        (yyval.decl) = new declaratorAttr();
                        SymbolTableRow* temp = (yyvsp[0].smPtr);
                        ST->update(temp,lastType,ST->offset);
                        ST->offset = ST->offset + lastType->width ;
                        (yyval.decl)->loc = (yyvsp[0].smPtr);                        
                        (yyval.decl)->type = (yyval.decl)->loc->type_ = lastType;
                        (yyval.decl)->loc->size_ = (yyval.decl)->width = (yyval.decl)->type->width;
                        
                        curr = (yyval.decl)->loc;
                    }
#line 3359 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1176 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.decl) = (yyvsp[-1].decl);}
#line 3365 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1177 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                      
                      int sz;
                      stringstream ss((yyvsp[-1].expr)->loc->initVal_);
                      ss>>sz;
                      (yyvsp[-4].decl)->loc->type_ = mergeType((yyvsp[-4].decl)->loc->type_,sz);
                      //Update the symbol
                      ST->offset-=(yyvsp[-4].decl)->loc->size_;
                      (yyvsp[-4].decl)->loc->size_ =(yyvsp[-4].decl)->loc->type_->width;
                      ST->offset+=(yyvsp[-4].decl)->loc->size_;
                      
                      (yyval.decl) = (yyvsp[-4].decl);
                      (yyval.decl)->type = (yyvsp[-4].decl)->loc->type_;
                      (yyval.decl)->width = (yyvsp[-4].decl)->loc->type_->width;
                     

                  }
#line 3387 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1194 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                      

                  }
#line 3396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1198 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {

                  }
#line 3404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1201 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1202 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                      if(labels.find((yyvsp[-4].decl)->loc->name_)!=labels.end())  throw Error("Too many lables");
                      labels[(yyvsp[-4].decl)->loc->name_] = nextinstr();
                      emit("label","","",(yyvsp[-4].decl)->loc->name_);
                      
                      (yyvsp[-4].decl)->loc->nestedTable_ = ST; 
                      funcParam = ST;                        
                        //ST = globalST;  
                        (yyval.decl)->loc  = (yyvsp[-4].decl)->loc; //pointer to the function symbol
                        //$$->loc->nestedTable_ = $$->ST = temp;  //nested block  
                        st_types_ *temp_ = (yyval.decl)->loc->type_;                                                    	 	
                        (yyval.decl)->loc->type_ = new FUNCTION();
                        (yyval.decl)->loc->size_ = 0;
                        if(temp_->name_!="void") (yyval.decl)->loc->type_->retType = temp_;
                        else (yyval.decl)->loc->type_->retType = NULL;


                        //curr = NULL;  
                      
                  }
#line 3435 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1222 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        
                        labels[(yyvsp[-4].decl)->loc->name_] = nextinstr();
                        emit("label","","",(yyvsp[-4].decl)->loc->name_);
                        (yyvsp[-4].decl)->loc->nestedTable_ = ST;  
                        funcParam = ST;                       
                        //ST = globalST;  
                        (yyval.decl)->loc  = (yyvsp[-4].decl)->loc; //pointer to the function symbol
                        //$$->loc->nestedTable_ = $$->ST = temp;  //nested block  
                        
                        st_types_ *temp_ = (yyval.decl)->loc->type_;                                                    	 	
                        (yyval.decl)->loc->type_ = new FUNCTION();
                        (yyval.decl)->loc->size_ = 0;
                        if(temp_->name_!="void") (yyval.decl)->loc->type_->retType = temp_;
                        else (yyval.decl)->loc->type_->retType = NULL;
                       //curr = NULL;  
                      
                      }
#line 3458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1242 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
            
            (yyval.symType) = new PTR();   //NOW BASE Type is null it will be set later
        }
#line 3467 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1246 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {

            
            (yyval.symType) = new PTR(0,(yyvsp[0].symType));
            
        }
#line 3478 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1254 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3484 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1255 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1258 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);}
#line 3496 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1259 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.expr) = new exprr();}
#line 3502 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1262 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3508 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1263 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3514 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1266 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3520 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1267 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3526 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1270 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3532 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1271 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3538 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1276 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3544 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1277 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3550 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1280 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3556 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1281 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3562 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1283 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1286 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                (yyval.decl) = new declaratorAttr();
                
                if((yyvsp[0].expr)->isBool){
                    convBooltoInt((yyvsp[0].expr));
                }
                (yyval.decl)->loc = (yyvsp[0].expr)->loc;
                (yyval.decl)->type = (yyvsp[0].expr)->loc->type_;
                (yyval.decl)->width = (yyvsp[0].expr)->loc->type_->width;
                
            }
#line 3584 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1297 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3590 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1298 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1301 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1302 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1305 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1306 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1309 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1312 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1313 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1316 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1317 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1323 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
    
}
#line 3658 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1326 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
               
              (yyval.stmt) = (yyvsp[0].stmt);
          }
#line 3667 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1330 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
              
              (yyval.stmt) = (yyvsp[0].stmt);
          }
#line 3676 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1334 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
              
              (yyval.stmt) = (yyvsp[0].stmt);
          }
#line 3685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1338 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { 
              
              
              (yyval.stmt) = (yyvsp[0].stmt);}
#line 3694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1342 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { 
              
              (yyval.stmt) = (yyvsp[0].stmt);}
#line 3702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1347 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.stmt) = (yyvsp[0].stmt);}
#line 3708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1348 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1349 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { (yyval.stmt) = (yyvsp[0].stmt);}
#line 3720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 1352 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        (yyval.stmt) = (yyvsp[-1].stmt);
                        (yyval.stmt)->ST = ST;                        
                        if(ST->par!=NULL) ST = ST->par;//Go to parent symbol table
                        
                    }
#line 3731 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1360 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        
                        (yyval.stmt) = (yyvsp[0].stmt);
                    }
#line 3740 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1364 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        
                        (yyval.stmt) = new statementAttr();}
#line 3748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1369 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                (yyval.stmt) = (yyvsp[0].stmt);}
#line 3755 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1371 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                    
                    
                    
                    backpatch((yyvsp[-2].stmt)->nextList,(yyvsp[-1].atrM)->instr);
                    (yyval.stmt) = (yyvsp[0].stmt);
                    
                }
#line 3768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1381 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
            (yyval.stmt) = new statementAttr();

            }
#line 3777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1385 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
               
               (yyval.stmt) = (yyvsp[0].stmt);
               
               }
#line 3787 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1392 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            (yyval.stmt) = new statementAttr();                            
                        }
#line 3795 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1397 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.expr) = (yyvsp[0].expr);
                    
                    
}
#line 3804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 1401 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {(yyval.expr) = new exprr();
                    if(isConditional){
                        (yyval.expr)->loc = gentemp(new INT());
                        (yyval.expr)->Type = (yyval.expr)->loc->type_;
                        emit("=",(yyval.expr)->loc->name_,"1");
                        convInttoBool((yyval.expr));
                    }
               }
#line 3817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 1411 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            if( (!(yyvsp[-4].expr)->isBool)) {
                                
                                if(!typecheck2((yyvsp[-4].expr),new INT()))   throw typeError();
                                convInttoBool((yyvsp[-4].expr));
                            }
                        (yyval.stmt) = new statementAttr();
                        backpatch((yyvsp[-4].expr)->trueList,(yyvsp[-1].atrM)->instr);
                        (yyval.stmt)->nextList = merge((yyvsp[-4].expr)->falseList,(yyvsp[0].stmt)->nextList);
                        if(ST->par!=NULL) ST = ST->par;
                    }
#line 3833 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 1422 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        if( (!(yyvsp[-8].expr)->isBool)) {
                                if(!typecheck2((yyvsp[-8].expr),new INT()))   throw typeError();
                                convInttoBool((yyvsp[-8].expr));
                            }
                        (yyval.stmt) = new statementAttr();
                        backpatch((yyvsp[-8].expr)->trueList,(yyvsp[-5].atrM)->instr);
                        backpatch((yyvsp[-8].expr)->falseList,(yyvsp[-1].atrM)->instr);
                        list<int> temp = merge((yyvsp[-4].stmt)->nextList,(yyvsp[-3].stmt)->nextList);
                        (yyval.stmt)->nextList = merge(temp,(yyvsp[0].stmt)->nextList);
                        if(ST->par!=NULL) ST = ST->par;

                    }
#line 3851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 1435 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 1438 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        if( (!(yyvsp[-4].expr)->isBool)) {
                                if(!typecheck2((yyvsp[-4].expr),new INT()))   throw typeError();
                                convInttoBool((yyvsp[-4].expr));
                            }
                        (yyval.stmt) = new statementAttr();

                        
                        backpatch((yyvsp[0].stmt)->nextList,(yyvsp[-8].atrM)->instr);
                        backpatch((yyvsp[-4].expr)->trueList,(yyvsp[-1].atrM)->instr);
                        (yyval.stmt)->nextList = (yyvsp[-4].expr)->falseList;
                        emit("goto","","",to_string((yyvsp[-8].atrM)->instr));
                        if(ST->par!=NULL) ST = ST->par;
                    }
#line 3876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 1452 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        if( (!(yyvsp[-3].expr)->isBool)) {
                                if(!typecheck2((yyvsp[-3].expr),new INT()))   throw typeError();
                                convInttoBool((yyvsp[-3].expr));
                        }
                        (yyval.stmt) = new statementAttr();
                        backpatch((yyvsp[-3].expr)->trueList,(yyvsp[-10].atrM)->instr);
                        backpatch((yyvsp[-8].stmt)->nextList,(yyvsp[-7].atrM)->instr);
                        (yyval.stmt)->nextList = (yyvsp[-3].expr)->falseList;
                        if(ST->par!=NULL) ST = ST->par;
                    }
#line 3892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 1463 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        if( (!(yyvsp[-8].expr)->isBool)) {
                                if(!typecheck2((yyvsp[-8].expr),new INT()))   throw typeError();
                                convInttoBool((yyvsp[-8].expr));
                            }
                        (yyval.stmt) = new statementAttr();
                        backpatch((yyvsp[-8].expr)->trueList,(yyvsp[-1].atrM)->instr);
                        backpatch((yyvsp[-3].stmt)->nextList,(yyvsp[-10].atrM)->instr);
                        backpatch((yyvsp[0].stmt)->nextList,(yyvsp[-5].atrM)->instr);
                        emit("goto","","",to_string((yyvsp[-5].atrM)->instr));
                        (yyval.stmt)->nextList = (yyvsp[-8].expr)->falseList;
                        
                        if(ST->par!=NULL) ST = ST->par;
                    }
#line 3911 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 1477 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                        if( (!(yyvsp[-8].expr)->isBool)) {
                                if(!typecheck2((yyvsp[-8].expr),new INT()))   throw typeError();
                                convInttoBool((yyvsp[-8].expr));
                            }
                        (yyval.stmt) = new statementAttr();
                        backpatch((yyvsp[-8].expr)->trueList,(yyvsp[-1].atrM)->instr);
                        backpatch((yyvsp[-3].stmt)->nextList,(yyvsp[-10].atrM)->instr);
                        backpatch((yyvsp[0].stmt)->nextList,(yyvsp[-5].atrM)->instr);
                        emit("goto","","",to_string((yyvsp[-5].atrM)->instr));
                        (yyval.stmt)->nextList = (yyvsp[-8].expr)->falseList;
                        
                        if(ST->par!=NULL) ST = ST->par;
                    }
#line 3930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 1493 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    { (yyval.stmt) = new statementAttr;
            }
#line 3937 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 1495 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                   (yyval.stmt) = new statementAttr();
                   //
               }
#line 3946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 1499 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                   (yyval.stmt) = new statementAttr;
               }
#line 3954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 1502 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                   (yyval.stmt) = new statementAttr;
                   emit("return","","",(yyvsp[-1].expr)->loc->name_);
               }
#line 3963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 1506 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                   (yyval.stmt) = new statementAttr;
                   emit("return","","","");}
#line 3971 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 1512 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 1513 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 1516 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 1517 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 3995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 1520 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 4001 "y.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 1521 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 4007 "y.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 1524 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {
                            
                            (yyval.block) = new blockAttr();
                            
                            //SymbolTable* temp = ST;
                            
                            ST = globalST; 
                            (yyval.block)->loc  = (yyvsp[-2].decl)->loc; //pointer to the function symbol
                            //$$->loc->nestedTable_ = $$->ST = temp;  //nested block  
                            //st_types_ *temp_ = $$->loc->type_;                                                    	 	
                            //$$->loc->type_ = new FUNCTION();
                            //$$->loc->size_ = 0;
                            //$4->ST->par = $2->loc->nestedTable_;  //
                            //$2->loc->nestedTable_->par = globalST; // 
                            //if(temp_->name_!="void") $$->loc->type_->retType = temp_;
                            //else $$->loc->type_->retType = NULL;

                            curr = NULL;  
                            funcParam = NULL; 
                               
                        }
#line 4033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 1547 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 4039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 1548 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {}
#line 4045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 1552 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1646  */
    {//8469f56
    
    /*
    if(curr==NULL||curr->nestedTable_ == NULL){
        
        $$ = new blockAttr();
        $$->ST = createSymTab();
        if(funcParam!=NULL)  $$->ST->par = funcParam;
        else $$->ST->par = ST;
        $$->ST->n = 0;
        ST = $$->ST;//update current symbol table
    }else{
        
        $$ = new blockAttr();
        $$->ST = curr->nestedTable_; 
        if(funcParam!=NULL) $$->ST->par = funcParam;
        ST = curr->nestedTable_;
    }*/
    (yyval.block) = new blockAttr();
    (yyval.block)->ST = createSymTab();        
    (yyval.block)->ST->par = ST;
    (yyval.block)->ST->n = 0;
    ST = (yyval.block)->ST;//update current symbol table
    
    
}
#line 4076 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4080 "y.tab.c" /* yacc.c:1646  */
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
#line 1579 "assgn6_19CS10071_19CS10072.y" /* yacc.c:1906  */


void yyerror(char *y){
    //lineNo+1 gives current line number
}
