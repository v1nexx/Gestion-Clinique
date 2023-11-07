#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include"menu.h"



//----------------------------------------------------- les menus ---------------------------------------------------------- 
// 1ere menu medecin ,patient et operation
int menu()
{
    int choix;
   printf("\t\t\t<-->--------------------------------------<-->\n");
   printf("\t\t\t ||---                                  ---||\n");
   printf("\t\t\t ||-----            BONJOUR           -----||\n");
   printf("\t\t\t ||---                                  ---||\n");
   printf("\t\t\t<-->--------------------------------------<-->\n");
   printf("\t\t\t ||---                                  ---||\n");
   printf("\t\t\t ||      1 -->   Gestion des patients      ||\n");
   printf("\t\t\t ||                                        ||\n");
   printf("\t\t\t ||      2 -->   Gestion des medecins      ||\n");
   printf("\t\t\t ||                                        ||\n");
   printf("\t\t\t ||      3 -->  Gestion des operations     ||\n");
   printf("\t\t\t ||                                        ||\n");
   printf("\t\t\t ||---                                  ---||\n");
   printf("\t\t\t ||      0 -->         Quitter             ||\n");
   printf("\t\t\t ||---                                  ---||\n");
   printf("\t\t\t<-->--------------------------------------<-->\n\n");
   printf("\t\t\t||--> Entrez votre choix s'il vous plait : ");
   scanf("%d",&choix);    
   return choix; 
}
    

//menu patient
int menu_p1()
{
    int choix;
   printf("\t\t\t<-->-------------------------------------<-->\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||----      ==  Menu Patient  ==     ----||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t<-->-------------------------------------<-->\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||                                       ||\n");
   printf("\t\t\t ||    1 -->  Creation des patients       ||\n");
   printf("\t\t\t ||                                       ||\n");
   printf("\t\t\t ||    2 -->  Importation des patients    ||\n");
   printf("\t\t\t ||                                       ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||  0 --> Retour  au  menu  principale   ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t<-->-------------------------------------<-->\n\n");
   printf("\t\t\t||--> Entrez votre choix s'il vous plait : ");
   scanf("%d",&choix);    
   return choix; 
}

// menu medecin
int menu_m1()
{
    int choix;
   printf("\t\t\t<-->-------------------------------------<-->\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||----    ==    Menu Medecin    ==   ----||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t<-->-------------------------------------<-->\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||                                       ||\n");
   printf("\t\t\t ||    1 -->   Creation des medecins      ||\n");
   printf("\t\t\t ||                                       ||\n");
   printf("\t\t\t ||    2 -->  Importation  des medecins   ||\n");
   printf("\t\t\t ||                                       ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||    0 -->  Retour au menu principale   ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t<-->-------------------------------------<-->\n\n");
   printf("\t\t\t||--> Entrez votre choix s'il vous plait : ");
   scanf("%d",&choix);    
   return choix; 
}

// menu parametre patient
int menu_p2()
{
    int choix;   
   printf("\t\t\t<-->------------------------------------<-->\n");
   printf("\t\t\t ||---                                ---||\n");
   printf("\t\t\t ||-----     Gestion des Patients    ----||\n");
   printf("\t\t\t ||---                                ---||\n");
   printf("\t\t\t<-->------------------------------------<-->\n");
   printf("\t\t\t ||---                                ---||\n");
   printf("\t\t\t ||   1 -->   Afficher les patients      ||\n");
   printf("\t\t\t ||   2 -->    Ajouter  un patient       ||\n");
   printf("\t\t\t ||   3 -->   Rechercher un patient      ||\n");
   printf("\t\t\t ||   4 -->   Supprimer un patient       ||\n");
   printf("\t\t\t ||   5 -->     Tri alphabetique         ||\n");
   printf("\t\t\t ||   6 -->   Modifier un patient        ||\n");
   printf("\t\t\t ||   7 -->  Sauvegarder les patient     ||\n");
   printf("\t\t\t ||---                                ---||\n");
   printf("\t\t\t ||   0 -->          Retour              ||\n");
   printf("\t\t\t ||---                                ---||\n");
   printf("\t\t\t<-->------------------------------------<-->\n\n");
   printf("\t\t\t||--> Entrez votre choix s'il vous plait : ");
   scanf("%d",&choix);    
   return choix; 
}         

// menu parametre medecin
int menu_m2()
{
    int choix;
   printf("\t\t\t<-->-----------------------------------<-->\n");
   printf("\t\t\t ||---                               ---||\n");
   printf("\t\t\t ||-----    Gestion des Medecins   -----||\n");
   printf("\t\t\t ||---                               ---||\n");
   printf("\t\t\t<-->-----------------------------------<-->\n");
   printf("\t\t\t ||                                     ||\n");
   printf("\t\t\t ||   1 -->  Afficher les medecins      ||\n");
   printf("\t\t\t ||   2 -->    Ajouter un medecin       ||\n");
   printf("\t\t\t ||   3 -->   Chercher un medecin       ||\n");
   printf("\t\t\t ||   4 -->   Supprimer un medecin      ||\n");
   printf("\t\t\t ||   5 -->    Tri alphabetique         ||\n");
   printf("\t\t\t ||   6 -->   Modifier un medecin       ||\n");
   printf("\t\t\t ||   7 -->   Medecins disponibles      ||\n");
   printf("\t\t\t ||   8 --> Sauvegarder les medecins    ||\n");
   printf("\t\t\t ||---                               ---||\n");
   printf("\t\t\t ||   0 -->          Retour             ||\n");
   printf("\t\t\t ||---                               ---||\n");
   printf("\t\t\t<-->-----------------------------------<-->\n\n");
   printf("\t\t\t||--> Entrez votre choix s'il vous plait : ");
   scanf("%d",&choix);    
   return choix; 
}         

int menu_m3()
{
    int choix;

   printf("\t\t\t<-->-------------------------------------<-->\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||    1 -->  Modifier la disponibilite   ||\n");
   printf("\t\t\t ||                                       ||\n");
   printf("\t\t\t ||    2 -->       Modifier le nom        ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||    0 -->          Retour              ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t<-->-------------------------------------<-->\n\n");
   printf("\t\t\t||--> Entrez votre choix s'il vous plait : ");
   scanf("%d",&choix);    
   return choix; 
}

int menu_p3()
{
    int choix;

   printf("\t\t\t<-->-------------------------------------<-->\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||    1 -->       Modifier l' ID         ||\n");
   printf("\t\t\t ||                                       ||\n");
   printf("\t\t\t ||    2 -->       Modifier le nom        ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||    0 -->          Retour              ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t<-->-------------------------------------<-->\n\n");
   printf("\t\t\t||--> Entrez votre choix s'il vous plait : ");
   scanf("%d",&choix);    
   return choix; 
}

             
                    
int menu_op(){
    int choix;
   printf("\t\t\t<-->------------------------------------<-->\n");
   printf("\t\t\t ||---                                ---||\n");
   printf("\t\t\t ||----    ==  Menu Operation  ==    ----||\n");
   printf("\t\t\t ||---                                ---||\n");
   printf("\t\t\t<-->------------------------------------<-->\n");
   printf("\t\t\t ||---                                ---||\n");
   printf("\t\t\t ||                                      ||\n");
   printf("\t\t\t ||   1 -->    Creer une operation       ||\n");
   printf("\t\t\t ||                                      ||\n");
   printf("\t\t\t ||   2 -->  Importation les operations  ||\n");
   printf("\t\t\t ||                                      ||\n");
   printf("\t\t\t ||---                                ---||\n");
   printf("\t\t\t ||   0 -->  Retour au menu principale   ||\n");
   printf("\t\t\t ||---                                ---||\n");
   printf("\t\t\t<-->------------------------------------<-->\n\n");
   printf("\t\t\t||--> Entrez votre choix s'il vous plait : ");
   scanf("%d",&choix);    
   return choix; 
}         


// menu operation 2

int menu_op2()
{
    int choix;
   printf("\t\t\t\t<-->------------------------------------<-->\n");
   printf("\t\t\t\t ||---                                ---||\n");
   printf("\t\t\t\t ||-----   Gestion des operations    ----||\n");
   printf("\t\t\t\t||---                                ---||\n");
   printf("\t\t\t\t<-->------------------------------------<-->\n");
   printf("\t\t\t\t ||---                                ---||\n");
   printf("\t\t\t\t ||   1 -->   Afficher les operations    ||\n");
   printf("\t\t\t\t ||   2 -->    Ajouter une operation     ||\n");
   printf("\t\t\t\t ||   3 -->   Chercher une operation     ||\n");
   printf("\t\t\t\t ||   4 -->   Supprimer une operation    ||\n");
   printf("\t\t\t\t ||   5 -->   Modifier une operation     ||\n");
   printf("\t\t\t\t ||   6 -->    Trier les operations      ||\n");
   printf("\t\t\t\t ||   7 --> Sauvegarder les operations   ||\n");
   printf("\t\t\t\t ||---                                ---||\n");
   printf("\t\t\t\t ||   0 -->          Retour              ||\n");
   printf("\t\t\t\t ||---                                ---||\n");
   printf("\t\t\t\t<-->------------------------------------<-->\n\n");;
   printf("\t\t\t\t||--> Entrez votre choix s'il vous plait : ");
   scanf("%d",&choix);    
   return choix; 
}         


//menu patient
int menu_op3()
{
    int choix;

   printf("\t\t\t<-->-------------------------------------<-->\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||    1 -->      Trie par prix           ||\n");
   printf("\t\t\t ||                                       ||\n");
   printf("\t\t\t ||    2 -->      Trie par numero         ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||    0 -->          Retour              ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t<-->-------------------------------------<-->\n\n");
   printf("\t\t\t||--> Entrez votre choix s'il vous plait : ");
   scanf("%d",&choix);    
   return choix; 
}

//menu operation 4
int menu_op4()
{
    int choix;

   printf("\t\t\t<-->-------------------------------------<-->\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||    1 -->     Modifier le prix         ||\n");
   printf("\t\t\t ||                                       ||\n");
   printf("\t\t\t ||    2 -->    Modifier le  numero       ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t ||    0 -->          Retour              ||\n");
   printf("\t\t\t ||---                                 ---||\n");
   printf("\t\t\t<-->-------------------------------------<-->\n\n");
   printf("\t\t\t||--> Entrez votre choix s'il vous plait : ");
   scanf("%d",&choix);    
   return choix; 
}

             
// CREATION DU LOGO

void logo(){
     
printf("++------------------------------------------------------------------------------------------++\n");
printf("||====== ===== ==== === == = = = = = = = = = = = = = = = = = = = = == === ==== ===== =======||\n");
printf("||====== ===== ==== === == =           I.G.A   CLINIQUE          = == === ==== ===== =======||\n");
printf("||====== ===== ==== === == = = = = = = = = = = = = = = = = = = = = == === ==== ===== =======||\n");
printf("++------------------------------------------------------------------------------------------++\n");
printf("||                                                                                          ||\n");
printf("||                                     ===           ===                                    ||\n");
printf("||               ===                   ===           ===                   ===              ||\n");
printf("||               ===                   ===           ===                   ===              ||\n");
printf("||           ===========               =================               ===========          ||\n");
printf("||           ===========               =================               ===========          ||\n");
printf("||               ===                   ===           ===                   ===              ||\n");
printf("||               ===                   ===           ===                   ===              ||\n");
printf("||                                     ===           ===                                    ||\n");
printf("||                                                                                          ||\n");
printf("++------------------------------------------------------------------------------------------++\n");
printf("||====== ===== ==== === ==                                         == === ==== ===== =======||\n");
printf("++------------------------------------------------------------------------------------------++\n\n\n");}

void tab1(){
printf("\n++----------------------------------           Liste des Operations        ------------------------------------++\n");
printf("\n");
printf("\n++-------------------------------------------------------------------------------------------------------------++\n");
printf("||                    |                 |   ID    |                |   ID    |                  |              ||\n");
printf("|| Numero d'operation |     Medecin     |   de    |    Patient     |   DE    | Date d'operation |     Prix     ||\n");
printf("||                    |                 | Medecin |                | Patient |                  |              ||\n");
printf("++-------------------------------------------------------------------------------------------------------------++\n");
}

void tab2(){ 
printf("\n\t      ++--------------          Liste des Medecins       ------------++\n");
printf("\n"); 
printf("\n\t\t++--------------------------------------------------------++\n");
printf("\t\t||               |                  |                     ||\n");
printf("\t\t|| ID de medecin |      le Nom      |  La disponibilite   ||\n");
printf("\t\t||               |                  |                     ||\n");
printf("\t\t++--------------------------------------------------------++\n");
}

void tab3(){  
printf("\n\t\t++-------------      Liste des Clients      ------------- ++\n");
printf("\n");
printf("\n\t\t   ++-------------------------------------------------++\n");
printf("\t\t   ||               |                  |              ||\n");
printf("\t\t   || ID de patient |      le Nom      |    L'age     ||\n");
printf("\t\t   ||               |                  |              ||\n");
printf("\t\t   ++-------------------------------------------------++\n");
}

void tab4(){ 
printf("\n\t      ++--------------    Liste des Medecins disponible    ------------++\n");
printf("\n"); 
printf("\n\t\t++--------------------------------------------------------++\n");
printf("\t\t||               |                  |                     ||\n");
printf("\t\t|| ID de medecin |      le Nom      |  La disponibilite   ||\n");
printf("\t\t||               |                  |                     ||\n");
printf("\t\t++--------------------------------------------------------++\n");
}


