/*                 Sviluppato da Luciano Faretra 04/01/2015 rilasciato sotto licenza GNUv3
                                    Esercizio 7.4
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
    float *fPtr;
    float number1 = 5;
    float number2;

    fPtr = &number1;

    printf("%f", *fPtr);
    puts("");

    number2 = *fPtr;
    printf("%f", number2);
    puts("");

    printf("%p\n", &number1);
    printf("%p\n", fPtr);

    return 0;
}

