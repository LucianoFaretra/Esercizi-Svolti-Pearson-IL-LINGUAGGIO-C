/*                 Sviluppato da Luciano Faretra 23/12/2014 rilasciato sotto licenza GNUv3
                                    Tester di palindromia 5 cifre

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                     DOMINIO
    numeroInserito              Numerod a controlalre se palindromo             unsigend int > 0

    OUTPUT                      DESCRIZIONE                                     DOMIONIO
    messaggio                   Il messaggio che descrive se il num è palindromo testo
    decineDiMigliaia            Decine di migliaia che compongono la cifra      unsigned int => 1
    migliaia                    Migliaia che compongono la cifra                unsigned int => 0
    centinaia                   Centinaia che compongono la cifrs               unsigned int => 0
    decine                      Decine che compongono la cifra                  unsigned int => 0
    unita                       Unità che compongono la cifra                   unsigned int => 1

    DATI DI LAVORO              CONTATORE                                       DOMINIO


    1. Dato un numero a cinque cifre definisce se è palindromo o meno

    1.1 Un numero è palindromo se è possibile leggerlo da dastra verso sinistra e da sinistra verso destra

    1.2 Esegui
        leggi il numeroInserito
        Se ( numeroInserito / 10000 ) >= 1
            Allora
		Calcola le decineDiMigliaia
                Calcola le migliaia
                Calcola le centinaia
                Calcola le decine
                Calcola le unità

                Se le decineDiMigliaia sono uguali alle unità
                    Allora
                        Se le migliaia sono uguali alle decine
                            Allora
                                Stampa " 'numeroInserito' è un numero palindromo "
                        Fine Se
                Fine Se
                Stampa "Il 'numeroInserito' non è palindromo prego inserire un numero palindromo"
        Else
            Stampa "Il 'numeroInserito' non è composto da cinque cifre"
        Finchè ( numeroInserito / 10000 ) >= 1


    1.3 Esegui
        leggi il numeroInserito
        Se ( numeroInserito / 10000 ) >= 1
            Allora
                decineDiMigliaia = numeroInserito / 10000
                migliaia = ( numeroInserito / 1000 ) - ( decineDiMigliaia * 10 )
                centinaia = ( numeroInserito / 100 ) - ( decineDiMigliaia * 100 ) - ( migliaia * 10 )
                decine = ( numeroInserito / 10 ) - ( decineDiMigliaia * 1000 ) - ( migliaia * 100 ) - (centinaia * 10)
                unità = ( numeroInserito / 1 ) - ( decineDiMigliaia * 10000 ) - ( migliaia * 1000 ) - (centinaia * 100) - (decine * 10)

                Se le decineDiMigliaia sono uguali alle unità
                    Allora
                        Se le migliaia sono uguali alle decine
                            Allora
                                Stampa " 'numeroInserito' è un numero palindromo "
                        Fine Se
                Fine Se
                Stampa "Il 'numeroInserito' non è palindromo prego inserire un numero palindromo"
        Else
            Stampa "Il 'numeroInserito' non è composto da cinque cifre"
        Finchè ( numeroInserito / 10000 ) >= 1

*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    int numeroInserito = 0;
    unsigned int decineDiMigliaia = 0;
    unsigned int migliaia = 0;
    unsigned int centinaia = 0;
    unsigned int decine = 0;
    unsigned int unita = 0;
    int valoreSentinella = -1;

    do{//Esegui finchè non viene inserito un numero di 5 cifre
        printf("%s", "\nTest palindromo: Inserire un intero di 5 cifre (-1 per uscire): ");
        scanf("%u", &numeroInserito);
        if(numeroInserito != valoreSentinella){//Esegui controllo solo se valore è diverso dal valore sentinella
            if(( numeroInserito / 10000 ) >= 1){//Esegui il blocco se il numero ha 5 cifre

                    decineDiMigliaia = ( numeroInserito / 10000);
                    migliaia = (( numeroInserito / 1000 ) - ( decineDiMigliaia * 10 ));
                    centinaia = (( numeroInserito / 100 ) - ( decineDiMigliaia * 100 ) - ( migliaia * 10 ));
                    decine = (( numeroInserito / 10 ) - ( decineDiMigliaia * 1000 ) - ( migliaia * 100 ) - (centinaia * 10));
                    unita = (( numeroInserito / 1 ) - ( decineDiMigliaia * 10000 ) - ( migliaia * 1000 ) - (centinaia * 100) - (decine * 10));

                    if( decineDiMigliaia == unita ){//Esegui se la condizione è rispettata altrimenti salta
                        if( migliaia == decine ){//Esegui se la condizione è soddisfatta altrimenti salta
                        printf("\n%u e' un numero palindromo.\n\n", numeroInserito);
                        }
                        else{
                        printf("\n%u non e' palindromo prego inserire un numero palindromo.\n\n", numeroInserito);
                        }
                    }//Fine se
                    else{
                        printf("\n%u non e' palindromo prego inserire un numero palindromo.\n\n", numeroInserito);
                    }

            }//Fine Se
            else{//Esegui se numero / 10000 < 1
                printf("\n%u non e' composto da cinque cifre.\n", numeroInserito);
            }
        }//Fine if numeriInserito != valoreSentinella
    }while( numeroInserito != valoreSentinella );//Fine While

return 0;
}//Fine funzione main
