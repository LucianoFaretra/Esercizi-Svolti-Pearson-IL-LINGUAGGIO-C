#include <stdlib.h>
#include <stdio.h>

#include "CalcoloProdottoScalare.h"

void CalcoloProdottoScalare(float matrice[], float matrice3[], float scalare)
{
int i = 0;
int j = 0;
matrice3[0] = matrice[0];
matrice3[1] = matrice[1];
float NumeroColonne = matrice[1];

while(i < matrice[0])
    {
        j = 0;
        while(j < matrice[1])
        {
            matrice3[((i*(int)NumeroColonne)+j)+2] = matrice[((i*(int)NumeroColonne)+j)+2] * scalare;
            j = j + 1;
        }
    i = i + 1;
    }
return;
}
