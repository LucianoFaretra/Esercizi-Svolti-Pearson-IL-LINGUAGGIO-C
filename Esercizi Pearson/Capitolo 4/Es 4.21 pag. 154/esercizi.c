/*                 Sviluppato da Luciano Faretra 28/12/2014 rilasciato sotto licenza GNUv3
                                    Modifica esercizio figura 4.2
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    counter                         Stampa i numeri da uno a 10                                     unsigned intero > 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    counter                         Conta i numeri da uno a 10                                      unsigned intero > 0


    1. Stampa i numeri da uno a 10


    1.1

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned int counter = 1;

    for( counter; counter <= 10; counter++ ){
        printf( "%u\n", counter );
    }

return 0;
}//Fine funzione main
