#include <stdio.h>

#include "InserimentoRigheEColonne.h"
#include "CalcoloMatriceTrasposta.h"
#include "MatriceTrasposta.h"
#include "InserimentoElementiMatrice.h"

void MatriceTrasposta(float matrice[], float matrice3[])
{
int n = 0;

/* INIZIO BLOCCO DI INPUT*/
n = 1;//Prima Matrice

InserimentoNumeroRighe(matrice, n);
InserimentoNumeroColonne(matrice);
ControlloMatrice(matrice, n);
/* FINE BLOCCO DI INPUT*/


/* INIZIO BLOCCO INSERIMENTO ELEMENTI MATRICE*/
n = 1;//Prima Matrice

printf("\n\n\n\n\n\n\n********************************************************************************\n");
printf("\n\tProcedere all'inserimento dei dati della Matrice numero %d \n", n);
printf("\n********************************************************************************\n\n\n\n\n\n\n\n");
InserimentoElementiMatrice(matrice);
/* FINE BLOCCO INSERIMENTO ELEMENTI MATRICE*/

/* INIZIO BLOCCO DI CALCOLO*/
CalcoloMatriceTrasposta(matrice, matrice3);
/* FINE BLOCCO DI CALCOLO*/

return;
}
