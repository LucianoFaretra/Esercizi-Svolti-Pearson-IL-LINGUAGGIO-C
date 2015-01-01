/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Tempo in secondi
    Affinamento Top Down

    **Funzione - Ore in Secondi

    INPUT                           DESCRIZIONE                                                     DOMINIO
    oreTempoInput                   Ore su cui calcolare il tempo (quadrante 12h)                   unsigned int >= 0, <= 12
    minutiTempoInput                minuti su cui calcolare il tempo (quadrante 12h)                unsigned int >= 0, <= 59
    secondiTempoInput               secondi su cui calcolare il tempo (quadrante 12h)               unsigned int >= 0, <= 59

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    secondiInseriti                 pari a secondiTempoInput +  minutiTempoInput * 60 +             unsigned int >= 0
                                    oreTempoInput * 60 * 60


    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Il programma riceve in input tre valori, ore, minuti e secondi e calcola di quanti secondi e' composto

    1.1 Funzione oreInSecondi



       ******************************************************************************************
       Funzione Main

        oreInSecondi()



        ******************************************************************************************
       Funzione main

       Stampa:"Primo Orario:"
       Esegui
            Stampa:"Inserire le ore che compongono l'orario ( quadrante 12h ): "
            Leggi oreTempoInput
            Se oreTempoInput >= 0 && oreTempoInput <= 11
                Allora
                    Stampa:"Inserire i minuti che compongono l'orario: "
                    Leggi minutiTempoInput
                Altrimenti
                    Stampa:"Attenzione non e' stato inserito un valore in ore valido."
                        Se minutiTempoInput >= 0 && minutiTempoInput <= 59
                            Allora
                                Stampa:"Inserire i secondiTempoInput che compongono l'orario: "
                                Leggi secondiInseriti
                                Se secondiTempoInput >= 0 && secondiTempoInput <= 59
                                    Allora
                                        valoreSentinella = 1
                                    Altrimenti
                                        Stampa:"Attenzione non e' stato inserito un valore in secondi valido."
                            Altrimenti
                                Stampa:"Attenzione non e' stato inserito un valore in minuti valido."
        Finchè valoreSentinella != 1

        secondiPrimoOrario = oreInSecondi( oreTempoInput, minutiTempoInput, secondiTempoInput )

        Stampa:"Secondo Orario:"
        Esegui
            Stampa:"Inserire le ore che compongono l'orario ( quadrante 12h ): "
            Leggi oreTempoInput
            Se oreTempoInput >= 0 && oreTempoInput <= 11
                Allora
                    Stampa:"Inserire i minuti che compongono l'orario: "
                    Leggi minutiTempoInput
                Altrimenti
                    Stampa:"Attenzione non e' stato inserito un valore in ore valido."
                        Se minutiTempoInput >= 0 && minutiTempoInput <= 59
                            Allora
                                Stampa:"Inserire i secondiTempoInput che compongono l'orario: "
                                Leggi secondiInseriti
                                Se secondiTempoInput >= 0 && secondiTempoInput <= 59
                                    Allora
                                        valoreSentinella = 1
                                    Altrimenti
                                        Stampa:"Attenzione non e' stato inserito un valore in secondi valido."
                            Altrimenti
                                Stampa:"Attenzione non e' stato inserito un valore in minuti valido."
        Finchè valoreSentinella != 1

        secondiSecondoOrario = oreInSecondi( oreTempoInput, minutiTempoInput, secondiTempoInput )

        Stampa: La differenza in secondi tra i due orari e' di:
            Se secondiPrimoOrario >= secondiSecondoOrario
                Allora
                    Stampa:"secondiPrimoOrario - secondiSecondoOrario"
                Altrimenti
                    Stampa:"secondiSecondoOrario - secondiPrimoOrario"

*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{//inizio funzione main

    int quozienteDueNumeri( int numeroA, int numeroB );
    int restoQuozienteDueNumeri( int numeroA, int numeroB );
    void numeroIntervallato( int numeroA );

    int numeroA;
    int numeroB;

    do{
        printf( "%s", "Inserire il primo numero: ");
        scanf( "%d", &numeroA);
        printf( "%s", "Inserire il numero con cui dividere il primo numero: ");
        scanf( "%d", &numeroB);

        if( numeroA > 0 ){
            if( numeroB > 0 ){
                printf( "Il quoziente di %d diviso %d e' pari a: %d\n", numeroA, numeroB, quozienteDueNumeri( numeroA, numeroB ) );
                printf( "Il resto di %d diviso %d e' pari a: %d\n", numeroA, numeroB, restoQuozienteDueNumeri( numeroA, numeroB ) );
                printf( "Il numero %d intervallato di 2 spazi per ogni cifra e' pari a: ", numeroA);
                numeroIntervallato( numeroA );
            }
            else{
                    puts("E' stata tentata una divisione per 0 non consentita");
            }
        }
        else{
            puts("Non e' stato inserito un valore valido ripetere l'inserimento");
        }
    }while( numeroA <= 0 && numeroA <= 0 );

return 0;
}//Fine funzione main

int quozienteDueNumeri( int numeroA, int numeroB )
{

return floor( numeroA / numeroB );
}

int restoQuozienteDueNumeri( int numeroA, int numeroB )
{

return ( numeroA % numeroB );
}

void numeroIntervallato( int numeroA )
{
    int quoziente;

    if( numeroA >= 10000 ){
        printf( "%d  ", quoziente = quozienteDueNumeri( numeroA, 10000 ) );
        numeroA -= quoziente * 10000;
        numeroIntervallato( numeroA );
    }
    else if( numeroA >= 1000 ){
        printf( "%d  ", quoziente = quozienteDueNumeri( numeroA, 1000 ) );
        numeroA -= quoziente * 1000;
        numeroIntervallato( numeroA );
    }
    else if( numeroA >= 100 ){
        printf( "%d  ", quoziente = quozienteDueNumeri( numeroA, 100 ) );
        numeroA -= quoziente * 100;
        numeroIntervallato( numeroA );
    }
    else if( numeroA >= 10 ){
        printf( "%d  ", quoziente = quozienteDueNumeri( numeroA, 10 ) );
        numeroA -= quoziente * 10;
        numeroIntervallato( numeroA );
    }
    else{
        printf( "%d  ", numeroA);
    }

return;
}

