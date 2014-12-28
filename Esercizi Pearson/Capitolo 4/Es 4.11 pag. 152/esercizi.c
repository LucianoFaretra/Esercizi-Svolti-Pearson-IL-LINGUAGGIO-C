/*                 Sviluppato da Luciano Faretra 27/12/2014 rilasciato sotto licenza GNUv3
                                        Trova il valore più piccolo

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                              DOMINIO
    numeroInput                     Numeri inseriti da sommare                               numero intero
    numeroInserimenti               Quanti inserimenti devono essere fatti                   numero intero >= 0

    OUTPUT                          DESCRIZIONE                                              DOMIONIO
    numeroPiuPiccolo                Il numero piu piccolo di quelli inseriti                 numero intero

    DATI DI LAVORO                  DESCRIZIONE                                              DOMINIO
    contatoreInserimenti            Contatore per controllare quanti numeri sono stati inseriti unsigned int

    1. Trova il valore piu piccolo tra quelli inseriti, il primo valore dice quanti altri valori devono essere inseriti

    1.1 inizializza numeroPiuPiccolo
        Stampa:"Quanti numeri desideri inserire? (lo 0 o numeri negativi chiudono il programma): "
        leggi numeroInserimenti

        Se numeroInserimenti >= 1
            Allora
                Per contatoreInserimenti = 0, contatoreInserimenti <= numeroInserimenti, contatoreInserimenti++
                    Se contatoreInserimenti == 1
                        Allora
                            Stampa: "Inserisci il 'contatoreInserimenti' di 'numeroInserimenti': "
                            Leggi numeroInput
                            numeroPiuPiccolo = numeroInput
                        Altrimenti
                            Stampa: "Inserisci il 'contatoreInserimenti' di 'numeroInserimenti': "
                            Leggi numeroInput
                                Se numeroInput < numeroPiuPiccolo
                                    Allora
                                        numeroPiuPiccolo = numeroInput
                                Fine Se
                    Fine Se
                Fine Per

                Stampa: "Il numero più piccolo tra i 'numeroInserimenti' numeri inseriti e': 'numeroPiuPiccolo'"

            Altrimenti
                Stampa: "Grazie per aver utilizzato il nostro programma!"
        Fine Se
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    int numeroInserimenti;
    int numeroInput;
    int numeroPiuPiccolo;
    int contatoreInserimenti = 0;

    printf( "Quanti numeri desideri inserire? (lo 0 o numeri negativi chiudono il programma): " );
    scanf( "%d", &numeroInserimenti );

    if( numeroInserimenti >= 1 ){

        for( contatoreInserimenti = 1; contatoreInserimenti <= numeroInserimenti; contatoreInserimenti++ ){
            if( contatoreInserimenti == 1 ){
                printf( "Inserisci il %u di %d: ", contatoreInserimenti, numeroInserimenti );
                scanf("%d", &numeroInput);
                numeroPiuPiccolo = numeroInput;
            }
            else{
                printf( "Inserisci il %d di %d: ", contatoreInserimenti, numeroInserimenti );
                scanf("%d", &numeroInput);
                    if( numeroInput < numeroPiuPiccolo )
                        numeroPiuPiccolo = numeroInput;
            }
        }

            printf( "Il numero piu piccolo tra i %d numeri inseriti e': %d\n", numeroInserimenti, numeroPiuPiccolo );

    }
    else{
            puts( "Grazie per aver utilizzato il nostro programma!" );
    }

return 0;
}//Fine funzione main
