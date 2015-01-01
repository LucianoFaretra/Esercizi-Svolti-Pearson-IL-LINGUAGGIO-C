/*                 Sviluppato da Luciano Faretra 31/12/2014 rilasciato sotto licenza GNUv3
                                    Separazione cifre
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroA                         Primo numero inserito dall'utente                               float >= 0
    numeroB                         Secondo numero inserito dall'utente                             float >= 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    quoziente                       Quoziente di a / b                                              intero >= 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Il programma riceve due numeri, divide il rpimo per il secondo e stampa il quoziente del primo, il resto del secondo
        e il primo con le cifre separate da due spazi


    1.1 Funzione Main

            Esegui
            Stampa:"Inserire il primo numero: "
            Leggi numeroA
            Stampa:"Inserire il numero con cui dividere il primo numero: "
            Leggi numeroB

                Se numeroA > 0
                    Allora
                        Se numeroB > 0
                            Allora
                                Stampa:"Il quoziente di 'numeroA' diviso 'numeroB' e' pari a: 'quozienteDueNumeri( numeroA, numeroB )'
                                Stampa:"Il resto di 'numeroA' diviso 'numeroB' e' pari a: 'restoQuozienteDueNumeri( numeroA, numeroB )'
                                Stampa:"Il numero 'numeroA' intervallato di 'SPAZI' spazi per ogni cifra e' pari a:
                                numeroIntervallato( numeroA )
                            Altrimenti
                                Stampa:"E' stata tentata una divisione per 0 non consentita"
                    Altrimenti
                        Stampa: Non e' stato inserito un valore valido ripetere l'inserimento
                Fine Se
            Finchè non viene inserito un numero > 0

       ******************************************************************************************
        Funzione quozienteDueNumeri( numeroA, numeroB )

        ritorna = floor( numeroA / numeroB )

        ******************************************************************************************
        Funzione restoQuozienteDueNumeri( numeroA, numeroB )

        ritorna = ( numeroA % numeroB )

        ******************************************************************************************
        Funzione numeroIntervallato( numeroA )

        Se numeroA >= 10000
            Allora
                Stampa:"%d  " quoziente = quozienteDueNumeri( numeroA, 10000 )
                numeroA -= quoziente * 10000
                numeroIntervallato( numeroA )
        Altrimenti Se numeroA >= 1000
                    Stampa:"%d  "quozienteDueNumeri( numeroA, 1000 )
                    numeroA -= quoziente * 1000
                    numeroIntervallato( numeroA )
        Altrimenti Se numeroA >= 100
                    Stampa:"%d  "quozienteDueNumeri( numeroA, 100 )
                    numeroA -= quoziente * 100
                    numeroIntervallato( numeroA )
        Altrimenti Se numeroA >= 10
                    Stampa:"%d  "quozienteDueNumeri( numeroA, 10 )
                    numeroA -= quoziente * 10
                    numeroIntervallato( numeroA )
        Altrimenti numeroA >= 1
                    Stampa:"%d  "


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

