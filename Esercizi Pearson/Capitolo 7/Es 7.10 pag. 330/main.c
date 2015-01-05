/*                 Sviluppato da Luciano Faretra 04/01/2015 rilasciato sotto licenza GNUv3
                                    Esercizio 7.10
    Affinamento Top Down


    INPUT                           DESCRIZIONE                                                     DOMINIO


    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.

    */

#include <stdio.h>
#include <stdlib.h>


int main()
{
    long int value1 = 200000;
    long int value2;
    long int *lPtr;

    lPtr = &value1;
    value2 = *lPtr;

    printf("%ld\n", value2);
    printf("%p\n", &value1);
    printf("%p\n", lPtr);


    return 0;
}
