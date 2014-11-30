#include <stdlib.h>
#include <stdio.h>

#include "InserimentoRigheEColonne.h"
#include "CalcoloSommaDueMatrici.h"
#include "MatriceSomma.h"
#include "InserimentoElementiMatrice.h"
#include "ControlloVincoloSommaDueMatrici.h"

void MatriceSomma(float matrice[], float matrice2[], float matrice3[])
{

int n = 0;

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

/* INIZIO BLOCCO CONTROLLO VINCOLO PRODOTTO DUE MATRICI*/
ControlloVincoloSommaDueMatrici(matrice, matrice2, matrice3);
/* FINE BLOCCO CONTROLLO VINCOLO PRODOTTO DUE MATRICI*/

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
CalcoloSommaDueMatrici(matrice, matrice2, matrice3);
/* FINE BLOCCO DI CALCOLO*/

return;
}
