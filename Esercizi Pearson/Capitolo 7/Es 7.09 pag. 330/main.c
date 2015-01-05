/*                 Sviluppato da Luciano Faretra 04/01/2015 rilasciato sotto licenza GNUv3
                                    Esercizio 7.9
    Affinamento Top Down


    INPUT                           DESCRIZIONE                                                     DOMINIO


    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.

    */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5


int main()
{
    unsigned int values[SIZE] = { 2, 4, 6, 8, 10 };
    unsigned int *vPtr;
    int i;


    for(i = 0; i < SIZE; i++){
        printf("%u", values[i]);
    }
    puts("");

    vPtr = values;
    vPtr = &values[0];

    puts("");
    for(i = 0; i < SIZE; i++){
        printf("%u", *( vPtr + i ));
    }
    puts("");

    for(i = 0; i < SIZE; i++){
        printf("%u", *( values + i ));
    }
    puts("");

      for(i = 0; i < SIZE; i++){
        printf("%u", vPtr[i]);
    }
    puts("");

    printf("%u\n", values[4]);
    printf("%u\n", *( values + 4 ));
    printf("%u\n", vPtr[4]);
    printf("%u\n", *(vPtr + 4));


    return 0;
}
