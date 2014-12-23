/*                 Sviluppato da Luciano Faretra 23/12/2014 rilasciato sotto licenza GNUv3
                                CIclo infinito multipli di 2

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    INTERO                      Numero base da moltiplicare                              unsigend int > 0

    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    multiplo                    Multiplo del numero INTERO                               unsigned int > 0

    DATI DI LAVORO              DESCRIZIONE                                              DOMINIO

   */
#include <stdlib.h>
#include <stdio.h>
#define INTERO 2

int main(void)
{//inizio funzione main

    unsigned int multiplo = (unsigned int)INTERO;


    while( multiplo != 0){
        multiplo = multiplo * (unsigned int)INTERO;
        printf("Ecco il multipli di %u: %u\n", (unsigned int)INTERO, multiplo);
    }//Impossibile soddisfare, quindi LOOP infinito

return 0;
}//Fine funzione main
