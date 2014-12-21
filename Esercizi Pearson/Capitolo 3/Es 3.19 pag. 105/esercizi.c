/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                                    Calcolo interessi su un prestito
Affinamento Top-Down:

    INPUT                       DESCRIZIONE                                         DOMINIO
    -ANNO                       giorni che compongono un anno                       unsigned int 365
    -tassoInteresse             Tasso d'interesse annuale                           float >= 0
    -giorniPrestito             giorni del prestito                                 unsigned int >= 0
    -importoPrestito            Ammontare del prestito                              float >= 0

    OUTPUT                      DESCRIZIONE                                         DOMINIO
    -ricaricoInteresse          Quota d'interesse da pagare data da                 float >= 0
                                importoPrestito per giorniPrestito diviso ANNO


    1. Il programma calcola gli interessi dovuti su un prestito finchè non vienen inserito un valore sentinella

    1.1 Il tasso d'interesse su un prestito viene calcolato dalla formula interesse = importoPrestito *
        tassoInteresse * giorniPrestito / ANNO finchè non viene inserito un valore sentinella

    1.2 Azzera contatori
            Esegui
                Stampa: "Inserire importo prestito (-1 per uscire): "
                Leggi importoPrestito
                Se il valore del prestito è diverso dal valoreSentinella
                    Allora
                           calcola il ricaricoInteresse moltiplicando importoPrestito per tassoInteresse per
                                        giorniPrestito diviso ANNO
                            Stampa il messaggio: "L'importo degli interessi è pari a: "
                            stampa ricaricoInteersse in dollari
                Fine Se
            Finchè il valore delle vendite è diverso dal valoreSentinella
            Fine

*/
#include <stdlib.h>
#include <stdio.h>
#define ANNO 365

int main(void)
{//inizio funzione main

    float tassoInteresse = 0;
    unsigned int giorniPrestito = 0;
    int valoreSentinella = -1;
    float importoPrestito = 0;
    float ricaricoInteresse = 0;

    do{//Esegui finchè non viene inserito il valoreSentinella
        printf("%s", "\nInserire l'importo del Prestito (-1 per uscire): ");
        scanf("%f", &importoPrestito);
            if(importoPrestito != valoreSentinella){

                printf("%s", "Inserire tasso d'interesse: ");
                scanf("%f", &tassoInteresse);

                printf("%s", "Inserire durata prestito in giorni: ");
                scanf("%u", &giorniPrestito);

                ricaricoInteresse = ((importoPrestito * tassoInteresse * (float)giorniPrestito) / (float)ANNO);

                printf("Il ricarico degli interessi e' pari a: $%.02f\n", ricaricoInteresse);
            }//Fine Se vendite != valoreSentinella

    }while(importoPrestito != valoreSentinella);//Fine while

return 0;
}//Fine funzione main
