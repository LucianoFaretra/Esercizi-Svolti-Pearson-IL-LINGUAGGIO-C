#include <stdio.h>
#include <stdlib.h>

#include "input.h"


int main()
{
int i = 0;
int n = 1;

float matrice[DIM] = {0};
float matrice2[DIM] = {0};

/* INIZIO BLOCCO DI INPUT*/
InserimentoNumeroRighe(matrice, n);
InserimentoNumeroColonne(matrice, n);

n = 2;

InserimentoNumeroRighe(matrice2, n);
InserimentoNumeroColonne(matrice2, n);
/* FINE BLOCCO DI INPUT*/

/* INIZIO BLOCCO DI CONTROLLO */
ControlloMatrice(matrice, matrice2);
/* FINE BLOCCO DI CONTROLLO*/

return 0;
}
