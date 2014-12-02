#include <stdlib.h>
#include <stdio.h>

#include "DatiGlobali.h"
#include "AccessoAiDati.h"

void ScrivereElemento(float matrice[], int i, int j, float valore) //i è il valore da inserire
{//scrive il primo elemento nella matrice
matrice[(i*(int)matrice[1]+j)] = valore;

return;
}

float LetturaElemento(float matrice[], int i, int j) //restituisce il valore
{//legge il primo elemento nella matrice

return matrice[(i*(int)matrice[1]+j)];
}


/*printf("%d\n", matrice[(0*(int)matrice[1]+2)]);
printf("%d\n", matrice[(0*(int)matrice[1]+3)]);
printf("%d\n", matrice[(1*(int)matrice[1]+2)]);
printf("%d\n", matrice[(1*(int)matrice[1]+3)]);*/


/*
void ScrivereElemento(float matrice[], int i, int j, float valore); //i è il valore da inserire
{//scrive il primo elemento nella matrice
matrice[i][j] = valore;
return;
}

void LetturaElemento(float matrice[], int i, int j); //restituisce il valore
{//legge il primo elemento nella matrice
return matrice[i][j];
}
*/

/*
matrice[DIM-1][DIM-2] = righe
diventa
scrivereElemento(matrice, DIM - 1, DIM - 2, righe)


//Mono dimensione
scrivere   matrice[i*DIM*j]=v
leggere    return m[n*DIM+c]


//puntatore
float *matrice1

*(m+(n*DIM+c))=v;
*/
//laboratori 15-17-22  e 7 gennaio

