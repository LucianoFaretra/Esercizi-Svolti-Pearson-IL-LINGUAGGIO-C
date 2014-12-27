/*                 Sviluppato da Luciano Faretra 27/12/2014 rilasciato sotto licenza GNUv3
                                        Somma di una squenza di interi

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                              DOMINIO
    numeroInserimenti               primo valore inserito dall'utente che indica quanti      unsigned int >= 0
                                    inserimenti verranno fatti.
    numeroSomma                     Numeri inseriti da sommare                               intero

    OUTPUT                          DESCRIZIONE                                              DOMIONIO
    risultatoSomma                  Risultato sommatoria                                     intero

    DATI DI LAVORO                  DESCRIZIONE                                              DOMINIO
    contatoreInserimenti            Contatore per controllare quanti numeri sono stati inseriti unsigned int

    1. il primo inserimento indica quanti valori devono essere inseriti e sommati tra loro

    1.1 Leggi numeroInserimenti
        finchè contatoreInserimenti <= numeroInsetimenti
            Leggi numeroSomma
            sommare numeroSomma a risultatoSomma
            incrementa il contatore di uno

        stampa risultatoSomma

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned int numeroInserimenti;
    int numeroSomma;
    int risultatoSomma = 0;
    unsigned int contatoreInserimenti;

    printf("Prego inserire il numero di valori da inserire e sommare: ");
    scanf("%u", &numeroInserimenti);

    for( contatoreInserimenti = 1; contatoreInserimenti <= numeroInserimenti; contatoreInserimenti++ ){
        printf("Inserire il numero %u di %d da inserire: ", contatoreInserimenti, numeroInserimenti );
        scanf("%d", &numeroSomma);
        risultatoSomma += numeroSomma;
    }

    printf("Il totale dei %u numero inseriti e': %d", numeroInserimenti, risultatoSomma);

return 0;
}//Fine funzione main
