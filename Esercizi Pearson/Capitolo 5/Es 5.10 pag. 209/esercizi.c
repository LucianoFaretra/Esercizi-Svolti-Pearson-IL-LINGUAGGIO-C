/*                 Sviluppato da Luciano Faretra 31/12/2014 rilasciato sotto licenza GNUv3
                                    Arrotondamento
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroInserito                  Numero inserito da arrotondare                                  float >= 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroArrotondato               Numero intero arrotondato all'intero piu vicino                 int >= 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    valoreSentinella                Valore sentinella utilizzato per uscire dal ciclo d'inseriemento int -1

    1. Il programma arrotonda l'intero inserito all'intero piu vicino


    1.1 Funzione Main



*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{//inizio funzione main
    unsigned int arrotondamento( float x );

    int valoreSentinella = -1;
    float numeroInserito;


    printf("\t\t\t\t\t%16s\t%18s ", "Numero Originale", "Numero Arrotondato");
    do{
        printf( "%s", "Inserire il numero da arrotondare: ");
        scanf("%f", &numeroInserito);
            if ( numeroInserito != valoreSentinella && numeroInserito > 0 ){
                printf("\t\t\t\t\t%8.2f\t%10u\n", numeroInserito, arrotondamento(numeroInserito));
            }
            else if ( numeroInserito != valoreSentinella ){
                puts( "E' stato inserito un valore non valido" );
            }

    }while( numeroInserito != valoreSentinella );

return 0;
}//Fine funzione main

unsigned int arrotondamento( float x )
{

return floor( x + .5 );
}
