
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

/* Line 1676 of yacc.c  */
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
 



/* Line 1676 of yacc.c  */
#line 123 "syntaxique.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


