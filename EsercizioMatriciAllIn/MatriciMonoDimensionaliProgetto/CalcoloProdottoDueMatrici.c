#include <stdlib.h>
#include <stdio.h>

#include "CalcoloProdottoDueMatrici.h"

#define DIM 100

void CalcoloProdottoDueMatrici(float matrice[], float matrice2[], float matrice3[])
{
int i = 0;
int j = 0;
int c = 0;
float risulta[DIM] = {0};
float NumeroColonne = matrice[1];
matrice3[0] = matrice[0];
matrice3[1] = matrice[1];

i = 0;
while(i < (int)matrice[0])
    {
        j = 0;
        while(j < (int)matrice[1])
        {
            c = 0;
            while(c < (int)matrice[1])
            {
            risulta[c] = matrice[(i*(int)NumeroColonne+c)+2]*matrice2[(c*(int)NumeroColonne+j)+2];
            matrice3[(i*(int)NumeroColonne+j)+2] = matrice3[(i*(int)NumeroColonne+j)+2] + risulta[c];
            c = c + 1;
            }
        j = j + 1;
        }
    i = i + 1;
    }
return;
}
