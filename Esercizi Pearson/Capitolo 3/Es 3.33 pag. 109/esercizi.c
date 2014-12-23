/*                 Sviluppato da Luciano Faretra 23/12/2014 rilasciato sotto licenza GNUv3
                                    Quadrato vuoto ed asterischi

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

    1. Data una dimensione compresa tra 1 e 2, il programma stampa un quadrato che ha la dimensione per lato del quadrato, am vuoto all'interno

    1.1 Esegui
            Leggi lato
            Se lato > 1
                Allora
                    Se lato < 20
                        Allora
                            Assegna a valoreSentinella il valore 1
                            azzera righe
                            mentre righe sono minori di lato
                                azzera colonne
                                mentre colonne sono minori di lato
                                    Se si tratta della prima riga allora stampa "*"
                                    Altrimenti Se si tratta dell'ultima riga allora stampa "*"
                                    Altrimenti Se si tratta della prima colonna allora stampa "*"
                                    Altrimenti se si tratta dell'ultima colonna allora stampa "*"
                                    Altrimenti stampa " "
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
        lato++;//Correzione di fattore 0 del C
            if( --lato > (unsigned int)MINDIMLATO ){
                    if ( --lato < (unsigned int)MAXDIMLATO){
                        valoreSentinella = 1;
                            righe = 0;
                            while( righe <= lato ){
                                colonne = 0;
                                while( colonne <= lato ){
                                   if(righe == 0){
                                    printf("%s", "*");
                                   }
                                   else if(righe == lato){
                                    printf("%s", "*");
                                   }
                                   else if(colonne == 0){
                                    printf("%s", "*");
                                   }
                                   else if(colonne == lato){
                                    printf("%s", "*");
                                   }
                                   else
                                    printf("%s", " ");
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
