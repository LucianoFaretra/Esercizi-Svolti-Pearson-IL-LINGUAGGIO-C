/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3

Affinamento Top-Down:

    INPUT                       DESCRIZIONE                                     DOMINIO
    -galloniConsumati           Galloni di carburante utilizzati                float > 0
    -migliaPercorse             Miglia percorse durante il viaggio              uns int > 0
    -valoreSentinella           Valore sentinella per interrompere input        int < 0
    -subGalloniConsumati        subtotale galloni consumati                     float > 0
    -subMigliaPercorse          subtotale miglia percorse                       uns int > 0

    OUTPUT                      DESCRIZIONE                                     DOMINIO
    -migliaPerGallone           Miglia percorse per ogni gallone di carburante  float > 0
    -mediaMigliaPerGallone      parzialeMedia diviso numero inserimenti         float > 0


    1. Calcola le miglia per gallone percorse ed una volta finiti gli inserimenti calcola la media

    1.1 Inizializza i contatore a zero

        Finchè ci sono ancora dati da inserire

            inserisci il valore galloniConsumati

            Se non è stato inserito il valore sentinella
                inserisci il valore migliaPercorse

                Calcola le miglia per gallone

                Stampa i migliaPerGallone

                aggiungi i galloniConsumati al subtotaleGalloniConsumati
                aggiungi le migliaPercorse al subtotaleMigliaPercorse
            Fine

        Calcola la mediaMigliaPerGallone dividendo il subtotaleMigliaPercorse per il subtotaleGalloniConsumati
        Stampa mediaMigliaPerGallone
        Fine
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    float galloniConsumati = 0;
    unsigned int migliaPercorse = 0;
    float migliaPerGallone = 0;
    int valoreSentinella = -1;
    float subGalloniConsumati = 0;
    unsigned int subMigliaPercorse = 0;

    while(galloniConsumati != valoreSentinella) { //Rpeti finchè non viene inserito il valore sentilenna

        printf("%s", "Prego inserire i galloni di carburante utilizzati (-1 per terminare): ");
        scanf("%f", &galloniConsumati);

        if(galloniConsumati != valoreSentinella){

            printf("%s", "\nPrego inserire le miglia di guida: ");
            scanf("%d", &migliaPercorse);

            migliaPerGallone = ( migliaPercorse / galloniConsumati );
            printf("\nLe miglie/galloni per questo camion sono state %f", migliaPerGallone);

            subMigliaPercorse += migliaPercorse;
            subGalloniConsumati += galloniConsumati;
        }
    }//Fine While

    printf("\n\nLa media totale di miglia/gallore e': %f\n", (subMigliaPercorse / subGalloniConsumati));

return 0;
}//Fine funzione main
