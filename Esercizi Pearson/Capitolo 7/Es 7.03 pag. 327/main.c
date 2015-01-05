/*                 Sviluppato da Luciano Faretra 04/01/2015 rilasciato sotto licenza GNUv3
                                    Esercizio 7.3
    Affinamento Top Down


    INPUT                           DESCRIZIONE                                                     DOMINIO


    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.

    */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int main()
{
    float numbers[SIZE] = { 0.0, 1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9 };
    float *nPtr = NULL;
    size_t i;

    puts("");
    printf( "%s", "Stampa array con indice.\n" );
    for(i = 0; i < SIZE; ++i){
        printf("%.1f ", numbers[i]);
    }
    puts("");

    nPtr = &numbers[0];
    nPtr = numbers;

    printf( "%s", "Stampa nPtr = &numbers[0] con puntatore/offset.\n" );
     for(i = 0; i < SIZE; ++i){
        printf("%.1f ", *( nPtr + i ) );
    }
    puts("");

    printf( "%s", "Stampa numbers[SIZE] con puntatore/offset.\n" );
     for(i = 0; i < SIZE; ++i){
        printf("%.1f ", *( numbers + i ) );
    }

    puts("");

    printf( "%s", "Stampa nPtr con indice.\n" );
     for(i = 0; i < SIZE; ++i){
        printf("%.1f ", nPtr[ i ] );
    }
/*
    puts("");
    printf("%p\n", numbers);
    printf("%p\n", nPtr);
*/
    puts("");
    puts("Stampa l'elemento 4");
    printf("%.1f\n", numbers[4]);
    printf("%.1f\n", *( numbers + 4 ) );
    printf("%.1f\n", nPtr[4] );
    printf("%.1f\n", *( nPtr + 4 ) );

    return 0;
}

