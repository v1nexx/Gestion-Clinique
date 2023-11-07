// structure operation
#include"date.h"

typedef struct 
{ 
       date dateop;
       int num,id_p,id_m;
       float prix;
}operation;
       
typedef struct cellule
{
       operation op;
       struct cellule *sv;
}liste;
       
       
//Les protoypes

void creer_operation(liste **);
void recherche_operation(liste *,int,liste **);
void modification_operation(liste*,float,int);
void modification_num_operation (liste *, int,int);
void predecesseur(liste*,int,liste**);
void ajouter_operation(liste **deb);
void suppression_operation(liste **,int);
void trie_operation(liste *);
void trie_code_operation(liste *deb);
void sauvgarder_operation(liste *);
void importer_operation(liste **);
void affichage_1(liste *);






