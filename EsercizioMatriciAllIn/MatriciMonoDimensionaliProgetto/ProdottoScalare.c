#include <stdlib.h>
#include <stdio.h>

#include "InserimentoRigheEColonne.h"
#include "CalcoloProdottoScalare.h"
#include "ProdottoScalare.h"
#include "InserimentoElementiMatrice.h"

void ProdottoScalare(float matrice[], float matrice3[])
{
int n = 0;
float scalare = 0;

/* INIZIO BLOCCO DI INPUT*/
n = 1;//Prima Matrice

InserimentoNumeroRighe(matrice, n);
InserimentoNumeroColonne(matrice);
ControlloMatrice(matrice, n);

printf("\nInserire il valore Scalare e premere INVIO ");
scanf("%f", &scalare);
/* FINE BLOCCO DI INPUT*/


/* INIZIO BLOCCO INSERIMENTO ELEMENTI MATRICE*/
n = 1;//Prima Matrice

printf("\n\n\n\n\n\n\n********************************************************************************\n");
printf("\n\tProcedere all'inserimento dei dati della Matrice numero %d \n", n);
printf("\n********************************************************************************\n\n\n\n\n\n\n\n");
InserimentoElementiMatrice(matrice);
/* FINE BLOCCO INSERIMENTO ELEMENTI MATRICE*/

/* INIZIO BLOCCO DI CALCOLO*/
CalcoloProdottoScalare(matrice, matrice3, scalare);
/* FINE BLOCCO DI CALCOLO*/

return;
}

