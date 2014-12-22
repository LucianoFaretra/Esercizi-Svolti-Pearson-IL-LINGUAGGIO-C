/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                                    Quadrati ed asterischi

    Affinamento Top Down

    INPUT                       DESCRIZIONE                             DOMINIO
    lato                        Lato del quadrato                       unsigned int >= 1, <= 20
    MAXDIMLATO                  Dimensioni massime lato del quadrato    unsigned int <= 20
    MAXDIMLATO                  Dimensioni minime lato del quadrato     unsigned int >= 1

    OUTPUT                      DESCRIZIONE                             DOMIONIO
    quadrato                    Spampa un blocco del quadrato con *     char *

    DATI DI LAVORO              CONTATORE                               DOMINIO
    righe                       righe che compongono il quadrato        unsigned int >=1, <=20
    colonne                     colonne che compongono il quadrato      unsigned int >=1, <=20
    valoreSentinella            valore sentinella                       unsigned int 1;

    1. Data una dimensione compresa tra 1 e 2, il programma stampa un quadrato che ha la dimensione per lato dle quadrato

    1.1 Esegui
            Leggi lato
            Se lato > 1
                Allora
                    Se lato < 20
                        Allora
                            Assegna a valoreSentinella il valore 1
                            mentre righe sono minori di lato
                                mentre colonne sono minori di lato
                                    Stampa "quadrato"
                                aumenta colonne di uno
                            aumenta righe di uno
                    Fine se
            Fine se
        Finche valoreSentinella e' diverso da 1
        Fine

*/
#include <stdlib.h>
#include <stdio.h>
#define MAXDIMLATO 20
#define MINDIMLATO 1

int main(void)
{//inizio funzione main

    unsigned int lato = 0;
    unsigned int righe;
    unsigned int colonne;
    unsigned int valoreSentinella = 0;

    do{
        printf("Inserire il lato del quadrtato: ");
        scanf("%u", &lato);
            if( lato >= (unsigned int)MINDIMLATO ){
                    if (lato <= (unsigned int)MAXDIMLATO){
                        valoreSentinella = 1;
                            righe = 0;
                            while( righe < lato ){
                                colonne = 0;
                                while( colonne < lato ){
                                    printf( "*");
                                colonne++;
                                }//FIne while
                            puts("");
                            righe++;
                            }//Fine while
                    }//Fine If
            }//Fine if
    }while( valoreSentinella != 1 ); //Fine while

return 0;
}//Fine funzione main
