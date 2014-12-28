/*                 Sviluppato da Luciano Faretra 28/12/2014 rilasciato sotto licenza GNUv3
                                    Calcolare i limiti di credito

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroConto                     Numero conto del cliente                                        unsigned intero >= 0
    saldoAttuale                    Totale debiti del cliente                                       float >= 0
    limiteCreditoVecchio            Limite di credito precedente alla crisi                         unsigned intero >= 0
    FATTORERIDUZIONE                Di quante volte il credito è stato ridotto

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    limiteCredito                   Nuovo limite di credito                                         unsigned intero >= 0
    saldoEccedente                  totaleCrediti - limiteCredito                                   float

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    valoreSentinella                Valore utilizzato per interrompere gli insetimenti              intero -1


    1. Calcola il nuovo limiteCredito pari alla metà di quello precedente, e segnala se il cliente ha superato il limite

    1.1 Esegui
            Stampa:"Inserire il numero di conto del cliente"
            leggi numeroConto
            Stampa:"Inserire limite di credito attuale"
            leggi limiteCreditoVecchio
            Stampa:"Inserire saldoAttuale"

            Il nuovo limite di credito è dato da limiteCredito = limiteCreditoVecchio / 2

            Se limiteCredito < saldoAttuale
                Allora
                    saldoEccedente = saldoAttuale - limiteCredito
                    Stampa: "Il cliente numero conto: 'numeroConto' ha superato il suo limite di credito pari a: 'limiteCredito' di 'saldoEccedente'.
                Altrimenti
                    Il nuovo limite di credito per il cliente numero conto: 'numeroConto' e' pari a: 'limiteCredito'.
            Fine se
        Finchè non viene insetito il valoreSentinella.

*/

#include <stdlib.h>
#include <stdio.h>
#define FATTORERIDUZIONE 2

int main(void)
{//inizio funzione main

    int numeroConto;
    unsigned int limiteCreditoVecchio;
    unsigned int limiteCredito;
    int valoreSentinella = -1;
    float saldoAttuale;
    float saldoEccedente;




    for( valoreSentinella = -1; numeroConto != valoreSentinella;){
        puts("");
        printf( "%s", "Inserire il numero di conto del cliente: " );
        scanf( "%d", &numeroConto );
        if(numeroConto != valoreSentinella){
            printf( "%s", "Inserire limite di credito attuale: ");
            scanf( "%u", &limiteCreditoVecchio);
            printf( "%s", "Inserire saldoAttuale: ");
            scanf( "%f", &saldoAttuale);
            puts("");

            limiteCredito = ( limiteCreditoVecchio / (unsigned int)FATTORERIDUZIONE ); //In seguito alla crisi il limite di credito è stato dimezzato

            if( saldoAttuale > limiteCredito ){
                saldoEccedente = saldoAttuale - limiteCredito;
                puts("**********");
                printf("Il cliente numero conto: %d ha superato il suo nuovo limite di credito pari a: %u di %.2f.\n", numeroConto, limiteCredito, saldoEccedente);
                puts("**********");
            }

            else{
                printf("Il nuovo limite di credito per il cliente numero conto: %d e' pari a: %u.", numeroConto, limiteCredito );
            }
        }
        else{
            puts("Grazie per aver utilizzato il nostro software!");
        }
    }


return 0;
}//Fine funzione main
