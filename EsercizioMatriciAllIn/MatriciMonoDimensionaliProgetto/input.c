#include "input.h"
#include "globale.h"

void InserimentoNumeroRighe(float matrice[], int n)
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

void InserimentoNumeroColonne(float matrice[])
{
int i = 1;

while(matrice[i] < 1)
    {
    printf("Per Cortesia inserire almeno una Colonna ");
    scanf("%f", &matrice[i]);
    }
return;
}

void InserimentoElementiMatrice(float matrice[])
{
int i;
int j;

i = 0;
while(i < matrice[0])
    {
    j = 0;
    while(j < matrice[1])
        {
        printf("Inserire il numero in posizione Riga: ");
        printf("%d", i + 1);
        printf(" e Colonna: ");
        printf("%d", j + 1);
        printf(" e premere invio. ");
        scanf("%f", &matrice[(i*DIM+j)+2]);
        j++;
        }
    i++;
    }
return;
}
