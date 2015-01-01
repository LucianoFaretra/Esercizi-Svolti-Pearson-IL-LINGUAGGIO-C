/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Main ricorsivo

                                    Affinamento Top Down

       ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    count                           Contatore che aumenta ad ogni call                              unsigned int >= 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    count                           Mostra gli incrementi del contatore                             unsigned int >= 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

    Inizializza count a 1
    count ++
    Stampa count
    main()


*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    static unsigned int count = 1;

    count++;
    printf( "%u\n", count);
    main();

return 0;
}//Fine funzione main
