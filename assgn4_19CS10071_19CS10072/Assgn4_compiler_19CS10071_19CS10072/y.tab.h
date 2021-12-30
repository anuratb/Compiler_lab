/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 11 "assgn4_19CS10071_19CS10072.y" /* yacc.c:1909  */

    int Int;
    char* Punctuator;
    char* Id;
    float Float;
    double Double;
    char* String;
    char Char;

#line 254 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
