#include <stdlib.h>
#include <stdio.h>

#include "ControlloVincoloProdottoDueMatrici.h"
#include "MatriceMoltiplicazione.h"

void ControlloVincoloProdottoDueMatrici(float matrice[], float matrice2[], float matrice3[])
{
while((int)matrice[1] != (int)matrice2[0])
      {
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n==============================ATTENZIONE==================================\n");
       printf("Per moltiplicare 2 matrici, le righe della matrice moltiplicare devono essere pari alle colonne della matrice moltiplicante, premere un tasto per tornare alla schermata di selezione");
       printf("\n==============================ATTENZIONE==================================\n\n\n\n\n\n");
       getchar();
       MatriceMoltiplicazione(matrice, matrice2, matrice3);
      }
}
