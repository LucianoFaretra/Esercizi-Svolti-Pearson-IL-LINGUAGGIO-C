/*                 Sviluppato da Luciano Faretra 23/12/2014 rilasciato sotto licenza GNUv3
                                        Test di velocità

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    NUMEROINZIALE               numero da cui far partire il conto                       unsigend int > 0
    NUMEROFINALE                numro dove termina il conteggio                          unsigned int > 0

    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    moltiplo                    Stampa ogni multiplo di 100.000.000                      unsigned int > 0

    DATI DI LAVORO              DESCRIZIONE                                              DOMINIO
    contatore                   Contatore che conta i numeri                             unsigned int > 0

    1. tramite in ciclo conta da NUMEROINIZIALE fino a NUMEROFINALE ed e stampa ogni multiplo di 100.000.000

    1.1 Definisci le costanti
        Mentre contatore <= NUMEROFINALE
            Se contatore % multiplo == 0
                Allora
                    Stampa contatore
            Fine se
        contatore++
        Fine



*/
#include <stdlib.h>
#include <stdio.h>
#define NUMEROINZIALE 1
#define NUMEROFINALE 1000000000

int main(void)
{//inizio funzione main

    unsigned int multiplo = 100000000;
    unsigned int contatore = (unsigned int)NUMEROINZIALE;

    while(contatore <= (unsigned int)NUMEROFINALE){
       if(contatore % multiplo == 0){
            printf("%u\n", contatore);
        }//Fine if
        contatore++;
    }//Fine While

return 0;
}//Fine funzione main
