    /*                 Sviluppato da Luciano Faretra 09/01/2015 rilasciato sotto licenza GNUv3
                                Computerizzare cartelle cliniche

    Affinamento Top Down


    ****************************************************************************************************************

    calcoloIntervalloMinimoFrequenza(frequenzaMassima)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    INTERVALLOMINIMO                intervallo minimo essere umano, 50%                             intero
    massimaFrequenzaCardiaca        Massima frequenza caridaca paziente                             intero > 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    intervalloMinimo                pari al INTERVALLOMINIMO della massimaFrequenzaCardiaca         intero > 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

    return intervalloMinimo = (( massimaFrequenzaCardiaca * INTERVALLOMINIMO ) / INTERVALLOMINIMO )

    ****************************************************************************************************************
    */
#include <stdlib.h>
#include <stdio.h>
#include "calcoloIntervalloMinimoFrequenza.h"
#define INTERVALLOMINIMO 50

unsigned int calcoloIntervalloMinimoFrequenza( unsigned int massimaFrequenzaCardiaca )
{
    unsigned int intervalloMinimo;

return intervalloMinimo = (( massimaFrequenzaCardiaca * INTERVALLOMINIMO ) / 100 );
}
