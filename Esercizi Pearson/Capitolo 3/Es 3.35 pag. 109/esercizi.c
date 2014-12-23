/*                 Sviluppato da Luciano Faretra 23/12/2014 rilasciato sotto licenza GNUv3
                    Inserito un numero binario di 5 cifre calcola l'equivalente decimale

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    numeroInserito              Numero binario inserito da 5 cifre composto da 0 e 1     unsigend int > 0

    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    numeroDecimale              Numero decomale tradotto dal binario                     unsigned int >= 0
    decineDiMigliaia            Decine di migliaia che compongono la cifra               unsigned int => 1
    migliaia                    Migliaia che compongono la cifra                         unsigned int => 0
    centinaia                   Centinaia che compongono la cifrs                        unsigned int => 0
    decine                      Decine che compongono la cifra                           unsigned int => 0
    unita                       Unità che compongono la cifra                            unsigned int => 1


    1. Calcola l'equivalente decimane di un numero binario

    1.1 leggi il numero binario
        Scomponilo
        moltiplica le unità per 1
        moltiplica le decine per 2
        moltiplica le centinaia per 4
        moltiplica le migliaia per 8
        moltiplica le decineDiMigliaia per 16
        Somma i totali delle precedenti moltiplicazioni
        Stampa il numero decimale cos' ottenuto

    1.2 Esegui
        leggi il numeroInserito
        Se ( numeroInserito / 10000 ) >= 1
            Allora
                Calcola le decineDiMigliaia
                Calcola le migliaia
                Calcola le centinaia
                Calcola le decine
                Calcola le unità

                numeroDecomale = (( unità * 1 ) + ( decine * 2 ) + ( centinaia * 4 ) + ( migliaia * 8 ) + ( deconeDIMigliaia * 16 )
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

                numeroDecimale = (( unità * 1 ) + ( decine * 2 ) + ( centinaia * 4 ) + ( migliaia * 8 ) + ( deconeDIMigliaia * 16 )

                Stampa "Il numero binario 'numeroInserito' e' pari a 'numeroDecimale' in sistema decimale. "
        Else
            Stampa "Il 'numeroInserito' non è un binario compatibile"
        Finchè ( numeroInserito != valoreSentinella )

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
    unsigned int numeroDecimale = 0;
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

                    numeroDecimale = (( unita * 1 ) + ( decine * 2 ) + ( centinaia * 4 ) + ( migliaia * 8 ) + ( decineDiMigliaia * 16 ));

                    printf( "Il numero binario %d e' pari a %u in sistema decimale.\n ", numeroInserito, numeroDecimale);

            }//Fine Se
            else{//Esegui se numero / 10000 < 1
                printf("\nIl %d non è un binario compatibile\n", numeroInserito);
            }
        }//Fine if numeriInserito != valoreSentinella
    }while( numeroInserito != valoreSentinella );//Fine While

return 0;
}//Fine funzione main
