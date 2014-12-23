/*                 Sviluppato da Luciano Faretra 23/12/2014 rilasciato sotto licenza GNUv3
                                        Multipli di dieci

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    INERVALLO                   Ogni quanti asterischi deve essere stampata una newline  unsigend int > 0
    TOTALEASTERISCHI            Quanti asterischi deve stampare in totale                unsigned int > 0

    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    stampa                      Stampa *                                                 carattere *
    newline                     Vai a capo ogni intervallo                               a capo

    DATI DI LAVORO              DESCRIZIONE                                              DOMINIO
    contatore                   Contatore che conta i cicli per decretare intervallo     unsigned int > 0

    1. il programma stampa dieci asterischi fino a cento, ed ogni 10 stampa una newline

    1.1 Definisci le costanti
        Mentre contatore <= TOTALEASTERICHI
            Stampa 'stampa'
            contatore++
            Se contatore % INTERVALLO == 0
                Stampa newline
            Fine se
        Fine mentre
        Fine
*/
#include <stdlib.h>
#include <stdio.h>
#define INTERVALLO 10
#define TOTALEASTERISCHI 100

int main(void)
{//inizio funzione main

    unsigned int contatore = 0;

    while(contatore < TOTALEASTERISCHI){
        printf("%s", "*");
        contatore++;
        if( contatore % INTERVALLO == 0 ){
            puts("");
        }
    }
return 0;
}//Fine funzione main
