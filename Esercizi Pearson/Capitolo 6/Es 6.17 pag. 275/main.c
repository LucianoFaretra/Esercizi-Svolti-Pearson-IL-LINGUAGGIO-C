/*                 Sviluppato da Luciano Faretra 03/01/2015 rilasciato sotto licenza GNUv3
                                        Cosa stampa?

****************************************************************************************************************

*****************************************************************************************************************

*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 10

int whatIsThis( const int b[], size_t p );

int main()
{

    int x;

    int a[ SIZE ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    x = whatIsThis( a, SIZE );

    printf( "Result is %d\n", x );

return 0;
}

int whatIsThis( const int array[], size_t grandezzaArray )
{
    if( 1 == grandezzaArray ){
        return array[0];
    }
    else{
        return array[ grandezzaArray - 1 ] + whatIsThis( array, grandezzaArray - 1 );
    }
return 0;
}
