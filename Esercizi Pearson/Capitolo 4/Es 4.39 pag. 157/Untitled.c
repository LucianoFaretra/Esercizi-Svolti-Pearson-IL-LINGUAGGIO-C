/*                 Sviluppato da Luciano Faretra 30/12/2014 rilasciato sotto licenza GNUv3
                                Calcolo crescita popolazione mondiale e rapporto

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

    unsigned int anniPrevisione = 0;
    double stimaPopolazioneMondiale = 0;
    unsigned int aumento = 0;
    unsigned int salvaStato;

    printf("%4s\t%17s\t%18s\n", "Anno", "Stima Popolazione", "Stima Aumento Anno");
    stimaPopolazioneMondiale = (double)POPOLAZIONEATTUALE2014;
    do{
        salvaStato = stimaPopolazioneMondiale;
        stimaPopolazioneMondiale += ( (stimaPopolazioneMondiale * (double)STIMACRESCITA) / 100 );
        aumento = stimaPopolazioneMondiale - salvaStato;
        anniPrevisione++;
        printf("%4u\t%17.0lf\t%18u\n", anniPrevisione, stimaPopolazioneMondiale, aumento);
    }while( anniPrevisione < 75 );


return 0;
}//Fine funzione main
