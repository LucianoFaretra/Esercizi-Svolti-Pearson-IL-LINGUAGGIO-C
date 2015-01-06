/*                 Sviluppato da Luciano Faretra 05/01/2015 rilasciato sotto licenza GNUv3
                                        Esercizio 7.19

*/

#include <stdlib.h>
#include <stdio.h>
#define SIZE 80

int mystery2( const char *s );

int main( void )
{
 	char string[ SIZE ];

 	puts( "Enter a string: " );
 	scanf( "%79s", string );
 	printf( "%d\n", mystery2( string ) );

return 0;
}

int mystery2( const char *s )
{
    int x;

    x = 0;
    while( *s != '\0' ){
        ++x;
        ++s;
    }

return x;
}
