#include<stdio.h>
#include"date.h"
 
void creation_date(date *d)
{
    char c;
    printf("\nentrez la date d'operation svp  : ");  
    scanf("%d%c%d%c%d",&d->j,&c,&d->m,&c,&d->a);
}


  


void afficher_date(date d)
{    
   printf("\nDate d'operation  : %d/%d/%d \n",d.j,d.m,d.a);     
}
