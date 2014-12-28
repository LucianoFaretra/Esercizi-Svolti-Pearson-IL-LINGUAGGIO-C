/*                 Sviluppato da Luciano Faretra 27/12/2014 rilasciato sotto licenza GNUv3
                                        Somma interi pari

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    NUMEROPARTENZA                  Numero da cui far partire il conteggio                          numero intero
    NUMEROFINALE                    Numero in cui far terminare il conteggio                        numero intero

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    sommaInteri                     Somma degli interi pari tra NUMEROPARTENZA e NUMEROFINALE       numero intero

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreControlli             Contatore per controllare quanti numeri sono stati controlalti   unsigned int


    1. Somma i numeri pari tra il numero 2 e il numero 30 e lo stampa a video

    1.1 Inizializza sommaInteri a 0
        Per contatoreControlli = 2; finchè contatoreControlli <= NUMEROFINALE; incrementa contatoreControlli di DIVISOREPARI
            sommaInteri += contatoreControlli
        Fine Per

        Stampa: "La somma degli interi pari da 'NUMEROPARTENZA' a 'NUMEROFINALE' e' pari a: 'sommaInteri'"

*/

#include <stdlib.h>
#include <stdio.h>
#define NUMEROPARTENZA 2
#define NUMEROFINALE 30

int main(void)
{//inizio funzione main

    int sommaInteri = 0;
    int contatoreControlli = 0;

    for( contatoreControlli = 2; contatoreControlli <= (int)NUMEROFINALE; contatoreControlli += 2 ){
        sommaInteri += contatoreControlli;
    }

    printf( "La somma degli interi pari da %u a %u e' pari a: %d", (unsigned int)NUMEROPARTENZA, (unsigned int)NUMEROFINALE, (int)sommaInteri );


return 0;
}//Fine funzione main
