#include <stdlib.h>
#include <stdio.h>

#include "MatriceMoltiplicazione.h"
#include "StampaMatriceRisulta.h"

#define DIM 100

int main()
{
float matrice[DIM] = {0};
float matrice2[DIM] = {0};
float matrice3[DIM] = {0};

MatriceMoltiplicazione(matrice, matrice2, matrice3);

StampaMatriceRisulta(matrice3);
return 0;
}
