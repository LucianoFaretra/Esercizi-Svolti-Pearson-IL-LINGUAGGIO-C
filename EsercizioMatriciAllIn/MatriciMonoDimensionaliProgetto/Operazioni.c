#include <stdlib.h>
#include <stdio.h>

#include "DatiGlobali.h"
#include "Operazioni.h"
#include "InputOutput.h"
#include "AccessoAiDati.h"

void MatriceTrasposta(float matrice[], float matrice3[])
{
int n = 0;
int i = 0;
int j = 0;
float valore = 0;
int righe = 0;
int colonne = 0;

/* INIZIO BLOCCO DI INPUT*/
n = 1;//Prima Matrice

InserimentoNumeroRigheEColonne(matrice, n);
/* FINE BLOCCO DI INPUT*/


/* INIZIO BLOCCO INSERIMENTO ELEMENTI MATRICE*/
n = 1;//Prima Matrice

printf("\n\n\n\n\n\n\n********************************************************************************\n");
printf("\n\tProcedere all'inserimento dei dati della Matrice numero %d \n", n);
printf("\n********************************************************************************\n\n\n\n\n\n\n\n");
InserimentoElementiMatrice(matrice);
/* FINE BLOCCO INSERIMENTO ELEMENTI MATRICE*/

/* INIZIO BLOCCO DI CALCOLO*/
valore = LetturaElemento(matrice, righe, colonne);
colonne++;
ScrivereElemento(matrice3, righe, colonne, valore);

valore = LetturaElemento(matrice, righe, colonne);
colonne=0;
ScrivereElemento(matrice3, righe, colonne, valore);



i = 0;
while(i < LetturaElemento(matrice, righe, colonne))
    {
        j = 0;
        while(j < LetturaElemento(matrice, righe, colonne+1))
        {
            valore = LetturaElemento(matrice, i, j+2);
            ScrivereElemento(matrice3, j, i+2, valore);
            j++;
        }
    i++;
    }
/* FINE BLOCCO DI CALCOLO*/
return;
}

void MatriceMoltiplicazione(float matrice[], float matrice2[], float matrice3[])
{

int n = 0;
int i = 0;
int j = 0;
int c = 0;
int righe = 0;
int colonne = 0;
float valore = 0;

float risulta[DIM] = {0};

while(LetturaElemento(matrice, righe, colonne+1) != LetturaElemento(matrice2, righe, colonne) || (LetturaElemento(matrice, righe, colonne) == 0 || LetturaElemento(matrice2, righe, colonne) == 0) || (LetturaElemento(matrice, righe, colonne+1) == 0 || LetturaElemento(matrice2, righe, colonne+1) == 0))
      {
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n==============================ATTENZIONE==================================\n");
       printf("Per sommare 2 matrici, il numero di righe e colonne di entrambe le Matrici devono essere di ugual numero, prego reinserire i dati. ");
       printf("\n==============================ATTENZIONE==================================\n\n\n\n\n\n");
/* INIZIO BLOCCO DI INPUT*/
        n = 1;//Prima Matrice

        InserimentoNumeroRigheEColonne(matrice, n);

        n = 2;//Seconda Matrice

        InserimentoNumeroRigheEColonne(matrice2, n);
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

CopiaIndici(matrice, matrice3);

i = 0;
while(i < LetturaElemento(matrice, righe, colonne))
    {
        j = 0;
        while(j < LetturaElemento(matrice, righe, colonne+1))
        {
            c = 0;
            while(c < LetturaElemento(matrice, righe, colonne+1))
            {
            risulta[c] = LetturaElemento(matrice, i, c+2)*LetturaElemento(matrice2, c, j+2);
            valore = LetturaElemento(matrice3, i, j+2) + risulta[c];
            ScrivereElemento(matrice3, i, j+2, valore);
            c++;
            }
        j++;
        }
    i++;
    }
/* FINE BLOCCO DI CALCOLO*/

return;
}

void ProdottoScalare(float matrice[], float matrice3[])
{
int n = 0;
int i = 0;
int j = 0;
float valore = 0;
float scalare = InserimentoScalare();
int righe = 0;
int colonne = 0;

/* INIZIO BLOCCO DI INPUT*/
n = 1;//Prima Matrice

InserimentoNumeroRigheEColonne(matrice, n);
/* FINE BLOCCO DI INPUT*/


/* INIZIO BLOCCO INSERIMENTO ELEMENTI MATRICE*/
n = 1;//Prima Matrice

printf("\n\n\n\n\n\n\n********************************************************************************\n");
printf("\n\tProcedere all'inserimento dei dati della Matrice numero %d \n", n);
printf("\n********************************************************************************\n\n\n\n\n\n\n\n");
InserimentoElementiMatrice(matrice);
/* FINE BLOCCO INSERIMENTO ELEMENTI MATRICE*/

/* INIZIO BLOCCO DI CALCOLO*/

CopiaIndici(matrice, matrice3);

while(i < LetturaElemento(matrice, righe, colonne))
    {
        j = 0;
        while(j < LetturaElemento(matrice, righe, colonne+1))
        {
            valore = LetturaElemento(matrice, i, j+2) * scalare;
            ScrivereElemento(matrice3, i, j+2, valore);
            j++;
        }
    i++;
    }
return;
}

void MatriceSomma(float matrice[], float matrice2[], float matrice3[])
{

int n = 0;
int i = 0;
int j = 0;
float valore = 0;
int righe = 0;
int colonne = 0;

while(LetturaElemento(matrice, righe, colonne) != LetturaElemento(matrice2, righe, colonne) || LetturaElemento(matrice, righe, colonne+1) != LetturaElemento(matrice2, righe, colonne+1))
        {
       printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n==============================ATTENZIONE==================================\n");
       printf("Per sommare 2 matrici, il numero di righe e colonne di entrambe le Matrici devono essere di ugual numero, prego reinserire i dati. ");
       printf("\n==============================ATTENZIONE==================================\n\n\n\n\n\n");
/* INIZIO BLOCCO DI INPUT*/
       n = 1;//Prima Matrice

        InserimentoNumeroRigheEColonne(matrice, n);

        n = 2;//Seconda Matrice

        InserimentoNumeroRigheEColonne(matrice2, n);
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

CopiaIndici(matrice, matrice3);

while(i < LetturaElemento(matrice, righe, colonne))
    {
        j = 0;
        while(j < LetturaElemento(matrice, righe, colonne+1))
        {
            valore = LetturaElemento(matrice, i, j+2) + LetturaElemento(matrice2, i, j+1);
            ScrivereElemento(matrice3, i, j+2, valore);
            j++;
        }
    i++;
    }
/* FINE BLOCCO DI CALCOLO*/

return;
}

void CopiaIndici(float matrice[], float matrice3[])
{
int righe = 0;
int colonne = 0;
float valore = 0;

valore = LetturaElemento(matrice, righe, colonne);
ScrivereElemento(matrice3, righe, colonne, valore);

colonne++;

valore = LetturaElemento(matrice, righe, colonne);
ScrivereElemento(matrice3, righe, colonne, valore);

return;
}
