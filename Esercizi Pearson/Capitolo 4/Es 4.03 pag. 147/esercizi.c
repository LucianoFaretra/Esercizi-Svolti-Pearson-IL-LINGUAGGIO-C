/*                 Sviluppato da Luciano Faretra 27/12/2014 rilasciato sotto licenza GNUv3
                                    Esercizi d, e

    Esercizio D

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                              DOMINIO
    NUMERIPERRIGA                   Numeri per riga in stampa                                unsigned int 5
    NUMERIDASTAMPARE                Numeri da stampare                                       unsigned int 20

    OUTPUT                          DESCRIZIONE                                              DOMIONIO
    numeroStampa                    Numeri interi da stampare da 1 a 20                      unsigned int > 0, < 20

    DATI DI LAVORO                  DESCRIZIONE                                              DOMINIO
    contatoreRipetizioni            Contatore utilizzato per controllare le ripetizioni      unsigned int >= 0

    1. Stampa gli interi da 1 a 20 usando un ciclo while e la variabile contatore x. Supponete che la variabile x sia stata definita,
        ma non inizializzata. Stampate soltato cinque interi per riga. [Sug. usate il cacolo x % 5. Quando questo valore è 0,
        stampate un carattere newline, altrimenti un carattere tab.

    -----------------------------------------------------------------------------------------------------------------------------------------
    Esercizio E

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                              DOMINIO
    NUMERIPERRIGA                   Numeri per riga in stampa                                unsigned int 5
    NUMERIDASTAMPARE                Numeri da stampare                                       unsigned int 20

    OUTPUT                          DESCRIZIONE                                              DOMIONIO
    numeroStampa                    Numeri interi da stampare da 1 a 20                      unsigned int > 0, < 20

    DATI DI LAVORO                  DESCRIZIONE                                              DOMINIO
    contatoreRipetizioni            Contatore utilizzato per controllare le ripetizioni      unsigned int >= 0

    1. Ripetere esercizio d usando un'istruzione for



*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned short int x;

//Versione D
    x = 0;
    while(x++ < 20 ){
        printf("%3u", x);
        if( 0 == ( x % 5 ) ){
            puts("");
        }
        else{
            printf("%s", "\t");
        }
    }
puts("");
//Versione E
    for(x = 1; x <= 20; x++){
        printf("%3u", x);
        if( 0 == x % 5 ){
            puts("");
        }
        else{
            printf("%s", "\t");
        }
    }

return 0;
}//Fine funzione main
