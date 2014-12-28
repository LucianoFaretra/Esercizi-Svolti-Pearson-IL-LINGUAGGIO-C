/*                 Sviluppato da Luciano Faretra 28/12/2014 rilasciato sotto licenza GNUv3
                                    Calcolo delle vendite
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroProdotto                  Numero identificativo prodotto                                  unsigned intero > 0
    quantitaVenduta                 Numero di oggetti venduti del tipo numeroProdotto               unsigned intero >= 0
    prezzoUnitarioDettaglio         Prezzo relativo al singolo oggetto                              float > 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    totaleVendite                   totale vendite in dollari del prodotto selezionato               float >= 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. l'utente inserisce il numero prodotto e la quantita di venduto ed il programma il valroe al dettaglio dei prodotti venduti


    1.1 Stampa:"Inserire il numero del prodotto venduto e la quantita venduta in questa settimana: "
        leggi numeroProdotto quantitaVenduta

        nel caso numeroProdotto == 1
            prezzoUnitarioDettaglio = 2.98
        nel caso numeroProdotto == 2
            prezzoUnitarioDettaglio = 4.50
        nel caso numeroProdotto == 3
            prezzoUnitarioDettaglio = 9.98
        nel caso numeroProdotto == 4
            prezzoUnitarioDettaglio = 4.49
        nel caso numeroProdotto == 5
            prezzoUnitarioDettaglio = 6.87

       totaleVendite = ( prezzoUnitarioDettaglio * quantitaVenduta )

        Stampa:"Le vendite totali del prodotto 'numeroProdotto' al prezzo unitario di $'prezzoUnitarioDettaglio' sono state di: $'totaleVendite'

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned int numeroProdotto;
    unsigned int quantitaVenduta;
    float prezzoUnitarioDettaglio;
    float totaleVendite;
    unsigned int valoreSentinella = 1;


    printf( "%s", "Inserire il CODICE PRODOTTO e la QUANTITA' venduta questa settimana separati da uno spazio: ");
    scanf("%u %u", &numeroProdotto, &quantitaVenduta);

    switch( numeroProdotto ){
        case( 1 ):
            prezzoUnitarioDettaglio = 2.98;
            break;

        case( 2 ):
            prezzoUnitarioDettaglio = 4.50;
            break;

        case( 3 ):
            prezzoUnitarioDettaglio = 9.98;
            break;

        case( 4 ):
            prezzoUnitarioDettaglio = 4.49;
            break;

        case( 5 ):
            prezzoUnitarioDettaglio = 6.87;
            break;
        case( '\n' ):
        case( '\t' ):
        case( ' ' ):
            break;

        default:
            puts("Valore errato, reinserire codice prodotto.");
            valoreSentinella = 0;
            break;
    }

    if( valoreSentinella == 1 ){
        totaleVendite = ( prezzoUnitarioDettaglio * quantitaVenduta );

        puts("");
        printf( "Le vendite del prodotto %u \"prezzo al dettaglio $%.2f\" sono state di: $%.2f", numeroProdotto, prezzoUnitarioDettaglio, totaleVendite );
        puts("");
    }

return 0;
}//Fine funzione main
