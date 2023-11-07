#include<stdio.h>
#include<conio.h>
#include"operation.h"
#include<stdlib.h>
#include"medecin.h"
#include"patient.h"


// creation d'une liste d'operations
void creer_operation(liste **deb)
{  int rep=1;
   *deb=NULL;
   liste *nv;

while(rep==1)
     {  
     nv=(liste*)malloc(sizeof(liste));
     printf("\nEntrez le num de l'operation svp :");
     scanf("%d",&nv->op.num);
     printf("\nEntrez l'id du medecin svp :");
     scanf("%d",&nv->op.id_m);
     printf("\nEntrez l'id du patient svp :");
     scanf("%d",&nv->op.id_p);
     printf("\nEntrez le prix svp :");
     scanf("%f",&nv->op.prix);
     creation_date(&nv->op.dateop);
     nv->sv=*deb;
     *deb=nv; 
     printf("Autre |0: non - 1: oui| : ");
     scanf("%d",&rep);
     }
}
 
// Afichage des operations  
void affichage_1(liste *deb)
{
     medecin m;
     patient p;
     liste *parc=deb;
     while(parc!=NULL)
    { 
        m=recherche1(parc->op.id_m);
        p=recherche2(parc->op.id_p);
        
printf("||     %6d         |  %10s     |   %2d    | %10s     |   %2d    | %3d / %2d / %2d  | %8.2f DH  ||\n",parc->op.num,m.nom,m.id_m,p.nom,p.id_p,parc->op.dateop.j,parc->op.dateop.m,parc->op.dateop.a,parc->op.prix); 
printf("++-------------------------------------------------------------------------------------------------------------++\n");
        parc=parc->sv;             
    }
printf("\n");
}

// ajouter d'une liste d'operations
void ajouter_operation(liste **deb)
{ 
     liste *nv;

     nv=(liste*)malloc(sizeof(liste));
     printf("\nEntrez le num de l'operation svp :");
     scanf("%d",&nv->op.num);
     printf("\nEntrez l'id du medecin svp :");
     scanf("%d",&nv->op.id_m);
     printf("\nEntrez l'id du patient svp :");
     scanf("%d",&nv->op.id_p);
     printf("\nEntrez le prix svp :");
     scanf("%f",&nv->op.prix);
     creation_date(&nv->op.dateop);
     nv->sv=*deb;
     *deb=nv; 
}
 
// fonction cherche une operation selon son numero
void recherche_operation(liste *deb,int num,liste **pos)
{
     int trouve=0; liste *parc=deb;
     *pos=NULL;
     while((trouve==0)&&(parc!=NULL))
     if(parc->op.num==num)
     {
           trouve=1;
           *pos=parc;
     }
     else
     parc=parc->sv;
}

// modifier le prix d'une operation
void modification_operation (liste *deb, float nvprix,int num)
{
     liste *pos;
     recherche_operation(deb,num,&pos);
     if(pos==NULL)
     printf("l'element n'existe pas !! \a\a\a");
     else
     pos->op.prix=nvprix;
}

// modifier le prix d'une operation
void modification_num_operation (liste *deb, int nvnum,int num)
{
     liste *pos;
     recherche_operation(deb,num,&pos);
     if(pos==NULL)
     printf("l'element n'existe pas !! \a\a\a");
     else
     pos->op.num=nvnum;
}

// definir le predecesseur 
void predecesseur(liste *deb,int num,liste **pred)
{
     liste *parc=deb;
     *pred=NULL;
     while(parc->op.num!=num)
     {
     *pred=parc;
     parc=parc->sv;
     }
}

// supprimer une operation
void suppression_operation(liste **deb,int num)
{
     liste *pos=NULL,*pred;
     recherche_operation(*deb,num,&pos);
     if(pos==NULL){
     printf("l'element n'existe pas!! \a\a\a");getch();}
     else
     {
     predecesseur(*deb,num,&pred);
     if(pred==NULL)
     *deb=(*deb)->sv;
     else
     pred->sv=pos->sv;
     free(pos);
     } 
}

// trie selon le prix
void trie_operation(liste *deb)
{
     operation aux;
     liste *i, *j;
     for(i=deb;i->sv!=NULL;i=i->sv)
     for(j=i->sv;j!=NULL;j=j->sv)
     if(j->op.prix>i->op.prix)
     {
     aux=i->op;
     i->op=j->op;
     j->op=aux;
     }
}

// trie selon le numero
void trie_code_operation(liste *deb)
{
     operation aux;
     liste *i, *j;
     for(i=deb;i->sv!=NULL;i=i->sv)
     for(j=i->sv;j!=NULL;j=j->sv)
     if(j->op.num<i->op.num)
     {
     aux=i->op;
     i->op=j->op;
     j->op=aux;
     }
}

// sauvgarder un medecin dans un fichier
void sauvgarder_operation(liste *deb)
{
     FILE *F;
     F=fopen("operation.txt","w");
     liste *parc=deb;
     while(parc!=NULL)
    {
    fprintf(F,"%d %d %d %.2f %d %d %d\n",parc->op.num,parc->op.id_m,parc->op.id_p,parc->op.prix,parc->op.dateop.j,parc->op.dateop.m,parc->op.dateop.a);
    parc=parc->sv;
    }        
fclose(F);    
}

// importer une operation d'un fichier
void importer_operation(liste **deb)
{
     FILE *F;
     F=fopen("operation.txt","r");
     liste *nv;
     *deb=NULL;
     while(!feof(F))
     {
     nv=(liste*)malloc(sizeof(liste));            
     fscanf(F,"%d %d %d %f %d %d %d\n",&nv->op.num,&nv->op.id_m,&nv->op.id_p,&nv->op.prix,&nv->op.dateop.j,&nv->op.dateop.m,&nv->op.dateop.a);
     nv->sv=*deb;
     *deb=nv; 
     }   
fclose(F);    
}



