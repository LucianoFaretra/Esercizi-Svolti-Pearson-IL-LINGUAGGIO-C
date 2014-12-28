/*                 Sviluppato da Luciano Faretra 28/12/2014 rilasciato sotto licenza GNUv3
                                    Stampa grafico a barre

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    NUMEROMINIMO                    Numero minimo accettato                                         unsigned intero
    NUMEROMASSIMO                   Numero massimo accettato                                        unsigned intero
    primoNumero                     primo numero inserito dall'utente                               unsigned intero >= NUMEROMINIMO, <= NUMEROMASSIMO
    secondoNumero                   secondo numero inserito dall'utente                             unsigned intero >= NUMEROMINIMO, <= NUMEROMASSIMO
    terzoNumero                     terzo numero inserito dall'utente                               unsigned intero >= NUMEROMINIMO, <= NUMEROMASSIMO
    quartoNumero                    quarto numero inserito dall'utente                              unsigned intero >= NUMEROMINIMO, <= NUMEROMASSIMO
    quintoNumero                    quinto numero inserito dall'utente                              unsigned intero >= NUMEROMINIMO, <= NUMEROMASSIMO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    *                               Carattere utilizzato per stampare                               char

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreInserimenti            contatore utilizzato per controllare le stampe di *             unsigned intero >= 0


    1. L'utente inserisce 5 numeri interi ta 1 e 30 e stampa il relativo grafico

    1.1 Stampa:"Inserire il primo numero di cinque ( > 0 e < 31 ): "
        leggi primoNumero
        Stampa:"Inserire il secondo numero di cinque ( > 0 e < 31 ): "
        leggi secondoNumero
        Stampa:"Inserire il terzo numero di cinque ( > 0 e < 31 ): "
        leggi terzoNumero
        Stampa:"Inserire il quarto numero di cinque ( > 0 e < 31 ): "
        leggi quartoNumero
        Stampa:"Inserire il quinto numero di cinque ( > 0 e < 31 ): "
        leggi quintoNumero

        Se primoNumero e secondoNumero e terzoNumero e quartoNumero e quintoNumero solo => di NUMEROMINIMO e =< di NUMEROMASSIMO
            Allora
                contatoreInserimenti = 0;
                Per(contatoreInserimenti = 1; finchè contatoreInserimenti <= primoNumero; incrementa contatoreInserimenti di 1)
                    Stampa "*"
                Fine Per

                contatoreInserimenti = 0;
                Per(contatoreInserimenti = 1; finchè contatoreInserimenti <= secondoNumero; incrementa contatoreInserimenti di 1)
                    Stampa "*"
                Fine Per

                contatoreInserimenti = 0;
                Per(contatoreInserimenti = 1; finchè contatoreInserimenti <= terzoNumero; incrementa contatoreInserimenti di 1)
                    Stampa "*"
                Fine Per

                contatoreInserimenti = 0;
                Per(contatoreInserimenti = 1; finchè contatoreInserimenti <= terzoNumero; incrementa contatoreInserimenti di 1)
                    Stampa "*"
                Fine Per

                contatoreInserimenti = 0;
                Per(contatoreInserimenti = 1; finchè contatoreInserimenti <= quartoNumero; incrementa contatoreInserimenti di 1)
                    Stampa "*"
                Fine Per

                contatoreInserimenti = 0;
                Per(contatoreInserimenti = 1; finchè contatoreInserimenti <= quintoNumero; incrementa contatoreInserimenti di 1)
                    Stampa "*"
                Fine Per

            Altrimenti
                Stampa:"Sono accettati solo valori compresi tra 'NUMEROMINIMO' e 'NUMEROMASSIMO'"
        Fine Se

*/

#include <stdlib.h>
#include <stdio.h>
#define NUMEROMINIMO 1
#define NUMEROMASSIMO 30

int main(void)
{//inizio funzione main

    unsigned int primoNumero;
    unsigned int secondoNumero;
    unsigned int terzoNumero;
    unsigned int quartoNumero;
    unsigned int quintoNumero;
    unsigned int contatoreInserimenti;


    printf( "%s", "Inserire il primo numero di cinque ( > 0 e < 31 ): ");
    scanf( "%u", &primoNumero );
    printf( "%s", "Inserire il secondo numero di cinque ( > 0 e < 31 ): ");
    scanf( "%u", &secondoNumero );
    printf( "%s", "Inserire il terzo numero di cinque ( > 0 e < 31 ): ");
    scanf( "%u", &terzoNumero );
    printf( "%s", "Inserire il quarto numero di cinque ( > 0 e < 31 ): ");
    scanf( "%u", &quartoNumero );
    printf( "%s", "Inserire il quinto numero di cinque ( > 0 e < 31 ): ");
    scanf( "%u", &quintoNumero );

    if(( primoNumero >= NUMEROMINIMO && primoNumero <= NUMEROMASSIMO ) && ( secondoNumero >= NUMEROMINIMO && secondoNumero <= NUMEROMASSIMO ) && ( terzoNumero >= NUMEROMINIMO && terzoNumero <= NUMEROMASSIMO ) && ( quartoNumero >= NUMEROMINIMO && quartoNumero <= NUMEROMASSIMO ) && ( quintoNumero >= NUMEROMINIMO && quintoNumero <= NUMEROMASSIMO )){
        contatoreInserimenti = 0;
        for(contatoreInserimenti = 1; contatoreInserimenti <= primoNumero; contatoreInserimenti++ ){
            printf("%s", "*");
        }
        printf("%s", "\n");

        contatoreInserimenti = 0;
        for(contatoreInserimenti = 1; contatoreInserimenti <= secondoNumero; contatoreInserimenti++ ){
            printf("%s", "*");
        }
        printf("%s", "\n");

        contatoreInserimenti = 0;
        for(contatoreInserimenti = 1; contatoreInserimenti <= terzoNumero; contatoreInserimenti++ ){
            printf("%s", "*");
        }
        printf("%s", "\n");

        contatoreInserimenti = 0;
        for(contatoreInserimenti = 1; contatoreInserimenti <= quartoNumero; contatoreInserimenti++ ){
            printf("%s", "*");
        }
        printf("%s", "\n");

        contatoreInserimenti = 0;
        for(contatoreInserimenti = 1; contatoreInserimenti <= quintoNumero; contatoreInserimenti++ ){
            printf("%s", "*");
        }
        printf("%s", "\n");

    }
    else
        printf("\nSono accettati solo valori compresi tra %u e %u\n", NUMEROMINIMO, NUMEROMASSIMO);

return 0;
}//Fine funzione main
