#include <stdlib.h>
#include <stdio.h>

#include "InserimentoRigheEColonne.h"
#include "CalcoloProdottoDueMatrici.h"
#include "MatriceMoltiplicazione.h"
#include "InserimentoElementiMatrice.h"

void MatriceMoltiplicazione(float matrice[], float matrice2[], float matrice3[])
{

int n = 0;

while((int)matrice[1] != (int)matrice2[0] || ((int)matrice[0] == 0 || (int)matrice2[0] == 0) || ((int)matrice[1] == 0 || (int)matrice2[1] == 0))
      {
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n==============================ATTENZIONE==================================\n");
       printf("Per sommare 2 matrici, il numero di righe e colonne di entrambe le Matrici devono essere di ugual numero, prego reinserire i dati. ");
       printf("\n==============================ATTENZIONE==================================\n\n\n\n\n\n");
/* INIZIO BLOCCO DI INPUT*/
       n = 1;//Prima Matrice

        InserimentoNumeroRighe(matrice, n);
        InserimentoNumeroColonne(matrice);
        ControlloMatrice(matrice, n);

        n = 2;//Seconda Matrice

        InserimentoNumeroRighe(matrice2, n);
        InserimentoNumeroColonne(matrice2);
        ControlloMatrice(matrice2, n);
/* FINE BLOCCO DI INPUT*/
      }

/* INIZIO BLOCCO INSERIMENTO ELEMENTI MATRICE*/
n = 1;//Prima Matrice

printf("\n\n\n\n\n\n\n********************************************************************************\n");
printf("\n\tProcedere all'inserimento dei dati della Matrice numero %d \n", n);
printf("\n********************************************************************************\n\n\n\n\n\n\n\n");
InserimentoElementiMatrice(matrice);

n = 2;//Seconda Matrice

printf("\n\n\n\n\n\n\n********************************************************************************\n");
printf("\n\tProcedere all'inserimento dei dati della Matrice numero %d \n", n);
printf("\n********************************************************************************\n\n\n\n\n\n\n\n");
InserimentoElementiMatrice(matrice2);
/* FINE BLOCCO INSERIMENTO ELEMENTI MATRICE*/

/* INIZIO BLOCCO DI CALCOLO*/
CalcoloProdottoDueMatrici(matrice, matrice2, matrice3);
/* FINE BLOCCO DI CALCOLO*/

return;
}
