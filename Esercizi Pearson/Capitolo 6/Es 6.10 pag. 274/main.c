/*                 Sviluppato da Luciano Faretra 02/01/2015 rilasciato sotto licenza GNUv3
                                    Esercizio Commissioni su vendite
                                    #Include: percentualeSuImporto
                                    #include: arrotondamento

                                    Affinamento Top Down


    INPUT                           DESCRIZIONE                                                     DOMINIO
    PAGA_SETTIMANALE                Paga settimanale base di un agente                              double 200
    PERCENTUALE_SU_VENDITE          Percentuale sulle vendite per ogni agente                       9
    venditeSettimanali              Specifica quante vendite settimanali ha effettuato l'agente     double >= 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    guadagnoCommissioni             Pari a PERCENTUALE_SU_VENDITE di venditeSettimanali             double >= 0
    guadagnoTotale                  Pari a PAGA_SETTIMANALE piu guadagnoCommissioni                 double >= 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    rangeGuadagni[10]               Contatore statistica sui diversi tipi di guadagni, in prima     int >= 0
                                    posizione il totale del numero di agenti
    valoreSentinella                Valore sentinella che interrompe la fase di input               -1

    1   Il programma riceve gli importi di vendita settimanali degli agenti, una volta inseriti tutti i resoconti stampa una statistica
        in base al guadagno settimanale di ogni agente

    1.1 Esegui
            Stampa: Inserire venditeSettimanali
                Se venditeSettimanali >= 0
                    Allora
                        rangeGuadagni[0]++
                        guadagnoCommissioni = percentualeSuImporto( venditeSettimanali, PERCENTUALE_SU_VENDITE );
                        guadagnoTotale = ( PAGA_SETTIMANALE + guadagnoCommissioni )
                        guadagnoTotale = numeroArrotondatoAIntero( guadagnoTotale )
                        incrementaContatore( rangeGuadagni, guadagnoTotale )
                Fine Se
        Finchè non e' stato inserito il valore sentinella

        Stampa:"I 'rangeGuadagni[0]' di vendita hanno guadagnato rispettivamente:
        rangeGuadagni[0] = 1
        Esegui
            Stampa:"N°'rangeGuadagni[rangeGuadagni[0]]' Agenti tra i $'rangeGuadagni[0]+1'00 - 'rangeGuadagni[0]+1'99"
            rangeGuadagni[0]++
        Finche' rangeGuadagni[0] <= 9
            rangeGuadagni[0]++
            Stampa:"N°'rangeGuadagni[rangeGuadagni[0]]' Agenti oltre i $'rangeGuadagni[0]+1'00."


************************************************************************************************************************
Funzione incrementaContatore( contatore, importo )


    INPUT                           DESCRIZIONE                                                     DOMINIO
    importo                         Importo guadagnato dall'agente di vendita                       unsigned int >= 0
    contatore                       Contatore da incrementare                                       unsigned int >= 0

    OUTPUT                          DESCRIZIONE                                                     DOMINIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    Se importo >= 200 && importo <= 299
        Allora
            contatore[1]++
    Altrimenti Se importo >= 300 && importo <= 399
        Allora
            contatore[2]++
    Altrimenti Se importo >= 400 && importo <= 499
        Allora
            contatore[3]++
    Altrimenti Se importo >= 500 && importo <= 599
        Allora
            contatore[4]++
    Altrimenti Se importo >= 600 && importo <= 699
        Allora
            contatore[5]++
    Altrimenti Se importo >= 700 && importo <= 799
        Allora
            contatore[6]++
    Altrimenti Se importo >= 800 && importo <= 899
        Allora
            contatore[7]++
    Altrimenti Se importo >= 900 && importo <= 999
        Allora
            contatore[8]++
    Altrimenti Se importo >= 1000
        Allora
            contatore[9]++

*/

#include <stdlib.h>
#include <stdio.h>
#include "percentualeSuImporto.h"
#include "arrotondamentiMonetari.h"

#define PAGA_SETTIMANALE 200.00
#define PERCENTUALE_SU_VENDITE 9.00

void incrementaContatore(unsigned int contatore[], int importo);

int main( void )
{

    double venditeSettimanali;
    double guadagnoCommissioni;
    double guadagnoTotale;
    unsigned int rangeGuadagni[10] = { 0 };
    int valoreSentinella = -1;

    do{
        printf( "%s", "Inserire venditeSettimanali (inserisci -1 per terminare): " );
        scanf( "%lf", &venditeSettimanali );
            if( venditeSettimanali >= 0 ){
                rangeGuadagni[0]++;
                guadagnoCommissioni = percentualeSuImporto( venditeSettimanali, PERCENTUALE_SU_VENDITE );
                guadagnoTotale = ( PAGA_SETTIMANALE + guadagnoCommissioni );
                guadagnoTotale = numeroArrotondatoAIntero( guadagnoTotale ); //Arrotonda le entrate
                incrementaContatore( rangeGuadagni, guadagnoTotale );
            }
    }while( venditeSettimanali != valoreSentinella );

    printf( "\nI %d di vendita hanno guadagnato rispettivamente: \n", rangeGuadagni[0] );
    rangeGuadagni[0] = 1;
    while( rangeGuadagni[0] < 9 ){
        printf( "N %d Agenti tra i $%d00 - %d99\n", rangeGuadagni[rangeGuadagni[0]], rangeGuadagni[0] + 1, rangeGuadagni[0] + 1 );
        rangeGuadagni[0]++;
    }
        printf( "N %d Agenti oltre i $%d00.\n", rangeGuadagni[rangeGuadagni[0]], rangeGuadagni[0] + 1 );

return 0;
}

void incrementaContatore( unsigned int contatore[], int importo )
{

    if( importo >= 200 && importo <= 299 ){

        contatore[1]++;
    }
    else if( importo >= 300 && importo <= 399 ){

        contatore[2]++;
    }
    else if( importo >= 400 && importo <= 499 ){

        contatore[3]++;
    }
    else if( importo >= 500 && importo <= 599 ){

        contatore[4]++;
    }
    else if( importo >= 600 && importo <= 699 ){

        contatore[5]++;
    }
    else if( importo >= 700 && importo <= 799 ){

        contatore[6]++;
    }
    else if( importo >= 800 && importo <= 899 ){

        contatore[7]++;
    }
    else if( importo >= 900 && importo <= 999 ){

        contatore[8]++;
    }
    else if( importo >= 1000 ){

        contatore[9]++;
    }

return;
}
