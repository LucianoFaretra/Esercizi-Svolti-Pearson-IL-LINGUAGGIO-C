#include <stdlib.h>
#include <stdio.h>

#include "StampaMatriceRisulta.h"

void StampaMatriceRisulta(float matrice[])
{
int i;
int j;
float NumeroColonne = matrice[1];

printf("\n===========================================================================\n");
printf("La matrice di risulta è :\n");
i = 0;
while(i < matrice[0])
    {
    j = 0;
    while(j < matrice[1])
        {
        printf("%.2f\t", matrice[(i*(int)NumeroColonne+j)+2]);
        j++;
        }
    printf("\n");
    i++;
    }
printf("\n===========================================================================\n");
getchar();
return;
}
