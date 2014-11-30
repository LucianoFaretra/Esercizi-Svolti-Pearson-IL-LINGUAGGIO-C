#include <stdlib.h>
#include <stdio.h>

#include "InserimentoRigheEColonne.h"

void InserimentoNumeroRighe(float matrice[], int n)
{
int i = 0;

printf("\n===========================================================================\n");
printf("\n\t\tInserire i dati della Matrice numero: %d \n", n);
printf("\n===========================================================================\n");

matrice[i] = 0; //Flush numero righe
while(matrice[i] < 1)
    {
    printf("Per Cortesia inserire almeno una Riga ");
    scanf("%f", &matrice[i]);
    }
return;
}

void InserimentoNumeroColonne(float matrice[])
{
int i = 1;

matrice[i] = 0; //Flush numero colonne
while(matrice[i] < 1)
    {
    printf("Per Cortesia inserire almeno una Colonna ");
    scanf("%f", &matrice[i]);
    }
return;
}

void ControlloMatrice(float matrice[], int n)
{
int i = 0;

if ((matrice[i] == 1.000000 && matrice[i + 1] == 1.000000))
    {
    printf("\n\n\n\n\n\n\n********************************************************************************\n");
    printf("\n\tAttenzione una matrice non può essere composta 1 riga ed 1 colonna\n\t\t\tPer cortesia reinserire i dati\n");
    printf("\n********************************************************************************\n\n\n\n\n\n\n\n");
    InserimentoNumeroRighe(matrice, n);
    InserimentoNumeroColonne(matrice);
    ControlloMatrice(matrice, n);
    }
return;
}
