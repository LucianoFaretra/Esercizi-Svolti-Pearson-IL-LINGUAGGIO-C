#include <stdlib.h>
#include <stdio.h>

#include "CalcoloMatriceTrasposta.h"

void CalcoloMatriceTrasposta(float matrice[], float matrice3[])
{
int i = 0;
int j = 0;
int k = 0;
matrice3[0] = matrice[1];
matrice3[1] = matrice[0];
float NumeroColonne = matrice3[1];

while(i < matrice[0])
    {
        j = 0;
        while(j < matrice[1])
        {
            matrice3[((j*(int)NumeroColonne)+i)+2] = matrice[(k + 2)];
            j = j + 1;
            k = k + 1;
        }
    i = i + 1;
    }
return;
}
