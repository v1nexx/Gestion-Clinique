#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include"menu.h"
#include"patient.h"
#include"medecin.h"
#include"operation.h"



main(){
       
// declaration

medecin m[50];
patient p[50];
liste *deb, *pos;
float nv_prix;
int n,num,trv,nv_num;
       
//logo
      logo();
     _sleep (1500);
     
//menu 1

a:
        system("cls");
             logo();  
        switch(menu()){
               case 1:goto b;break;
               case 2:goto c;break;
               case 3:goto d;break;
               case 0:exit(0);break;
               default:printf("erreur de choix \a\a\a");
               getch();goto a;}

// menu patient1

b:
  system("cls"); 
       logo();   
   switch(menu_p1())
   { 
   case 1: 
       printf("\nEntrez le nombre de patient svp :");
       scanf("%d",&n);
       creer_patient(p,n);goto e; break;
   
   case 2:
        importer_patient(p,&n);goto e;break;
   
   case 0:
        goto a;break;
   
   default: 
        printf("Erreur de choix \a\a\a");getch();
goto b;
   }
  
// menu medecin 1

c:
   system("cls");
          logo();
   switch(menu_m1())
   { 
   case 1: 
       printf("\nEntrez le nombre de medecin svp :");
       scanf("%d",&n);
       creer_medecin(m,n);goto f; break;
      
   case 2:   
       importer_medecin(m,&n);goto f;break;
   
   case 0:
        goto a;break;
        
   default: printf("Erreur de choix \a\a\a"); 
   getch();
goto c;
   } 
   
// menu operation

d:
   system("cls");
          logo();
   switch(menu_op())
   { 
   case 1: 
      creer_operation(&deb);goto g;break;
      
   case 2:
      importer_operation(&deb);goto g;break;
      
   case 0:
      goto a;break;
        
   default: printf("Erreur de choix \a\a\a"); 
   getch();
   
goto d;
   } 
   
   
   
// menu gestion patient
e: 
        system("cls");
        logo();
h:     
   switch(menu_p2())
   { 
   case 1:
      system("cls");
      tab3();afficher_patient(p,n);goto h;break;
   case 2:
      ajouter_patient(p,&n);goto e;break;
   case 3:
      printf("\nEntrez l'identifiant de patient a rechercher svp : ");
      scanf("%d",&num);
      trv=rechercher_patient(p,n,num);
      if (trv==-1)
      printf("le patient n'existe pas !!!\a\a\a");
      else
      printf("le patient existe ");getch();
      goto e;break;
   case 4:       
      supprimer_patient(p,&n);goto e;break;
   case 5:
       trier_patient(p,n);goto e;break;
   case 6:
         switch(menu_p3())
        { 
   case 1: 
        modifier_patient(p,n);goto e;break;
   case 2:
        modifier_nom_patient(p,n);goto e;break;
   case 0:
        goto e;break;
   default: 
       printf("erreur de choix !!/a/a/a");goto e;break;
       }

   case 7:
       sauvgarder_patient(p,n);goto e;break;
   case 0:
        goto b;break;
        
   default: printf("Erreur de choix \a\a\a"); 
   getch();
   goto e;}
   
   
// menu gestion medecin

f: 
        system("cls");
        logo();
i:

   switch(menu_m2())
   { 
   case 1: 
        system("cls");
        tab2();afficher_medecin(m,n);goto i;break;
   case 2:
      ajouter_medecin(m,&n);goto f;break;
   case 3:
      printf("\nEntrez l'identifiant de patient a rechercher svp : ");
      scanf("%d",&num);
      trv=rechercher_medecin(m,n,num);
      if (trv==-1)
      printf("le medecin n'existe pas !!! ");
      else
      printf("le medecin existe ");getch();
      goto f;break;
   case 4:
       supprimer_medecin(m,&n);goto f;break;
   case 5:
       trier_medecin(m,n);goto f;break;
   case 6:
        
         switch(menu_m3())
        { 
   case 1: 
        modifier_medecin(m,n);goto f;break;
   case 2:
        modifier_nom_medecin(m,n);goto f;break;
   case 0:
        goto f;break;
   default: 
       printf("erreur de choix !!/a/a/a");goto f;break;
       }
       
   case 7:
        system("cls");
        tab4();afficher_med_dipo();getch();goto f;break;
   case 8:
        sauvgarder_medecin(m,n);goto f;break;
   case 0:
        goto c;break;
        
   default: printf("Erreur de choix \a\a\a"); 
   getch();
   goto f;}
   
   

g:  
    system("cls");
    logo();
j:
   switch(menu_op2())
   { 
   case 1: 
        system("cls");
        tab1();affichage_1(deb);goto j;break;
   case 2:
       ajouter_operation(&deb);goto g;break;
   case 3:
      printf("\nEntrez le numero de l'operation a rechercher svp : ");
      scanf("%d",&num);
      recherche_operation(deb,num,&pos);
      if ( pos==NULL)
      printf("l'operation n'existe pas !!! ");
      else
      printf("l'operation existe ");
      getch();goto g;break;
   case 4:
      printf("\nEntrez le numero de l'operation a supprimer svp : ");
      scanf("%d",&num); 
      suppression_operation(&deb,num);goto g;break;
   case 5:
         switch(menu_op4())
        { 
   case 1: 
      printf("\nEntrez le numero de l'operation a modifier svp: ");
      scanf("%d",&num);
      printf("\nEntrez le nouveau prix svp : ");
      scanf("%f",&nv_prix);
      modification_operation(deb,nv_prix,num);goto g;break;
   case 2:
   printf("\nEntrez le numero de l'operation a modifier svp: ");
      scanf("%d",&num);
      printf("\nEntrez le nouveau numero svp : ");
      scanf("%d",&nv_num);
      modification_num_operation(deb,nv_num,num);goto g;break;
   case 0:
        goto g;break;
   default: 
       printf("erreur de choix !!/a/a/a");goto g;break;
       }
      
   case 6: 
         switch(menu_op3())
        { 
   case 1: 
        trie_operation(deb);goto g;break;
   case 2:
        trie_code_operation(deb);goto g;break;
   case 0:
        goto g;break;
   default: 
       printf("erreur de choix !!/a/a/a");goto g;break;
       }
   case 7:
        sauvgarder_operation(deb);goto g;break;
   case 0:
        goto d;break;
        
   default: printf("Erreur de choix \a\a\a"); 
   getch();
   goto g;}

       getch();}
