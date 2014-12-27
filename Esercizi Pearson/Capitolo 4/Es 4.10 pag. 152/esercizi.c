/*                 Sviluppato da Luciano Faretra 27/12/2014 rilasciato sotto licenza GNUv3
                                        Media di una sequenza di interi

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                              DOMINIO
    numeroInput                     Numeri inseriti da sommare                               numero intero
    sommaInput                      Somma dei numeroInput                                    numero intero

    OUTPUT                          DESCRIZIONE                                              DOMIONIO
    mediaInteri                     Risultato media degli interi                             double

    DATI DI LAVORO                  DESCRIZIONE                                              DOMINIO
    contatoreInserimenti            Contatore per controllare quanti numeri sono stati inseriti unsigned int
    VALORESENTINELLA                Valore sentinella per interrompere l'input               unsigned int 9999

    1. Vengono inseriti dei numeri, l'inserimento viene interrotto dal valore sentinella e allora viene calcolata
        la media dei numeri inseriti

    1.1 Esegui
            Stampa: "Inserire l'intero su cui calcolare la media (inserisci 9999 per uscire): "
            leggi numeroInput
                Se numeroInput è diverso da 9999
                    Allora
                        aggiungi numeroInput a sommaInput
                        incrementa contatoreInserimenti di uno
                Fine Se
        Finchè non viene inseirito valoreSentinella

        Se sommaInput != 0
            Allora
                mediaInteri = sommaInteri / contatoreInserimenti
            Altrimenti
                mediaInteri = 0
        Fine Se

        Stampa:"La media dei 'contatoreInserimenti' numeri inseriti e' pari a: mediaInteri
*/

#include <stdlib.h>
#include <stdio.h>
#define VALORESENTINELLA 9999

int main(void)
{//inizio funzione main

    float mediaInteri;
    int numeroInput;
    int sommaInput = 0;
    unsigned int contatoreInserimenti = 0;

    do{
        printf("%s", "Inserire l'intero su cui calcolare la media (inserisci 9999 per uscire): ");
        scanf( "%d", &numeroInput );
            if(9999 != numeroInput){
                sommaInput += numeroInput;
                contatoreInserimenti++;
            }
    }while( numeroInput != (int)VALORESENTINELLA );

    if( sommaInput != 0 )
        mediaInteri = ( sommaInput / contatoreInserimenti );
    else
        mediaInteri = 0;

    printf( "La media dei %u numeri inseriti e' pari a: %.2f", contatoreInserimenti, mediaInteri );

return 0;
}//Fine funzione main
