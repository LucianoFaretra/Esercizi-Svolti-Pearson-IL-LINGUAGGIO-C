/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Cosa fa il programma?

                                    Affinamento Top Down

       ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


*/

#include <stdlib.h>
#include <stdio.h>

unsigned int mystery( unsigned int a, unsigned int b );

int main(void)
{//inizio funzione main

    unsigned int x;
    unsigned int y;

    printf( "%s", "Enter two positive integers: " );
    scanf( "%u%u", &x, &y );



    printf( "The result is %u\n", mystery( x, y ) );

return 0;
}//Fine funzione main

int mystery( unsigned int a, unsigned int b )
{
    if( 1 == b ){
        return a;
    }
    else{
        return a + mystery( a, b - 1 );
    }
}

