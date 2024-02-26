#include <stdio.h>
#include <stdlib.h>
typedef struct
{
   int state;
   char name[20];
   char code[20];
   char type[20];
   char val[100];
 } element;

typedef struct
{ 
   int state; 
   char name[50];
   char type[20];
} elt;
int cpt_idf=0,cpt_mc=0,cpt_s=0;
element tab[1000];
elt tabs[100],tabm[100];
//verifier si entier ou reel
int veref(float v)
{int x=(int)v;
if (v==x) return 1;
else return 2;
}
//fonction recherche qui retourne 0 si l'entité n'est pas declaré,1 si c'est une modification d'une constante qui a deja une valeur -1 si l'entite est declare
int recherche(char entite[])
{ int j;
 for(j=0;j<cpt_idf;j++)
  {  if(strcmp(entite,tab[j].name)==0)
    
       {if (strcmp(tab[j].type,"")==0) return 0; 
	else 
	     { if ((strcmp(tab[j].code,"Constante")==0)&&(strcmp(tab[j].val,"")!=0))return 1;
               else return -1;
	     }
       }
		
		
   }
}
//fonction getVal qui retourne la valeur d'une entite
char *getVal(char entite[])
{   int i=0;char *cam=NULL;

    while((i<cpt_idf)&&(strcmp(entite,tab[i].name)!=0)) i++;

    cam=malloc((strlen(tab[i].val)+1)*sizeof(char));

    strcpy(cam,tab[i].val);

return cam ;	
}
//fonction insererVALchar pour inserer la valeur de type caractere 
void insererVALChar ( char entite[], char val)
{
	int i=0;
	char valeur[1];
	valeur[0]=val;
	
	while((i<cpt_idf)&&(strcmp(entite,tab[i].name)!=0)) i++;

	strcpy(tab[i].val,valeur);
}
//fonction insererVALString pour inserer la valeur de type chaine de caracteres 
  void insererVALString ( char entite[], char valeur[])
{
	int i=0;
	
	while((i<cpt_idf)&&(strcmp(entite,tab[i].name)!=0)) i++;

	strcpy(tab[i].val,valeur);
}
//fonction insererTYPE pour inserer le type a une entite
 void insererTYPE(char tabvar[50][100],int k,int ty)
{  int i,j;
     for(i=0;i<k;i++)
  {    
	for(j=0;j<cpt_idf;j++)
         { 
            if(strcmp(tabvar[i],tab[j].name)==0)
            { 
               switch(ty)
                {
		case 1:{//si le type est entier 
			strcpy(tab[j].type,"INTEGER");
			break;
			}	
		case 2:{//si le type est reel 
			strcpy(tab[j].type,"FLOAT");
			break;
		       }
		case 3: {//si le type est caractere
			strcpy(tab[j].type,"CHAR");
			break;
			}
		case 4:{//si le type est chaine de caractere 
			strcpy(tab[j].type,"STRING");
			break;
		       }
		}
		break;
	    }
        }
   }
}
   
  
//fonction qui detecte la double declaration
int doubleDeclaration(char tabvar[50][100],int k,int ty)
{   int i,j;
     for(i=0;i<k;i++)
  {   
 
      for(j=0;j<cpt_idf;j++)
         {  if(strcmp(tabvar[i],tab[j].name)==0)
		{
  		if(strcmp(tab[j].type,"")==0){ insererTYPE(tabvar,k,ty);}
     		else return -1;
		}
         }
  }
}
  
/***initialisation de l'état dans les cases de la table des symbloles***/
/*0: la case est libre    1: la case est occupée*/

void initialisation()
{
  int i;
  for (i=0;i<1000;i++)
  tab[i].state=0;
  
  for (i=0;i<100;i++)
    {tabs[i].state=0;
    tabm[i].state=0;}
}
/*** insertion des entitées lexicales dans les tables des symboles ***/

void inserer (char entite[], char code[],char type[],char val[],int i, int y)
{
  switch (y)
 { 
   case 0:/*insertion dans la table des IDF et CONST*/
       tab[i].state=1;
       strcpy(tab[i].name,entite);
       strcpy(tab[i].code,code);
       strcpy(tab[i].type,type);
       strcpy(tab[i].val,val);
       cpt_idf++;

   break;

   case 1:/*insertion dans la table des mots clés*/
       tabm[i].state=1;
       strcpy(tabm[i].name,entite);
       strcpy(tabm[i].type,code);
	cpt_mc++;
   break; 
    
   case 2:/*insertion dans la table des séparateurs*/
      tabs[i].state=1;
      strcpy(tabs[i].name,entite);
      strcpy(tabs[i].type,code);
      cpt_s++;
   break;
 }

}
/***La fonction Rechercher permet de verifier  si l'entité existe dèja dans la table des symboles et fait appel a la fonction inserer */
void rechercher (char entite[], char code[],char type[],char val[],int y)	
{ int j,i;

switch(y) 
  {
   case 0:/*verifier si la case dans la tables des IDF et CONST est libre*/
        for (i=0;((i<1000)&&(tab[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++);
        if(strcmp(entite,tab[i].name)!=0) 
	{
	if(i<1000) inserer(entite,code,type,val,i,0); 
	}
          
   break;

   case 1:/*verifier si la case dans la tables des mots clés est libre*/
       
       for (i=0;((i<100)&&(tabm[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++); 
	if(strcmp(entite,tab[i].name)!=0)
	{
	if(i<100) inserer(entite,code,type,val,i,1);
	}
          
   break;
        case 2:/*verifier si la case dans la tables des séparateurs est libre*/
         for (i=0;((i<100)&&(tabs[i].state==1))&&(strcmp(entite,tab[i].name)!=0);i++); 
	if(strcmp(entite,tab[i].name)!=0)
	{
	if(i<100) inserer(entite,code,type,val,i,2);
	}
          
   break;

  }

}


/***L'affichage du contenue de la table des symboles ***/

void afficher()
{int i;

printf("/***************Table des symboles IDF*********************/\n");
printf("____________________________________________________________________\n");
printf("\t| Nom_Entite|  Code_Entite   | Type_Entite  | Val_Entite\n");
printf("____________________________________________________________________\n");

for(i=0;i<cpt_idf;i++)
{	
	
    if(tab[i].state==1)
      { 
        printf("\t|%10s |%15s | %12s | %12s\n",tab[i].name,tab[i].code,tab[i].type,tab[i].val);
         
      }
}

 
printf("\n/***************Table des symboles mots clés*************/\n");

printf("__________________________________________________________________________\n");
printf("\t|           Nom_Entite                    |     Code_Entite | \n");
printf("__________________________________________________________________________\n");
  
for(i=0;i<cpt_mc;i++)
    if(tabm[i].state==1)
      { 
        printf("\t|%30s		 |%15s | \n",tabm[i].name, tabm[i].type);
               
      }

printf("\n/***************Table des symboles séparateurs*************/\n");

printf("_____________________________________\n");
printf("\t| Nom_Entite |  Code_Entite | \n");
printf("_____________________________________\n");
  
for(i=0;i<cpt_s;i++)
    if(tabs[i].state==1)
      { 
        printf("\t|%10s |%12s | \n",tabs[i].name,tabs[i].type );
        
      }

}
//la fonction qui retourne le type de l'entite
int getType(char entite[])
{
int i=0;
	
while((i<cpt_idf)&&(strcmp(entite,tab[i].name)!=0)) i++;

  if(strcmp(tab[i].type,"INTEGER")==0) return 1;//1 si le type est entier
  if(strcmp(tab[i].type,"FLOAT")==0) return 2;//2 si le type est reel
  if(strcmp(tab[i].type,"STRING")==0) return 3;//3 si le type est chaine de caractere
  if(strcmp(tab[i].type,"CHAR")==0) return 4;//4 si le type est caractere
	
}
//fonction qui verifie la compatibilité des types  
int VerifType(char entite[], char type[])
{ int i=0;
	while((i<cpt_idf)&&(strcmp(entite,tab[i].name)!=0)) i++;

	if(strcmp(tab[i].type,type)==0) return 1;

	else return 0;

}
//fonction qui retourne la position d'une entite dans la table des symboles
int position(char chaine[])
{ int i=0;
  while(i<cpt_idf)
 {    if (strcmp(chaine,tab[i].name)==0) return i;	
  i++;
 }
 return -1;
}
	
