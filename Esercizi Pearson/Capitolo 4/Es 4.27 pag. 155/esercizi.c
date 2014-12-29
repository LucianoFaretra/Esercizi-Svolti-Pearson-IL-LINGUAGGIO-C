/*                 Sviluppato da Luciano Faretra 28/12/2014 rilasciato sotto licenza GNUv3
                                    	Triple Pitagoriche

     Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    NUMEROTENTATIVI                 Numero di tentativi per lato per scopire la tripla pitagorica   intero > 0
    contatoreLatoA                  Conta i tentativi del lato a                                    unsigned intero > 0
    contatoreLatoB                  Conta i tentativi del lato b                                    unsigned intero > 0
    contatoreLatoC                  Conta i tentativi del lato c                                    unsigned intero > 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    triplaPitagorica                Se latoA^2 + latoB^2 = latoC^2 stampa messaggio                 Stringa di caratteri

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreLatoA                  Conta i tentativi del lato a                                    unsigned intero > 0
    contatoreLatoB                  Conta i tentativi del lato b                                    unsigned intero > 0
    contatoreLatoC                  Conta i tentativi del lato c                                    unsigned intero > 0


    1. Stampa le triple pitagoriche di un triangolo rettangolo con lati da 1 a 500

    1.1



*/

#include <stdlib.h>
#include <stdio.h>
#define NUMEROTENTATIVI 500

int main(void)
{/*inizio funzione main*/

    unsigned int contatoreLatoA;
    unsigned int contatoreLatoB;
    unsigned int contatoreLatoC;

    puts("E' in azione l'algoritmo per scoprire le Triple pitagoriche");

    for( contatoreLatoA = 1; contatoreLatoA <= NUMEROTENTATIVI; contatoreLatoA++ ){
        for( contatoreLatoB = 1; contatoreLatoB <= NUMEROTENTATIVI; contatoreLatoB++ ){
            for( contatoreLatoC = 1; contatoreLatoC <= NUMEROTENTATIVI; contatoreLatoC++ ){

                if( (( contatoreLatoA * contatoreLatoA) + ( contatoreLatoB * contatoreLatoB )) == ( contatoreLatoC * contatoreLatoC) ){
                    printf("Tripla pitagorica trovata! LatoA: %u LatoB: %u LatoC: %u\n", contatoreLatoA, contatoreLatoB, contatoreLatoC );

                }
            }
        }
    }

return 0;
}/*Fine funzione main*/
