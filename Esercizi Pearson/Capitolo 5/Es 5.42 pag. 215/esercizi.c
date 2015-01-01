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

int main(void)
{//inizio funzione main

    int c;

    if( ( c = getchar() ) != EOF ){
        main();
        printf( "%c", c );
    }

return 0;
}//Fine funzione main
