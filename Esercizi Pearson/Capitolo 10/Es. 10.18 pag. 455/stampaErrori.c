    /*                 Sviluppato da Luciano Faretra 09/01/2015 rilasciato sotto licenza GNUv3
                                Computerizzare cartelle cliniche

    Affinamento Top Down


    ****************************************************************************************************************

    stampaErrori(numeroErrore)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroErrore                    Numero Errore riscontrato                                       intero >= 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    ErroreN                         Stampa il messaggio d'errore relativo                           Stringa di caratteri

                                    ******************************

    Se numeroErrore == 1
        Allora
            Stampa:"Attenzione, input non valido"
    Altrimenti Se numeroErrore == 2
        Allora
            Stampa:"Dato inserito non supportato"
    Altrimenti
        Stampa:"Numero errore non valido"

    */

#include <stdlib.h>
#include <stdio.h>
#include "stampaErrori.h"

void stampaErrori( unsigned int numeroErrore )
{
    if( numeroErrore == 1 ){
        printf("%s", "\fAttenzione, input non valido\n" );
    }
    else if( numeroErrore == 2 ){
        printf("%s", "\fDato inserito non supportato\n" );
    }
    else if( numeroErrore == 3 ){
        printf("%s", "\fData Errata\n" );
    }
    else{
        printf("%s", "\fNumero errore non valido" );
    }

return;
}
