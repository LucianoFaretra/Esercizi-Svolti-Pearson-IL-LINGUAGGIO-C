/*                 Sviluppato da Luciano Faretra 27/12/2014 rilasciato sotto licenza GNUv3
                                    Calcola il prodotto di numeri interi dispari

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    NUMEROPARTENZA                  Numero da cui far partire il conteggio                          numero intero
    NUMEROFINALE                    Numero in cui far terminare il conteggio                        numero intero

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    prodottoInteri                  Prodotto degli interi pari tra NUMEROPARTENZA e NUMEROFINALE    numero intero

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreControlli             Contatore per controllare quanti numeri sono stati controlalti   unsigned int


    1. Calcola il prodotto dei numeri dispari tra il numero 1 e il numero 15 e lo stampa a video

    1.1 Inizializza prodottoInteri a 1
        Per contatoreControlli = 1; finchè contatoreControlli <= NUMEROFINALE; incrementa contatoreControlli di 2
            prodottoInteri *= contatoreControlli
        Fine Per

        Stampa: "La somma degli interi pari da 'NUMEROPARTENZA' a 'NUMEROFINALE' e' pari a: 'prodottoInteri'"

*/

#include <stdlib.h>
#include <stdio.h>
#define NUMEROPARTENZA 1
#define NUMEROFINALE 15

int main(void)
{//inizio funzione main

    int prodottoInteri = 1;
    int contatoreControlli;

    for( contatoreControlli = 1; contatoreControlli <= (int)NUMEROFINALE; contatoreControlli += 2 ){
        prodottoInteri *= contatoreControlli;
    }

    printf( "La somma degli interi pari da %u a %u e' pari a: %d", (unsigned int)NUMEROPARTENZA, (unsigned int)NUMEROFINALE, (int)prodottoInteri );


return 0;
}//Fine funzione main
