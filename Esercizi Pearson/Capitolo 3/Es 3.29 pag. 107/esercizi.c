/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                        Cosa stampa l'esercizio
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned int row = 10;
    unsigned int column;

    while ( row >= 1 ){
        column = 1;

        while( column <= 10 ) {

            printf( "%s", row % 2 ? "<" : ">" );
            ++column;
        }

        --row;
        puts( "" );
    }
return 0;
}//Fine funzione main
