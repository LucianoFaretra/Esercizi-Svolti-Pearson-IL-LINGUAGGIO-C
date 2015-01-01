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

int mystery( int a, int b );

int main(void)
{//inizio funzione main

    int x;
    int y;

    do{
        printf( "%s", "Enter two positive integers: " );
        scanf( "%d%d", &x, &y );

        if( y <= 0 || x <= 0){
            printf("%s", "Sono accettati solo valore maggiori di 0, ripetere l'inserimento\n");
        }
    }while(y >= 1 && x >= 1);

    printf( "The result id %u\n", mystery( x, y ) );

return 0;
}//Fine funzione main

int mystery( int a, int b )
{
    if( 1 == b ){
        return a;
    }
    else{
        return a + mystery( a, b - 1 );
    }
}

