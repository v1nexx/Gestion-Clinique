
// structur medecin





typedef struct medecin
{
        int id_m;
        char nom[30];
        char dispo;
}; 



        
// les prototypes

void creer_medecin(medecin[],int);
void afficher_medecin(medecin[],int);
void ajouter_medecin(medecin[],int *);
int rechercher_medecin(medecin[],int,int);
void modifier_medecin(medecin[],int);
void modifier_nom_medecin(medecin[],int);
void supprimer_medecin(medecin[],int *);
void trier_medecin(medecin[],int);
void sauvgarder_medecin (medecin[],int);
void importer_medecin(medecin[],int *);
medecin recherche1(int);
void afficher_med(medecin );
void afficher_med_dipo();


