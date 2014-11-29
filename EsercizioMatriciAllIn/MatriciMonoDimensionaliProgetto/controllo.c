#include "globale.h"
#include "controllo.h"
#include "input.h"

void ControlloMatrice(float matrice[], float matrice2[])
{
int i = 0;

if ((matrice[i] == 1.000000 && matrice[i + 1] == 1.000000) || (matrice2[i] == 1.000000 && matrice2[i + 1] == 1.000000))
    {
    printf("\n\n\n\n\n\n\n********************************************************************************\n");
    printf("\n\tAttenzione una matrice non può essere composta 1 riga ed 1 colonna\n\t\t\tPer cortesia reinserire i dati\n");
    printf("\n********************************************************************************\n\n\n\n\n\n\n\n");
    }
return;
}
