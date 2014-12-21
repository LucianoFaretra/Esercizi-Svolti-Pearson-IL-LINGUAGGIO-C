/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                                    Trova il numero pi� grande
Affinamento Top-Down:

    INPUT                       DESCRIZIONE                                                DOMINIO
    -NUMERIDACONTROLLARE        Numero di numeri da controllare                            unsigned int > 0
    -numero                     Numero intero positivo inserito dall'untente da confr.     int >= 0

    OUTPUT                      DESCRIZIONE                                                DOMINIO
    -largest                    Il numero pi� grande fin'ora trovato                       unsigned int >= 0

    DATI DI LAVORO              DESCRIZIONE                                                DOMINIO
    -counter                    Contatore di quanti numeri sono stati inseriti fin'ora     unsigned int >= 0


    1. Il programma legge dieci numeri interi e stampa il pi� grande

    1.1 inizializza counter a 0
        Esegui
            leggi il numero inserito
                Se il numero inserito � maggiore del numero largest
                    Allora il numero inserito � il nuovo numero largest
                Fine se
            incrementa counter di uno
        Finch� counter != 10

        Stampa il messaggio con il valore di largest: "Il numero maggiore trovato fin'ora � largest
        Fine

*/
#include <stdlib.h>
#include <stdio.h>
#define NUMERIDACONTROLLARE 10

int main(void)
{//inizio funzione main

    unsigned int numero = 0;
    unsigned int largest = 0;
    unsigned int counter = 1;

    do{//Esegui finch� non viene inserito il valoreSentinella
       printf("Inserire numero %u da controllare di %u: ", counter, NUMERIDACONTROLLARE);
       scanf("%u", &numero);
            if(numero > largest){// Esegui blocco se numero � pi� grande del numero pi� grande ora trovato
                largest = numero;
            }
        counter++;
    }while(counter != (unsigned int)NUMERIDACONTROLLARE);//Fine while

    printf("Il numero piu' grande e': %u", largest);

return 0;
}//Fine funzione main
