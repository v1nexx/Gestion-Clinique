#include"date.h"
//structure patient





typedef struct patient{
    int id_p;
    char nom[30];
    int age;}; 
    
    
    
    
    
    
// les protoypes

void creer_patient(patient[],int);
void ajouter_patient(patient[],int *);
void afficher_patient(patient[],int);
int rechercher_patient(patient[],int,int);
void supprimer_patient(patient[],int *);
void trier_patient(patient[],int);
void sauvgarder_patient(patient[],int);
void modifier_patient(patient[],int );
void modifier_nom_patient(patient[],int );
void importer_patient(patient[],int *);
patient recherche2(int);
void afficher_pa(patient );
