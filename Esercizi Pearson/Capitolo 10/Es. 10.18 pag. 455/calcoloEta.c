/*                 Sviluppato da Luciano Faretra 09/01/2015 rilasciato sotto licenza GNUv3
                                Computerizzare cartelle cliniche

    Affinamento Top Down

    ****************************************************************************************************************

    Funzione calcoloEta(annoDiNascita, annoAttuale)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    annoDiNascita                   Anno di nascita del paziente                                    unsigned intero > 1900, < 2200
    annoAttuale                     Anno attuale d'esercizio                                        unsigned intero > 1900, < 2200

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    etaAttuale                      annoAttuale - annoDiNascita                                     unsigned intero > 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

    return etaAttuale = annoDiNascita - annoAttuale

    ****************************************************************************************************************
    */
#include "calcoloEta.h"

unsigned int calcoloEta( unsigned int annoDiNascita, unsigned int annoAttuale )
{
    unsigned int etaAttuale;

return etaAttuale = annoAttuale - annoDiNascita;
}


