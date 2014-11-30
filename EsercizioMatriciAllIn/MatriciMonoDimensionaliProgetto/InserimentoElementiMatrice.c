#include <stdlib.h>
#include <stdio.h>

#include "InserimentoElementiMatrice.h"

void InserimentoElementiMatrice(float matrice[])
{
int i;
int j;
float NumeroColonne = matrice[1];

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
        scanf("%f", &matrice[(i*(int)NumeroColonne+j)+2]);
        j++;
        }
    i++;
    }
return;
}
