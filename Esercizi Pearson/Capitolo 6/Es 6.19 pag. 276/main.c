/*                 Sviluppato da Luciano Faretra 03/01/2015 rilasciato sotto licenza GNUv3
                                        Lancio dei dadi

****************************************************************************************************************

    INPUT                   DESCRIZIONE                                                     DOMINIO
    risultatoDado1          Risultato del lancio del primo dato                             unsigned int >= 1, <= 6
    risultatoDado2          Risultato del lancio del secondo dato                           unsigned int >= 1, <= 6
    TOTALE_LANCI            Lanci che verranno effettuati                                   unsigned int >= 1

    OUTPUT                  DESCRIZIONE                                                     DOMINIO
    sommaDueDadi            Somma il risultato del lancio dei due dadi                      unsigned int >= 1, <= 6
    listaCombinazioni       Lista contenente le probabilità del totale dei due lanci        unsigned int >= 1, <= 6

    DATI DI LAVORO          DESCRIZIONE                                                     DOMINIO
    contatoreLanci          Contatore dei diversi lanci effettuati                          unsigned int >= 1, <= TOTALE_LANCI

    1 Il computer sumula dei lanci di dadi salvando la somma dei due lanci in un unico valore, dopo di che li salva in
        formato tabellare e li stampa con il numero dei dovte che e' uscito un dato valore

    1.1 Inizializza il seme del generatore di codici

        Inizializza listaCombinazioni a 0
        Inizializza contatoreLanci a 0

        risultatoDado1 = rand()
        risultatoDado2 = rand()
        sommaDueDadi = risultatoDado1 + risultatoDado2

        Se sommaDueDadi == 2
            Allora
                listaCombinazioni[0]++
        Altrimenti Se sommaDueDadi == 3
                listaCombinazioni[1]++
        Altrimenti Se sommaDueDadi == 4
                listaCombinazioni[2]++
        Altrimenti Se sommaDueDadi == 5
                listaCombinazioni[3]++
        Altrimenti Se sommaDueDadi == 6
                listaCombinazioni[4]++
        Altrimenti Se sommaDueDadi == 7
                listaCombinazioni[5]++
        Altrimenti Se sommaDueDadi == 8
                listaCombinazioni[6]++
        Altrimenti Se sommaDueDadi == 9
                listaCombinazioni[7]++
        Altrimenti Se sommaDueDadi == 10
                listaCombinazioni[8]++
        Altrimenti Se sommaDueDadi == 11
                listaCombinazioni[9]++
        Altrimenti Se sommaDueDadi == 12
                listaCombinazioni[10]++

        Stampa:"Tabella delle probabilita

*****************************************************************************************************************



*/

#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#define TOTALE_LANCI 36000
#define SIZE 11

int main()
{
    srand(time(NULL));

    unsigned int risultatoDado1;
    unsigned int risultatoDado2;
    unsigned int sommaDueDadi;
    unsigned int listaCombinazioni[SIZE] = { 0 };
    unsigned int contatoreLanci = 0;

    do{
        risultatoDado1 = 1 + rand() % 6;
        risultatoDado2 = 1 + rand() % 6;
        sommaDueDadi = risultatoDado1 + risultatoDado2;

        if( sommaDueDadi == 2 ){
            listaCombinazioni[0]++;
        }
        else if( sommaDueDadi == 3 ){
                listaCombinazioni[1]++;
        }
        else if( sommaDueDadi == 4 ){
                listaCombinazioni[2]++;
        }
        else if( sommaDueDadi == 5 ){
                listaCombinazioni[3]++;
        }
        else if( sommaDueDadi == 6 ){
                listaCombinazioni[4]++;
        }
        else if( sommaDueDadi == 7 ){
                listaCombinazioni[5]++;
        }
        else if( sommaDueDadi == 8 ){
                listaCombinazioni[6]++;
        }
        else if( sommaDueDadi == 9 ){
                listaCombinazioni[7]++;
        }
        else if( sommaDueDadi == 10 ){
                listaCombinazioni[8]++;
        }
        else if( sommaDueDadi == 11 ){
                listaCombinazioni[9]++;
        }
        else if( sommaDueDadi == 12 ){
                listaCombinazioni[10]++;
        }
    contatoreLanci++;
    }while( contatoreLanci <= TOTALE_LANCI );

    printf("Su %u lanci di due dadi si sono verificate le seguenti estrazioni: \n", TOTALE_LANCI);
    contatoreLanci = 2;
    do{
        printf( "Il risultato %u e' uscito %u volte\n", contatoreLanci, listaCombinazioni[(contatoreLanci - 2)] );
        contatoreLanci++;
    }while(contatoreLanci <= 12 );

    return 0;
}
