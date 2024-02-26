%{ 
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"header.h"
   int nb_ligne=1, c=1;
   int yylex(void);
   void yyerror(char *s);
 char tabvar[50][100];
 int k=0,ty=0,x;char tmp[100] ;

%}
%union {
  int entier;
  char *str;
  float reel;
  char caractere;
  int type; 
struct s {
float val;
int type;
}s;     
 
}

%token mc_idenD mc_progID mc_dataD mc_workS mc_procD mc_stopR mc_int mc_float mc_char mc_str mc_cnst mc_accpt mc_display mc_if mc_else mc_end mc_move mc_to mc_or mc_and mc_line mc_size mc_not affec PO PF mult moins plus bare sup inf supeg infeg egale difrnt <str>idf <entier>intNS <entier>intS <caractere>car <str>str <reel>reelNS <reel>reelS division vrg point apst guil Dpoints adr dollar prcent hashtag etcom

%type <s> Expression
%type <s> F
%type <s> T
%type <s> Val
%type <s> ID


%start S
%%
S: mc_idenD mc_progID idf mc_dataD  mc_workS DEC mc_procD INST mc_stopR {printf("Programme Syntaxiquement Correct\n"); YYACCEPT;}
;
DEC:Dec_var point
|Dec_const point
|Dec_tab point
|Dec_var point DEC
|Dec_const point DEC
|Dec_tab point DEC
;
Dec_var : ListIDF TYPE {if (doubleDeclaration(tabvar,k,ty)==-1){printf("Erreur Semantique :double Declaration \n");exit(1);} k=0;ty=0;}
|ListIDF 
;
Dec_const : mc_cnst idf affec ValeurCnst { strcpy(tabvar[k],$2);k++;if (doubleDeclaration(tabvar,k,ty)==-1){printf("Erreur Semantique :double Declaration \n");exit(1);}else{insererVALString($2,tmp);}k=0;ty=0;}
| mc_cnst ListIDF TYPE {if (doubleDeclaration(tabvar,k,ty)==-1){printf("Erreur Semantique :double Declaration \n");exit(1);} k=0;ty=0;}
;
ValeurCnst:intNS{ty=1; sprintf(tmp,"%.2d",$1);}
| intS{ty=1; sprintf(tmp,"%.2d",$1);}
|reelNS{ty=2; sprintf(tmp,"%.2f",$1);}
|reelS{ty=2; sprintf(tmp,"%.2f",$1);}
|apst car apst {ty=3;sprintf(tmp,"%.2d",$2);}
|guil str guil{ty=4;strcpy(tmp,$2);}
;
Dec_tab :idf mc_line intNS vrg mc_size intNS TYPE
;
TYPE: mc_int {ty=1;}
| mc_float{ty=2;}
 | mc_char {ty=3;}
| mc_str{ty=4;}
;
ListIDF: idf bare ListIDF { strcpy(tabvar[k],$1);k++;}
       | idf { strcpy(tabvar[k],$1);k++;}
;
INST:Affect point
|Scan
|Print
|Condition
|Boucle
|Affect point INST
|Scan INST
|Print INST
|Condition INST
|Boucle INST
;
Affect: idf affec Expression{ 
	if(recherche($1)==0) 
		{ printf("Erreur semantiique ligne %d colonne %d : identifiant non déclaré \n",nb_ligne,c); exit(1);} 
	else { if(recherche($1)==1)
		{printf("Erreur semantiique ligne %d colonne %d: modification d'une constante  \n",nb_ligne,c); exit(1);}
		else 
		{
		if(getType($1)!=$3.type){ if ($3.type==1){printf("Erreur sémantique ligne %d colonne %d : Incompatibilité des types ( %s and INTERGER )\n",nb_ligne,c,$1);exit(1);}else{printf("Erreur sémantique ligne %d colonne %d : Incompatibilité des types ( %s and FLOAT )\n",nb_ligne,c,$1);exit(1);} }
		else{  sprintf(tmp,"%.2f",$3.val);insererVALString($1,tmp);}
		}
	      
	     }
			   }  
|idf affec  apst car apst { 
	if(recherche($1)==0) 
		{ printf("Erreur semantiique ligne %d colonne %d : identifiant non déclaré \n",nb_ligne,c); exit(1);} 
	else { if(recherche($1)==1)
		{ printf("Erreur semantiique ligne %d colonne %d: modification d'une constante  \n",nb_ligne,c); exit(1);}
		else {
			//verification de la compatibilité des types 
		if(!VerifType($1,"CHAR")){ printf("Erreur sémantique ligne %d colonne %d : Incompatibilité des types ( %s and CHAR )\n",nb_ligne,c,$1); exit(1); } else
{
insererVALChar($1,$4);
}
		     } 
	      }
}
| idf affec guil str guil {
		if(recherche($1)==0) 
		{ printf("Erreur semantiique ligne %d colonne %d: identifiant non déclaré \n",nb_ligne,c); exit(1);} 
	else { if(recherche($1)==1)
		 {printf("Erreur semantiique ligne %d colonne %d: modification d'une constante  \n",nb_ligne,c);exit(1);}
		else
		{
		//verification de la compatibilité des types
		if(!VerifType($1,"STRING")){ printf("Erreur sémantique ligne %d colonne %d: Incompatibilité des types ( %s and STRING )\n",nb_ligne,c,$1); exit(1); } else
{

insererVALString($1,$4);
}
		
	      }
}
}
;
Expression: Expression plus T { if ($1.type!=$3.type) { printf("Erreur sémantique ligne %d colonne %d : incompatibilité des types\n",nb_ligne,c); exit (1);}
else {$$.type=$1.type;$$.val=($1.val+$3.val);} }
| Expression moins T   { if ($1.type!=$3.type) { printf("Erreur sémantique ligne %d colonne %d : incompatibilité des types\n",nb_ligne,c); exit (1);}
else {$$.type=$1.type;$$.val=($1.val-$3.val);} }     
| T   { $$.type=$1.type; $$.val=$1.val;}   
;
T: T division F { if ($1.type!=$3.type) { printf("Erreur sémantique ligne %d colonne %d : incompatibilité des types\n",nb_ligne,c); exit(1); }
else if($3.val==0){printf("Erreur semantique ligne %d colonne %d : division sur 0\n",nb_ligne,c);exit(1);}else{float v=($1.val/$3.val);$$.type=veref(v);$$.val=v;} }

| T mult F { if ($1.type!=$3.type){ printf("Erreur sémantique ligne %d colonne %d : incompatibilité des types\n",nb_ligne,c); exit(1);}
else $$.type=$1.type;$$.val=($1.val*$3.val); }

| F { $$.type=$1.type; $$.val=$1.val;}                
;
F: PO Expression PF { $$.type=$2.type; $$.val=$2.val;}
| ID    { $$.type=$1.type; $$.val=$1.val;}           
;
ID:  idf { if(recherche($1)==0) 
		{ printf("Erreur semantiique ligne %d colonne %d : identifiant non déclaré \n",nb_ligne,c); exit(1);} 
	else
	{
	int t=getType($1);
	$$.type=t;
	char *valeur=NULL; 
	valeur=getVal($1);
	float v =atof(valeur);
	$$.val=v;
         
	} }
| Val   { $$.type=$1.type;$$.val=$1.val;}
;		         
Val: intNS { $$.type=1;$$.val=$1;x=1;}
| intS  { $$.type=1; $$.val=$1;x=1;}
|reelNS { $$.type=2; $$.val=$1;x=2;}
|reelS  { $$.type=2; $$.val=$1;x=2;}
;  
Scan:mc_accpt PO guil Sign_for guil Dpoints adr idf PF point
;
Sign_for:dollar
|prcent
|hashtag
|etcom
;
Print:mc_display PO guil Chaine Affichage  PF point
;
Affichage:Signs guil Dpoints ListVar
;
Signs:Sign_for Signs
|Sign_for
;
ListVar:idf ListVar
|idf 
;
Chaine:str
|" "
|" " Chaine
|str Chaine
;
Condition:mc_if O Dpoints INST mc_else Dpoints INST mc_end point
|mc_if O Dpoints INST mc_end point
;
O : mc_not O 
| op  
;
op:  D mc_or Na 
| Na   
;
D : op 
;
Na : J mc_and Ma
| Ma  
;
J : Na 
;
Ma:  Op_comp 
| PO O PF 
;
Op_comp:  PO Expression Operateur_comp  Expression PF
;
Operateur_comp: sup 
| inf   
| supeg   
| infeg  
| egale   
| difrnt  
;
Boucle:mc_move idf mc_to idf INST mc_end
|mc_move idf mc_to intNS INST mc_end point
|mc_move intNS mc_to intNS INST mc_end point
;
%%
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
