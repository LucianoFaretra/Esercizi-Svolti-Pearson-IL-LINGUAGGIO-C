/*                 Sviluppato da Luciano Faretra 31/12/2014 rilasciato sotto licenza GNUv3
                                    Arrotondamento2
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroInserito                  Numero inserito da arrotondare                                  float >= 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroArrotondatoAIntero        Numero intero arrotondato all'intero piu vicino                 int >= 0
    numeroArrotondatoADecimi        Numero intero arrotondato alla posizione dei decimi             float >= 0
    numeroArrotondatoACentesimi     Numero intero arrotondato alla posizione dei centesimi          float >= 0
    numeroArrotondatoAMigliaia      Numero intero arrotondato alla posizione dei millesimi          float >= 0

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
    unsigned int numeroArrotondatoAIntero( float x );
    float numeroArrotondatoADecimi( float x );
    float numeroArrotondatoACentesimi( float x );
    float numeroArrotondatoAMigliaia( float x );


    int valoreSentinella = -1;
    float numeroInserito;


    do{
        printf( "%s", "Inserire il numero da arrotondare: ");
        scanf("%f", &numeroInserito);
            if ( numeroInserito != valoreSentinella && numeroInserito > 0 ){
                printf("Numero Originale: \t\t\t%f\n", numeroInserito);
                printf("Numero Arrotondato a Intero: \t\t%d\n", numeroArrotondatoAIntero(numeroInserito));
                printf("Numero Arrotondato ai decimali: \t%f\n", numeroArrotondatoADecimi(numeroInserito));
                printf("Numero Arrotondato ai centesimi: \t%f\n", numeroArrotondatoACentesimi(numeroInserito));
                printf("Numero Arrotondato ai millesimi: \t%f\n", numeroArrotondatoAMigliaia(numeroInserito));
            }
            else if ( numeroInserito != valoreSentinella ){
                puts( "E' stato inserito un valore non valido" );
            }

    }while( numeroInserito != valoreSentinella );

return 0;
}//Fine funzione main

unsigned int numeroArrotondatoAIntero( float x )
{

return floor( x + .5 );
}

float numeroArrotondatoADecimi( float x )
{

return floor( x * 10 + .5 ) / 10;
}

float numeroArrotondatoACentesimi( float x )
{

return floor( x * 100 + .5 ) / 100;
}

float numeroArrotondatoAMigliaia( float x )
{

return floor( x * 1000 + .5 ) / 1000;
}
