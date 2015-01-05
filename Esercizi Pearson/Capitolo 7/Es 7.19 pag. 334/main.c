/*                 Sviluppato da Luciano Faretra 05/01/2015 rilasciato sotto licenza GNUv3
                                        Esercizio 7.19

*/

#include <stdlib.h>
#include <stdio.h>
#define SIZE 80

void mystery1( char *s1, const char *s2 );

int main( void )
{
 	char string1[ SIZE ];
 	char string2[ SIZE ];

 	puts( "Enter two dtrings; " );
 	scanf( "%79s%79s", string1, string2 );
 	mystery1( string1, string2 );
 	printf( "%s", string1 );

return 0;
}

void mystery1( char *s1, const char *s2 )
{
    while( *s1 != '\0' ){
        ++s1;
    }

    while(*s1 = *s2){
        ++s1, ++s2;
    }

return;
}
