#include <stdlib.h>
#include <stdio.h>

#include "ControlloVincoloSommaDueMatrici.h"
#include "MatriceSomma.h"

void ControlloVincoloSommaDueMatrici(float matrice[], float matrice2[], float matrice3[])
{
while(((int)matrice[0] != (int)matrice2[0]) || ((int)matrice[1] != (int)matrice2[1]))
      {
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n==============================ATTENZIONE==================================\n");
       printf("Per sommare 2 matrici, il numero di righe e colonne di entrambe le Matrici devono essere di ugual numero, prego reinserire i dati. ");
       printf("\n==============================ATTENZIONE==================================\n\n\n\n\n\n");
       getchar();
       MatriceSomma(matrice, matrice2, matrice3);
      }
return;
}
