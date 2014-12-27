/*                 Sviluppato da Luciano Faretra 24/12/2014 rilasciato sotto licenza GNUv3
                                    Calcolo crescita popolazione mondiale

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    POPOLAZIONEATTUALE2014      Popolazione mondiale attuale                             unsigned int >= 0
    STIMACRESCITA               Stima di crescita annuale della popolazione mondiale     float >= 0
    anniPrevisione              Mostra la stima a tot anni dall'anno attuale             unsigned int >= 0

    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    stimaPopolazioneMondiale    Stima della popolazione mondiale in un dato tempo        unsigned int >= 0


    DATI DI LAVORO              DESCRIZIONE                                              DOMINIO
    contatoreAnniTrascorsi      Contatore anni trascorsi per il calcolo della stima      unsigned int >= 0

    1. In base alla popolazione attuale e alle stime di crescita il programma stampa l'ipotetica popolazione mondiale in un dato periodo

   */
#include <stdlib.h>
#include <stdio.h>
#define POPOLAZIONEATTUALE2014 7283292602
#define STIMACRESCITA 1.79

int main(void)
{//inizio funzione main

    unsigned int anniPrevisione;
    double stimaPopolazioneMondiale = 0;
    unsigned int contatoreAnniTrascorsi = 0;

    printf("Inserisci il numero di anni ad oggi (2014) per stimare la popolazione mondiale a tale data: ");
    scanf("%u", &anniPrevisione);

    stimaPopolazioneMondiale = (double)POPOLAZIONEATTUALE2014;
    do{
        stimaPopolazioneMondiale += ( stimaPopolazioneMondiale * (double)STIMACRESCITA / 100 );
        contatoreAnniTrascorsi++;
    }while( anniPrevisione != contatoreAnniTrascorsi );

    printf("La popolazione stimata %u anni dopo il 2014 e' pari a: %.0lf", anniPrevisione, stimaPopolazioneMondiale);

return 0;
}//Fine funzione main
