#include "input.h"
#include "globale.h"
#include "calcolo.h"
#include "controllo.h"
#include "MatriceMoltiplicazione.h"

void MatriceMoltiplicazione()
{

int n = 0;

float matrice[DIM] = {0};
float matrice2[DIM] = {0};
float matrice3[DIM] = {0};


/* INIZIO BLOCCO DI INPUT*/
n = 1;

InserimentoNumeroRighe(matrice, n);
InserimentoNumeroColonne(matrice);

n = 2;

InserimentoNumeroRighe(matrice2, n);
InserimentoNumeroColonne(matrice2);

n = 1;

printf("\n\n\n\n\n\n\n********************************************************************************\n");
printf("\n\tProcedere all'inserimento dei dati della Matrice numero %d \n", n);
printf("\n********************************************************************************\n\n\n\n\n\n\n\n");

InserimentoElementiMatrice(matrice);

n = 2;

printf("\n\n\n\n\n\n\n********************************************************************************\n");
printf("\n\tProcedere all'inserimento dei dati della Matrice numero %d \n", n);
printf("\n********************************************************************************\n\n\n\n\n\n\n\n");

InserimentoElementiMatrice(matrice2);

/* FINE BLOCCO DI INPUT*/

/* INIZIO BLOCCO DI CALCOLO */
ControlloMatrice(matrice, matrice2);

//CalcoloProdottoDueMatrici(matrice, matrice2, matrice3);

/* FINE BLOCCO DI CALCOLO*/

return;
}
