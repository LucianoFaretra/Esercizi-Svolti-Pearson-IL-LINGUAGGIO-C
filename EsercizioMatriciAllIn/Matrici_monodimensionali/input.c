#include <stdlib.h>
#include <stdio.h>

#include "input.h"

void InserimentoNumeroRighe(float matrice[], float matrice2[], int n)
{
int i = 0;

printf("\n===========================================================================\n");
printf("\n\t\tInserire i dati della Matrice numero: %d \n", n);
printf("\n===========================================================================\n");

while(matrice[i] < 1)
    {
    printf("Per Cortesia inserire almeno una Riga ");
    scanf("%f", &matrice[i]);
    }
return;
}

void InserimentoNumeroColonne(float matrice[], float matrice2[])
{
int i = 1;

while(matrice[i] < 1)
    {
    printf("Per Cortesia inserire almeno una Colonna ");
    scanf("%f", &matrice[i]);
    }
return;
}

void InserimentoElementiMatrice(float matrice, float matrice2);
{
int i = 0;
int j = 0;
int k = 2;

while(i < matrice[i])
    {
    while(j < matrice[i + 1])
        {
        printf("Inserire il numero in posizione %d ", j);
        scanf("%f", matrice[i*DIM+j]);
        j = j++;
        }
    }
return;
}

void ControlloMatrice(float matrice[], float matrice2[])
{
int i = 0;

if ((matrice[i] == 1.000000 && matrice[i + 1] == 1.000000) || (matrice2[i] == 1.000000 && matrice2[i + 1] == 1.000000))
    {
    printf("\n\n\n\n\n\n\n********************************************************************************\n");
    printf("\n\tAttenzione una matrice non può essere composta 1 riga ed 1 colonna\n\t\t\tPer cortesia reinserire i dati\n");
    printf("\n********************************************************************************\n\n\n\n\n\n\n\n");
    //main();
    }
return;
}

