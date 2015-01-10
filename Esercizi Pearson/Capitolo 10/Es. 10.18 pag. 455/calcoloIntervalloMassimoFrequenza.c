    /*                 Sviluppato da Luciano Faretra 09/01/2015 rilasciato sotto licenza GNUv3
                                Computerizzare cartelle cliniche

    Affinamento Top Down


    ****************************************************************************************************************

    calcoloIntervalloMassimoFrequenza(frequenzaMassima)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    INTERVALLOMASSIMO               intervallo massimo essere umano, 80%                            intero
    massimaFrequenzaCardiaca        Massima frequenza caridaca paziente                             intero > 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    intervalloMassimo               pari al INTERVALLOMASSIMO della massimaFrequenzaCardiaca        intero > 0


    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

    return intervalloMassimo = (( massimaFrequenzaCardiaca * INTERVALLOMASSIMO ) / INTERVALLOMASSIMO )

    ****************************************************************************************************************
    */
#include <stdlib.h>
#include <stdio.h>
#include "calcoloIntervalloMassimoFrequenza.h"
#define INTERVALLOMASSIMO 80

unsigned int calcoloIntervalloMassimoFrequenza( unsigned int massimaFrequenzaCardiaca )
{
    unsigned int intervalloMassimo;

return intervalloMassimo = (( massimaFrequenzaCardiaca * INTERVALLOMASSIMO ) / 100 );
}

