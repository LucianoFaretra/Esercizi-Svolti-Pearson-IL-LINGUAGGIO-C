/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                Software che dimostra l'utilizzo del predecrementatore e postdecrementatore
Affinamento Top-Down:

    INPUT                       DESCRIZIONE                                                DOMINIO
    -PUNTEGGIOMAX               Punteggio massimo gara                                     unsigned intero 1000
    -ordineDiArrivo             Ordine d'arrivo                                            unsigned int 10
    -numeroPartecipanti         Indica quanti partecipanti c'erano in gara                 unsigned int > 0
    -POSIZIONICONPUNTI          Indica quante posizioni partendo dalla prima vengono prem. unsigned int > 0
    -puntiPerPosizione          PUNTEGGIOMAX diviso POSIZIONICONPUNTI                      float > 0

    OUTPUT                      DESCRIZIONE                                                DOMINIO
    -punteggioPosizione         Moltra il punteggio relativo alla posizione                float >= 0


    1. Assegna il punteggio in base all'ordine d'arrivo dei partecipanti e li mostra in modo decrescente

    1.1 Dividi il numero di punti in palio per le posizioni da premiare
        Azzera contatori
        Stampa il messaggio: "Inserisci il numero di partecipanti: "
        Leggi il numeroPartecipanti
            Esegui
                Se ordineDiArrivo e' uguale o minore di 10
                    Allora Esegui
                            Stampa: "Per il corridore numero ordineDiArrivo il punteggio e' pari a: puntiPerPosizione"
                            decrementa ordineDiArrivo di uno

                            Finchè ordineDiArrivo è diverso da 0
                decrementa ordineDiArrivo di uno
            Finchè le numeroPartecipanti sono diverse da 0
            Fine
*/
#include <stdlib.h>
#include <stdio.h>
#define PUNTEGGIOMAX 1000 //Numero punti in palio per questa gara
#define POSIZIONICONPUNTI 10 //Numero posizioni da premiare

int main(void)
{//inizio funzione main

    unsigned int ordineDiArrivo = POSIZIONICONPUNTI;
    unsigned int numeroPartecipanti = 0;
    float punteggioPosizione = 0;
    float puntiPerPosizione = 0;

    printf("%s", "Inserire il numero di partecipanti: ");
    scanf("%u", &numeroPartecipanti);

    puntiPerPosizione = ( (float)PUNTEGGIOMAX / (float)POSIZIONICONPUNTI );

    do{
    printf("Per il corridore numero %u il punteggio e' pari a: 0\n", numeroPartecipanti);
    --numeroPartecipanti;
        if(ordineDiArrivo <= (unsigned int)POSIZIONICONPUNTI)
            do{
                punteggioPosizione += puntiPerPosizione;
                printf("Per il corridore numero %u il punteggio e' pari a: %.0f\n", ordineDiArrivo, punteggioPosizione);
                --ordineDiArrivo;

            }while(ordineDiArrivo != 0);
    }while(numeroPartecipanti != 0);

return 0;
}//Fine funzione main
