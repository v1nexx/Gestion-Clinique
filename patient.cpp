#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include"patient.h"





// creer la liste des patient
void creer_patient(patient p[],int n)
{
       for(int i=0;i<n;i++)
       {
       printf("\nEntrez l'Id du patient svp : ");
       scanf("%d",&p[i].id_p);
       printf("\nEntrez le nom svp :");
       scanf("%s",p[i].nom);
       printf("\nEntrez l'age du patient svp :");
       scanf("%d",&p[i].age);
       }
}
       
//afficher une liste des patient
void afficher_patient(patient p[],int n)
{
for(int i=0;i<n;i++)
    {
printf("\t\t   ||      %3d      |   %10s     |%8d      ||\n",p[i].id_p,p[i].nom,p[i].age); 
printf("\t\t   ++-------------------------------------------------++\n");
    }
printf("\n");
}                         
      
// ajouter un patient
void ajouter_patient(patient p[],int *n)
{
   int i=*n;  
   *n=*n+1;
       printf("\nEntrez l'Id du patient svp : ");
       scanf("%d",&p[i].id_p);
       printf("\nEntrez le nom du patient svp :");
       scanf("%s",p[i].nom);
       printf("\nEntrez l'age du patient :");
       scanf("%d",&p[i].age);
}       
       
// rechercher un patient par son id
int rechercher_patient(patient p[],int n,int id)
{
    int i,pos=-1;
    for(i=0;i<n && pos==-1;i++)
    if(id==p[i].id_p)    
    pos=i;
    return pos;
}


// rechercher patient dans un fichier 
patient recherche2(int id)
{
   patient p;int n;
   FILE *F;
   F=fopen("patient.txt","r");
   fscanf(F,"%d\n",&n);
   for(int i=0;i<n;i++)
   {
   fscanf(F,"%d %s %d\n",&p.id_p,p.nom,&p.age);
   if(p.id_p==id)
   return p;
   }
   
   fclose(F);
}

// modifier l' ID d'un patient 
void modifier_patient(patient p[],int n)
{
   int id,pos;
   printf("\nEntrez svp l'id du patient a Modifier : ");
   scanf("%d",&id);  
   pos=rechercher_patient(p,n,id);
   if(pos==-1)
   {
      printf(" ce patient n'existe pas!! \a\a\a");getch();
   }
   else
   {
   printf("\nEntrez le nouveau id du patient svp : ");
   scanf("%d",&p[pos].id_p); 
   }
}

// modifier le nom d'un patient 
void modifier_nom_patient(patient p[],int n)
{
   int id,pos;
   printf("\nEntrez svp l'id du patient a Modifier : ");
   scanf("%d",&id);  
   pos=rechercher_patient(p,n,id);
   if(pos==-1)
   {
      printf(" ce patient n'existe pas!! \a\a\a");getch();
   }
   else
   {
   printf("\nEntrez le nouveau nom du patient svp : ");
   scanf(" %s",p[pos].nom); 
   }
}
//supprimer un patient 
void supprimer_patient(patient p[],int *n)
{
int i,id,pos;
   printf("\nEntrez svp l'Id du patient a supprimmer : ");
   scanf("%d",&id);  
   pos=rechercher_patient(p,*n,id);
   if(pos==-1)
   {
   printf("ce patient n'existe pas!!!!\a\a\a");getch();
   }
   else
   {
       for(i=pos;i<*n-1;i++)
       p[i]=p[i+1];
       *n=*n-1;
   }
}

//trier les patients par ordre alphabetique
void trier_patient(patient p[],int n)
{
   int i,j;
   patient aux;
   for(i=0;i<n-1;i++)  
   for(j=i+1;j<n;j++)
   if(strcmp(p[i].nom,p[j].nom)>0)
   {
   aux=p[i];
   p[i]=p[j];
   p[j]=aux;                             
   }
}



       
// sauvgarder un patient dans un fichier
void sauvgarder_patient(patient p[],int n)
{
     FILE *F;
     F=fopen("patient.txt","w");
     fprintf(F,"%d\n",n);
     for(int i=0;i<n;i++)
     fprintf(F,"%d  %s  %d\n",p[i].id_p,p[i].nom,p[i].age); 
fclose(F);    
}

// importer un patient apartir d'un fichier 
void importer_patient(patient p[],int *n)
{
   FILE *F;
   F=fopen("patient.txt","r");
   fscanf(F,"%d\n",n);
   for(int i=0;i<*n;i++)
   fscanf(F,"%d %s %d\n",&p[i].id_p,p[i].nom,&p[i].age);     
   fclose(F);    
}







       
       
