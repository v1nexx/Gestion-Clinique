#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"medecin.h"


// Creation  la liste des medecins
void creer_medecin(medecin m[],int n)
{
    for(int i=0;i<n;i++)
    {
       printf("\nEntrez l'Id du medecin svp : ");
       scanf("%d",&m[i].id_m);
       printf("\nEntrez le nom svp :");
       scanf("%s",m[i].nom);
       printf("\nDonnez la disponibilite (o:disp / n:indisp): ");
       scanf(" %c",&m[i].dispo);
    }
}



//affichage   liste des medecins
void afficher_medecin(medecin m[],int n)
{
for(int i=0;i<n;i++)
  {
printf("\t\t||      %3d      |  %10s      |    %8c         ||\n",m[i].id_m,m[i].nom,m[i].dispo); 
printf("\t\t++--------------------------------------------------------++\n");
  }
printf("\n");}
      
// ajout  d'un medecin
void ajouter_medecin(medecin m[],int *n)
{
   int i=*n;  
   *n=*n+1;
       printf("Entrez l'Id du medecin svp : ");
       scanf("%d",&m[i].id_m);
       printf("\nEntrez le nom svp :");
       scanf("%s",m[i].nom);
       printf("\nDonnez la disponibilite (1:disp / 0:indisp): ");
       scanf(" %c",&m[i].dispo);
}
            
// recherche d'un medecin par son id
int rechercher_medecin(medecin m[],int n,int id)
{
  int i,p=-1;
  
  for(i=0;i<n && p==-1;i++)
    if(id==m[i].id_m)    
    p=i;
  return p;
}

// recherche d'un medecin dans un fichier
medecin recherche1(int id)
{
   medecin m;int n;
   FILE *F;
   F=fopen("medecin.txt","r");
   fscanf(F,"%d\n",&n);
   for(int i=0;i<n;i++)
   {
           fscanf(F,"%d %s %c\n",&m.id_m,m.nom,&m.dispo);
           if(m.id_m==id)
           return m;
   }
   fclose(F);
}

// afficher les medecins disponible 
void afficher_med_dipo()
{
   medecin m;int n;
   FILE *F;
   F=fopen("medecin.txt","r");
   fscanf(F,"%d\n",&n);
   for(int i=0;i<n;i++)
   {
           fscanf(F,"%d %s %c\n",&m.id_m,m.nom,&m.dispo);
           if(m.dispo=='o')
           {
printf("\t\t||      %3d      |  %10s      |    %8c         ||\n",m.id_m,m.nom,m.dispo); 
printf("\t\t++--------------------------------------------------------++\n");}
   }
   fclose(F);
}

// modification de  la disponibilité d'un medecin 
void modifier_medecin(medecin m[],int n)
{
   int id,p;
   printf("\nEntrez svp l'id du medecin a Modifier : ");
   scanf("%d",&id);  
   p=rechercher_medecin(m,n,id);
   if(p==-1)
   {
      printf("ce medecin n'existe pas!! \a\a\a");getch();
   }
   else
   {
   printf("\nEntrez la disponibilité du medecin svp : ");
   scanf(" %c",&m[p].dispo); 
   }
}

// modifier le nom d'un medecin 
void modifier_nom_medecin(medecin m[],int n)
{
   int id,p;
   printf("\nEntrez svp l'id du medecin a Modifier : ");
   scanf("%d",&id);  
   p=rechercher_medecin(m,n,id);
   if(p==-1)
   {
      printf("ce medecin n'existe pas!! \a\a\a");getch();
   }
   else
   {
   printf("\nEntrez le nouveau nom du medecin svp : ");
   scanf(" %s",&m[p].nom); 
   }
}

//Suppression  d'un medecin
void supprimer_medecin(medecin m[],int *n)
{
   int i,id,p;
   printf("\nEntrez svp l'Id du medecin a supprimmer : ");
   scanf("%d",&id);  
   p=rechercher_medecin(m,*n,id);
   if(p==-1){
      printf("ce medecin n'existe pas!!!!\a\a\a");getch();}
   else
   {
       for(i=p;i<*n-1;i++)
       m[i]=m[i+1];
       *n=*n-1;
   }
}


//Trie  de  medecin par ordre alphabetique
void trier_medecin(medecin m[],int n)
{
int i,j;
   medecin aux;
   for(i=0;i<n-1;i++)  
   for(j=i+1;j<n;j++)
   if(strcmp(m[i].nom,m[j].nom)>0)
   {
   aux=m[i];
   m[i]=m[j];
   m[j]=aux;                             
   }
}
       
// Sauvegarde des  medecin dans un fichier
void sauvgarder_medecin (medecin m[],int n)
{
     FILE *F;
     F=fopen("medecin.txt","w");
     fprintf(F,"%d\n",n);
     for(int i=0;i<n;i++)
     fprintf(F,"%d  %s  %c\n",m[i].id_m,m[i].nom,m[i].dispo); 
fclose(F);    
}

// Importation un medecin apartir d'un fichier
void importer_medecin(medecin m[],int *n)
{
   FILE *F;
   F=fopen("medecin.txt","r");
   fscanf(F,"%d\n",n);
   for(int i=0;i<*n;i++)
   fscanf(F,"%d %s %c\n",&m[i].id_m,m[i].nom,&m[i].dispo);    
   fclose(F);    
}









       
       
       
