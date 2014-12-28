/*                 Sviluppato da Luciano Faretra 27/12/2014 rilasciato sotto licenza GNUv3
                                    Calcola il fattoriale

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    NUMEROPARTENZA                  Numero da cui far partire il conteggio                          unsigned intero
    NUMEROFINALE                    Numero in cui far terminare il conteggio                        unsigned intero

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroFattoriale                Fattoriale degli interi pari tra NUMEROPARTENZA e NUMEROFINALE  numero intero lungo

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreControlli              Contatore per controllare quanti numeri sono stati controlalti  unsigned int
    numeroFattori                   Numeo fattori che compongono il numero                          unsigned int


    1. Calcola il prodotto dei numeri fattoriali tra il numero 1 e il numero 15 e lo stampa a video

    1.1 Stampa: "Fattore        NumeroFattoriale"
        Inizializza numeroFattoriale a 1
        Per contatoreControlli = 1; finchè contatoreControlli <= NUMEROFINALE; incrementa contatoreControlli di 1
            Per numeroFattori; finchè numeroFattori >= NUMEROPARTENZA; decrementa numeroFattori di 1
                numeroFattoriale *= numeroFattori
            Fine per
            Stampa: "'contatoreControlli'       'numeroFattoriale'
        Fine Per

*/

#include <stdlib.h>
#include <stdio.h>
#define NUMEROPARTENZA 1
#define NUMEROFINALE 5

int main(void)
{//inizio funzione main

    long int numeroFattoriale = 1;
    unsigned int contatoreControlli;
    unsigned int numeroFattori;

    printf("%7s\t%21s", "Fattore", "Numero Fattoriale");
        for( contatoreControlli = 1; contatoreControlli <= (unsigned int)NUMEROFINALE; contatoreControlli++ ){
            for( numeroFattori = contatoreControlli; numeroFattori >= NUMEROPARTENZA; numeroFattori-- ){
                numeroFattoriale *= numeroFattori;
            }
        printf("\n%7u\t%21ld", contatoreControlli, numeroFattoriale );
        }

return 0;
}//Fine funzione main
