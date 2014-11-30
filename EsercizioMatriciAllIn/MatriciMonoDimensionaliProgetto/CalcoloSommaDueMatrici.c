#include <stdlib.h>
#include <stdio.h>

#include "CalcoloSommaDueMatrici.h"

void CalcoloSommaDueMatrici(float matrice[], float matrice2[], float matrice3[])
{
int i = 0;
int j = 0;
matrice3[0] = matrice[0];
matrice3[1] = matrice[1];
int NumeroColonne = (int)matrice3[1];

while(i < matrice[0])
    {
        j = 0;
        while(j < matrice[1])
        {
            matrice3[((i*(int)NumeroColonne)+j)+2] = matrice[((i*(int)NumeroColonne)+j)+2] + matrice2[((i*(int)NumeroColonne)+j)+2];
            j = j + 1;
        }
    i = i + 1;
    }
return;
}
