    /*                 Sviluppato da Luciano Faretra 09/01/2015 rilasciato sotto licenza GNUv3
                                Computerizzare cartelle cliniche

    Affinamento Top Down


    ****************************************************************************************************************

    Funzione inputDati(streamOutputPtr, tipodato)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    streamInput                     Dati in input                                                   intero/float/char
    tipodato                        Tipo di dato da leggere                                         Stringa contenente il tipo di dato da leggere
    streamOutputPtr                    Dove salvare lo streamInput                                     intero/float/char

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    streamOutputPtr                    Dove salvare lo streamInput                                     intero/float/char

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

    Se tipodato == "int"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutputPtr
            Finchè la lettura non ha successo
    Altrimenti Se tipodato == "unsigned int"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutputPtr
                    Fine Se
            Finchè la lettura non ha successo
    Altrimenti Se tipodato == "float"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutputPtr
                    Fine Se
            Finchè la lettura non ha successo
    Altrimenti Se tipodato == "char"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutputPtr

                    Fine Se
            Finchè la lettura non ha successo
    Altrimenti Se tipodato == "strig"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutputPtr
                    Fine Se
            Finchè la lettura non ha successo
    Altrimenti Se tipodato == "double"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutputPtr
                    Fine Se
            Finchè la lettura non ha successo
    Altrimenti
        stampaErrori(2)

    ****************************************************************************************************************
    */
#include "stampaErrori.h"
#include "globale.h"
#include "inputDati.h"

void inputDatiInt( int *streamOutputPtr)
{
    int esitoScanf = 0;
    do{
        esitoScanf = scanf( "%d", streamOutputPtr );
            if( esitoScanf == 0 ){
                scanf( "%*[^%\n]" );
                stampaErrori(1);
            }
    }while( esitoScanf == 0 );
return;
}

void inputDatiUnsignedInt( unsigned int *streamOutputPtr)
{
    int esitoScanf = 0;
    do{
        esitoScanf = scanf( "%u", streamOutputPtr );
            if( esitoScanf == 0 ){
                scanf( "%*[^%\n]" );
                stampaErrori(1);
            }
    }while( esitoScanf == 0 );
return;
}

void inputDatiFloat( float *streamOutputPtr)
{
    int esitoScanf = 0;
    do{
        esitoScanf = scanf( "%f", streamOutputPtr );
            if( esitoScanf == 0 ){
                scanf( "%*[^%\n]" );
                stampaErrori(1);
            }
    }while( esitoScanf == 0 );
return;
}

void inputDatiChar( char *streamOutput)
{
    int esitoScanf = 0;
    do{
        esitoScanf = scanf( "%c", streamOutput );
            if( esitoScanf == 0 ){
                scanf( "%*[^%\n]" );
                stampaErrori(1);
            }
    }while( esitoScanf == 0 );
return;
}

void inputDatiString( char *streamOutputPtr)
{
    int esitoScanf = 0;
    do{
        esitoScanf = scanf( "%s", streamOutputPtr );
            if( esitoScanf == 0 ){
                scanf( "%*[^%\n]" );
                stampaErrori(1);
            }
    }while( esitoScanf == 0 );
return;
}

void inputDatiDouble( double *streamOutputPtr)
{
    int esitoScanf = 0;
    do{
        esitoScanf = scanf( "%lf", streamOutputPtr );
            if( esitoScanf == 0 ){
                scanf( "%*[^%\n]" );
                stampaErrori(1);
            }
    }while( esitoScanf == 0 );
return;
}
