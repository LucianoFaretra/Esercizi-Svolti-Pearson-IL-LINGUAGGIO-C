/*                 Sviluppato da Luciano Faretra 02/01/2015 rilasciato sotto licenza GNUv3
                                        Esercizio 6.3

*/

#include <stdlib.h>
#include <stdio.h>
#define SIZE 10

int main(void)
{//inizio funzione main

    double fractions[SIZE] = {0};
    size_t x; //ciclo per l'array

   // fractions[4] //Elemento 4 (non quarto) dell'array fractions

    fractions[9] = 1.667;

    fractions[6] = 3.333;

    printf( "%.2f - %.2f", fractions[6], fractions[9] );

    for( x = 0; x < SIZE; ++x ){
        printf("%f\n", fractions[x] );
    }


return 0;
}//Fine funzione main
