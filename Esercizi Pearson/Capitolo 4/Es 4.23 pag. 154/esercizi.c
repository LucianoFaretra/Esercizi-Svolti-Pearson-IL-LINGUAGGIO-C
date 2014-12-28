/*                 Sviluppato da Luciano Faretra 28/12/2014 rilasciato sotto licenza GNUv3
                                    Calcola interesse composto

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    principal                       Capitale iniziale                                               unsigned intero
    rate                            Tasso d'interesse annuale                                       float

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    year                            Contatore degli anni                                            unsigned int
    amount                          Quantita in deposito                                            unsigned intero

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    year                            Contatore degli anni                                            unsigned int


    1. Riprendi il vecchio esercizio e adattalo per stampare anche i tassi 6% - 7% - 8% 9% e 10%

    1.1

*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{//inizio funzione main

    double amount;
    double principal = 1000.0;
    double rate = 5.0;
    unsigned int year;

    for( rate = 5; rate <= 10; rate++  ){
        printf( "%4s%21s%30s\n", "Year", "Amount on deposit", "Tasso d'interesse annuo" );
        for( year = 1; year <= 10; ++year ){

            amount = principal * pow( 1.0 + ( rate / 100 ), year );

            printf( "%4u%21.2f%30.0f\n", year, amount, (rate) );
        }
        puts("");
    }
return 0;
}//Fine funzione main
