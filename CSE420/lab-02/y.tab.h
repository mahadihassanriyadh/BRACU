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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    IF = 258,                      /* IF  */
    ELSE = 259,                    /* ELSE  */
    SWITCH = 260,                  /* SWITCH  */
    CASE = 261,                    /* CASE  */
    DEFAULT = 262,                 /* DEFAULT  */
    FOR = 263,                     /* FOR  */
    WHILE = 264,                   /* WHILE  */
    DO = 265,                      /* DO  */
    BREAK = 266,                   /* BREAK  */
    CONTINUE = 267,                /* CONTINUE  */
    RETURN = 268,                  /* RETURN  */
    PRINTLN = 269,                 /* PRINTLN  */
    NOT = 270,                     /* NOT  */
    LPAREN = 271,                  /* LPAREN  */
    RPAREN = 272,                  /* RPAREN  */
    LCURL = 273,                   /* LCURL  */
    RCURL = 274,                   /* RCURL  */
    LTHIRD = 275,                  /* LTHIRD  */
    RTHIRD = 276,                  /* RTHIRD  */
    INT = 277,                     /* INT  */
    FLOAT = 278,                   /* FLOAT  */
    CHAR = 279,                    /* CHAR  */
    VOID = 280,                    /* VOID  */
    DOUBLE = 281,                  /* DOUBLE  */
    SEMICOLON = 282,               /* SEMICOLON  */
    COMMA = 283,                   /* COMMA  */
    ID = 284,                      /* ID  */
    CONST_INT = 285,               /* CONST_INT  */
    CONST_FLOAT = 286,             /* CONST_FLOAT  */
    ADDOP = 287,                   /* ADDOP  */
    MULOP = 288,                   /* MULOP  */
    INCOP = 289,                   /* INCOP  */
    DECOP = 290,                   /* DECOP  */
    RELOP = 291,                   /* RELOP  */
    ASSIGNOP = 292,                /* ASSIGNOP  */
    LOGICOP = 293                  /* LOGICOP  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define IF 258
#define ELSE 259
#define SWITCH 260
#define CASE 261
#define DEFAULT 262
#define FOR 263
#define WHILE 264
#define DO 265
#define BREAK 266
#define CONTINUE 267
#define RETURN 268
#define PRINTLN 269
#define NOT 270
#define LPAREN 271
#define RPAREN 272
#define LCURL 273
#define RCURL 274
#define LTHIRD 275
#define RTHIRD 276
#define INT 277
#define FLOAT 278
#define CHAR 279
#define VOID 280
#define DOUBLE 281
#define SEMICOLON 282
#define COMMA 283
#define ID 284
#define CONST_INT 285
#define CONST_FLOAT 286
#define ADDOP 287
#define MULOP 288
#define INCOP 289
#define DECOP 290
#define RELOP 291
#define ASSIGNOP 292
#define LOGICOP 293

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
