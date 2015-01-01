/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Modifica esercizio 5.18

*/

#include <stdlib.h>
#include <stdio.h>

    unsigned long long int factorial( unsigned int number );


int main(void)
{//inizio funzione main

    unsigned int i;

    for ( i = 0; i <= 21; ++i ){
        printf( "%u! = %llu\n", i, factorial( i ) );
    }

return 0;
}//Fine funzione main

unsigned long long int factorial( unsigned int number )
{
    unsigned long long int fibonacci;

    if( number <= 1){
        return 1;
    }
    else{
         fibonacci = ( number * factorial( number - 1 ) );
        printf("\t%llu\n", fibonacci);
        return fibonacci;
    }
}
