/*                 Sviluppato da Luciano Faretra 02/01/2015 rilasciato sotto licenza GNUv3
                                    Bubble Sort Modificato

****************************************************************************************************************

    INPUT                           DESCRIZIONE                                                     DOMINIO
    array                           Array monodimensionale da ordinare                              double
    grandezzaArray                  Grandezza dell'array                                            unsigned int

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    array                           Array monodimensionale ordinata in ordine alfabbetico           double

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

*****************************************************************************************************************

    1. Inserisci un'array monodimensionale e la ordina in modo crescente

*/

#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"
#define SIZE 10
int main( void )
{
    int a[SIZE] = { 2, 6, 4, 8, 10, 12, 89, 68, 45, 37 };
    size_t i;

    puts("Dati nell'ordine originario");

    for( i = 0; i < SIZE; ++i ){
        printf( "%4d", a[i] );
    }

    bubbleSort(a, SIZE);

    puts("\nDati ordinati in modo crescente");

    for( i = 0; i < SIZE; ++i ){
        printf( "%4d", a[i] );
    }

    puts("");

    return 0;
}
