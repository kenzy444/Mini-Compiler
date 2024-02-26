%{
#include<string.h>
#include"syntaxique.tab.h"
#include"ts.h"
extern int nb_ligne,c,yylex();
extern YYSTYPE yylval;
extern void yyerror( char *s);
char code[20]="IDF";

%}
Entier_Signe \([+-]([1-9][0-9]*)\)
Entier_NSigne 0|[1-9][0-9]*
float_NSigne {Entier_NSigne}(".")0*{Entier_NSigne}
float_Signe \([+-]({float_NSigne})\)
lettre [a-zA-Z]
chiffre [0-9]
IDF [A-Z]({lettre}|{chiffre})*
commentaire #(.|\n)*!
string {lettre}({lettre})+ 

%%

"IDENTIFICATION DIVISION." {rechercher(yytext,"Mot cle",0,0,1);printf("IDENTIFICATION DIVISION. reconnu\n");c=c+yyleng;return mc_idenD;}
"PROGRAM-ID." {rechercher(yytext,"Mot cle",0,0,1);printf("PROGRAM-ID. reconnue \n" );c=c+yyleng;return mc_progID;}
"DATA DIVISION." {rechercher(yytext,"Mot cle",0,0,1);printf("DATA DIVISION. reconnue \n" );c=c+yyleng;return mc_dataD;}
"WORKING-STORAGE SECTION." {rechercher(yytext,"Mot cle",0,0,1);printf("WORKING-STORAGE SECTION. reconnue \n" );c=c+yyleng;return mc_workS;}
"PROCEDURE DIVISION."  {rechercher(yytext,"Mot cle",0,0,1);printf("PROCEDURE DIVISION. reconnue \n" );c=c+yyleng;return mc_procD;}
"STOP RUN" {rechercher(yytext,"Mot cle",0,0,1);printf("STOP RUN reconnue  \n");c=c+yyleng;return mc_stopR;}
"INTEGER" {yylval.str=strdup(yytext);rechercher(yytext,"Mot cle",0,0,1);printf("INTEGER reconnue \n");c=c+yyleng;return mc_int;}
"FLOAT" {yylval.str=strdup(yytext);rechercher(yytext,"Mot cle",0,0,1);printf("FLOAT reconnue \n");c=c+yyleng;return mc_float;}
"CHAR" {yylval.str=strdup(yytext);rechercher(yytext,"Mot cle",0,0,1);printf("CHAR reconnue \n");c=c+yyleng;return mc_char;}
"STRING" {yylval.str=strdup(yytext);rechercher(yytext,"Mot cle",0,0,1);printf("STRING reconnue \n");c=c+yyleng;return mc_str;}
"CONST" {rechercher(yytext,"Mot cle",0,0,1);strcpy(code,"Constante");printf("CONST reconnue  \n");c=c+yyleng;return mc_cnst;}
"ACCEPT" {rechercher(yytext,"Mot cle",0,0,1);printf("ACCEPT reconnue  \n");c=c+yyleng;return mc_accpt;}
"DISPLAY" {rechercher(yytext,"Mot cle",0,0,1);printf("DISPLAY reconnue  \n");c=c+yyleng;return mc_display;}
"IF" {rechercher(yytext,"Mot cle",0,0,1);printf("IF reconnue  \n");c=c+yyleng;return mc_if;}
"ELSE" {rechercher(yytext,"Mot cle",0,0,1);printf("ELSE reconnue \n");c=c+yyleng;return mc_else;}
"END" {rechercher(yytext,"Mot cle",0,0,1);printf("END. reconnue  \n");c=c+yyleng;return mc_end;}
"MOVE" {rechercher(yytext,"Mot cle",0,0,1);printf("MOVE reconnue \n");c=c+yyleng;return mc_move;}
"TO" {rechercher(yytext,"Mot cle",0,0,1);printf("TO reconnue  \n");c=c+yyleng;return mc_to;}
"OR" {rechercher(yytext,"Mot cle",0,0,1);printf("OR reconnue \n");c=c+yyleng;return mc_or;}
"AND" {rechercher(yytext,"Mot cle",0,0,1);printf("AND reconnue \n");c=c+yyleng;return mc_and;}
"LINE" {rechercher(yytext,"Mot cle",0,0,1);printf("LINE reconnue \n");c=c+yyleng;return mc_line;}
"SIZE" {rechercher(yytext,"Mot cle",0,0,1);printf("SIZE reconnue \n");c=c+yyleng;return mc_size;}
"NOT" {rechercher(yytext,"Mot cle",0,0,1);printf("SIZE reconnue \n");c=c+yyleng;return mc_not;}
"="  {rechercher(yytext,"Separateur",0,0,2);printf("affec reconnue \n");c=c+yyleng;return affec;}
"("  {rechercher(yytext,"Separateur",0,0,2);printf("( reconnue \n");c=c+yyleng;return PO;}
")"  {rechercher(yytext,"Separateur",0,0,2);printf(") reconnue \n");c=c+yyleng;return PF;}
"*"  {rechercher(yytext,"Separateur",0,0,2);printf("* reconnue \n");c=c+yyleng;return mult;}
"-"  {rechercher(yytext,"Separateur",0,0,2);printf("moins reconnue \n");c=c+yyleng;return moins;}
"+"  {rechercher(yytext,"Separateur",0,0,2);printf("plus reconnue \n");c=c+yyleng;return plus;}
"/"  {rechercher(yytext,"Separateur",0,0,2);printf("div reconnue \n");c=c+yyleng;return division;}
","  {rechercher(yytext,"Separateur",0,0,2);printf("vrg reconnue \n");c=c+yyleng;return vrg;}
"."  {rechercher(yytext,"Separateur",0,0,2);printf("point reconnue \n");c=c+yyleng;return point;}
"'"  {rechercher(yytext,"Separateur",0,0,2);printf("apostrophe reconnue \n");c=c+yyleng;return apst;}
"\""  {rechercher(yytext,"Separateur",0,0,2);printf("guillemet reconnue \n");c=c+yyleng;return guil;}
":"  {rechercher(yytext,"Separateur",0,0,2);printf("Deux-points reconnue \n");c=c+yyleng;return Dpoints;}
"@"  {rechercher(yytext,"Separateur",0,0,2);printf("adresse reconnue \n");c=c+yyleng;return adr;}
"$"  {rechercher(yytext,"Separateur",0,0,2);printf("dollar reconnue \n");c=c+yyleng;return dollar;}
"%"  {rechercher(yytext,"Separateur",0,0,2);printf("pour Cent reconnue \n");c=c+yyleng;return prcent;}
"#"  {rechercher(yytext,"Separateur",0,0,2);printf("hashtag reconnue \n");c=c+yyleng;return hashtag;}
"&"  {rechercher(yytext,"Separateur",0,0,2);printf("et commercial reconnue \n");c=c+yyleng;return etcom;}
"|"  {rechercher(yytext,"Separateur",0,0,2);printf("bare reconnue \n");c=c+yyleng;return bare;}
"G"  {rechercher(yytext,"Separateur",0,0,2);printf("sup reconnue \n");c=c+yyleng;return sup;}
"L"  {rechercher(yytext,"Separateur",0,0,2);printf("inf reconnue \n");c=c+yyleng;return inf;}
"GE"  {rechercher(yytext,"Separateur",0,0,2);printf("supeg reconnue \n");c=c+yyleng;return supeg;}
"LE"  {rechercher(yytext,"Separateur",0,0,2);printf("infeg reconnue \n");c=c+yyleng;return infeg;}
"EQ"  {rechercher(yytext,"Separateur",0,0,2);printf("egale reconnue \n");c=c+yyleng;return egale;}
"DI"  {rechercher(yytext,"Separateur",0,0,2);printf("different reconnue \n");c=c+yyleng;return difrnt;}
{IDF} {if (yyleng<=8) {yylval.str=strdup(yytext);rechercher(yytext,code,"","",0);printf("IDF reconnue est %s\n",yytext);} else printf("Erreur idf trop long\n");c=c+yyleng;strcpy(code,"IDF");return idf;}
{Entier_NSigne} {if ((atoi(yytext)> -32768)&&(atoi(yytext)<32767)){yylval.entier=atoi(yytext);rechercher(yytext,"Const Entiere","INTEGER",yytext,0);printf("INTEGER reconnue est %s\n",yytext);} else {printf("Entier trop grand\n");}c=c+yyleng;return intNS;}
{Entier_Signe} { char sch[100];int i,j=0,n=(yyleng-2);for(i=1;i<=n;i++){sch[j]=yytext[i];j++;} if ((atoi(sch)> -32768)&&(atoi(sch)<32767)){yylval.entier=atoi(sch);rechercher(yytext,"Const Entiere","INTEGER",sch,0);printf("INTEGER reconnue est %s\n",yytext);} else printf("Entier trop grand\n");c=c+yyleng;return intS; }
{commentaire} { printf("Commentaire reconnue\n");int i;for(i=0;i<yyleng;i++){if(yytext[i]=='\n'){c=1;nb_ligne++;} else c++;} }
{lettre} {yylval.caractere=yytext[0]; printf("caractere reconnue est %s\n",yytext);c=c+yyleng;return car;}
{string} {yylval.str=strdup(yytext); printf("chaine reconnue est %s\n",yytext);c=c+yyleng;return str;}
{float_NSigne} {yylval.reel=atof(yytext);rechercher(yytext,"Const Reel","FLOAT",yytext,0);printf("reel reconnue est %s\n",yytext);c=c+yyleng;return reelNS;}
{float_Signe} {char sch[100];int i,j=0,n=(yyleng-2);for(i=1;i<=n;i++){sch[j]=yytext[i];j++;}yylval.reel=atof(sch);rechercher(yytext,"Const Reel","FLOAT",sch,0);printf("reelS reconnue est %s\n",yytext);c=c+yyleng;return reelS;}

" " {c++;}
[\t] {c=c+8;}
\n    {nb_ligne++;c=1;}
.  {printf("Erreur lexical a la ligne %d et la colonne %d lentite %s \n",nb_ligne,c,yytext); c=c+yyleng;exit(1);};

