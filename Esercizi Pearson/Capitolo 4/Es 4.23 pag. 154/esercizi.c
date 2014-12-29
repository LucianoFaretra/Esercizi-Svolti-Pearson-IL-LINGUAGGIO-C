/*                 Sviluppato da Luciano Faretra 28/12/2014 rilasciato sotto licenza GNUv3
                                    Calcola interesse composto con interi

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    principal                       Capitale iniziale                                               unsigned intero
    rate                            Tasso d'interesse annuale                                       intero

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    year                            Contatore degli anni                                            unsigned int
    amount                          Quantita in deposito                                            unsigned intero

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    year                            Contatore degli anni                                            unsigned int


    1. Riprendi il vecchio esercizio utilizzando solo numeri interi

    1.1 Stampa interfaccia
    	per ogni anno esegui
    		amount = principal * pow ( rate, year )
    		amount = principal / 100
    		resto = principal % 100
    	Stampa tabella

*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{/*inizio funzione main*/

    unsigned int amount;
    unsigned int principal = 100000;
    double rate = 0.05;
    double year;
    unsigned int resto;

    
    printf( "%4s%21s%30s\n", "Year", "Amount on deposit", "Tasso d'interesse annuo" );
    for( year = 1; year <= 10; ++year ){

        amount = principal * pow( 1.0 + rate , year );
		resto = amount % 100;
		amount = amount / 100;
		
        printf( "%4.0f%18d.%d%28.0f\n", year, amount, resto, (rate * 100) );
    }
        
return 0;
}/*Fine funzione main*/
