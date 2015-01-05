/*                 Sviluppato da Luciano Faretra 05/01/2015 rilasciato sotto licenza GNUv3
                                    Esercizio 7.24 Modificato
    Affinamento Top Down


    INPUT                           DESCRIZIONE                                                     DOMINIO


    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.

    */

#include <time.h>

#include "globale.h"
//#include "deal.h"
#include "risultatiCarte.h"
#include "shuffle.h"

int main()
{
    /*Inizializza l'array dei semi*/
    const char *suit[ SUITS ] = { "Cuori", "Quadri", "Fiori", "Picche" };

    /*Inizializza l'array delle facce*/
    const char *face[ FACES ] = { "Asso", "Due", "Tre", "Quattro", "Cinque", "Sei",
                                    "Sette", "Otto", "Nove", "Dieci", "Jack", "Regina", "Re" };

    /*Inizializza l'array deck*/
    unsigned int deck[ SUITS ][ FACES ] = { { 0 }, { 0 } };

    /*Inizializza il seme per il generatore di numeri casuali*/
    srand(time(NULL));

    shuffle( deck ); /*Mescola il mazzo*/

    manoPoker( deck, face, suit ); /*Distribuisci il mazzo*/

return 0;
}
