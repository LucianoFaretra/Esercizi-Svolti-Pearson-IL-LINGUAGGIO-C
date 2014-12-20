/*
Il seguente programma stampa il maggiore ed il minore di 3 interi
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//Inizio Funzione Main
    int numero;

    printf("%s", "Inserire il numero e premere invio per vedere se e' pari o dispari: ");
    scanf("%d", &numero);

    if(numero % 2 == 0)
        {
            printf("%s", "\nil numero è pari.\n");
        }
    if(numero % 2 != 0)
        {
            printf("%s", "Il numero e' dispari.\n");
        }

return 0;//La Funzione main restituisce 0 in caso di esito positivo
}//Fine Funzione Main


