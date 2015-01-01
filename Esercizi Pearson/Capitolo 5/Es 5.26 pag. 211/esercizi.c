/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Numeri perfetti
    Affinamento Top Down

    **Funzione - perfetto(numeroDaContrallare)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroDaContrallare             Numero da controllare se e perfetto                             unsigned int >= 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroFattoriale                Numero piu piccolo dei tre                                      float
    numeroPerfetto                  Se il numero e' perfetto (es. 6 = 3 + 2 + 1) stampa un mex      char

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreFattoriale             Contatore utilizzato per controllare la fattorizzazione         unsigned int >=1


    1. Il programma riceve il nuemro da controllare

    1.1 Se numeroDaControllare >= 2
            Allora
                Mentre contatoreFattoriale < numeroFattoriale
                    numeroFattoriale - contatoreFattoriale
                    numeroPerfetto += contatoreFattoriale
                    incrementa contatoreFattoriale di uno
                Fine Mentre
                Se numeroPerfetto == numeroFattoriale
                    Allora
                        Stampa:"'numeroFattoriale' e' un numero Perfetto!!!
                        Stampa:"'numeroFattoriale' =
                        Mentre contatoreFattoriale < numeroFattoriale
                            numeroFattoriale - contatoreFattoriale
                            Stampa:" + 'contatoreFattoriale'"
                            incrementa contatoreFattoriale di uno
                        Fine Mentre

       ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    maxNumDaControllare             Inserisci quanti numeri da controllare per vede se sono perfetti unsgned int >= 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroDaControllare             Numero da controllare se perfetto                               unsigned int >= 1

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.1 Esegui

            Stampa:"inserisci i numeri, partendo da 0 da controllare: "
            Leggi maxNumDaControllare
            Se maxNumDaControllare >= 1
                Allora
                    perfetto(numeroDaContrallare)
                    incrementa numeroDaContrallare di 1

        Finchè numeroDaControllare <= maxNumDaControllare


*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned int maxNumDaControllare;
    unsigned int numeroDaControllare;

    do{

        printf( "%s", "inserisci i numeri, partendo da 0 da controllare: " );
        scanf( "%u", &maxNumDaControllare );
        if ( maxNumDaControllare++ >= 1 ){
            perfetto(numeroDaContrallare);
        }
    }while( numeroDaControllare <= maxNumDaControllare );

return 0;
}//Fine funzione main

unsigned int perfetto( unsigned int numeroDaContrallare)
{

    if( numeroDaControllare >= 2 ){
        while( contatoreFattoriale++ < numeroFattoriale ){
            numeroFattoriale - contatoreFattoriale
            numeroPerfetto += contatoreFattoriale
        }
        if( numeroPerfetto == numeroFattoriale ){
            printf("%u e' un numero Perfetto!!!\n", numeroFattoriale );
            printf("%u = ", numeroFattoriale );
            while( contatoreFattoriale < numeroFattoriale ){
                numeroFattoriale - contatoreFattoriale
                Stampa:" + 'contatoreFattoriale'"
                incrementa contatoreFattoriale di uno
            }
        }
    }
}
