/*
Il seguente programma riceve un numero di cinque caratteri e li stampa in cifre singole
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//Inizio Funzione Main
    int numero = 0;

    printf("%s", "Prego inserire un intero di 5 cifre: ");

    scanf("%d", &numero);

    printf("%d\t", (numero / 10000));
    printf("%d\t", ((numero % 10000) / 1000));
    printf("%d\t", ((numero % 1000) / 100));
    printf("%d\t", ((numero % 100) / 10));
    printf("%d\t", ((numero % 10) / 1));

return 0;//La Funzione main restituisce 0 in caso di esito positivo
}//Fine Funzione Main


