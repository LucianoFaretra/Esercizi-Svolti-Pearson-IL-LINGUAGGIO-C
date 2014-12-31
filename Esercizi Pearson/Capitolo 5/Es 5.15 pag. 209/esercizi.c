/*                 Sviluppato da Luciano Faretra 31/12/2014 rilasciato sotto licenza GNUv3
                                    Calcolo ipotenusa
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    lato1                           Primo lato del triangolo                                        float > 0
    lato2                           Secondo lato del triangolo                                      float > 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    ipotenusa                       Radice quadra del quadrato del primo cateto più radice quadra   float > 0
                                    del quadrato dei due cateti

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    valoreSentinella                Valore sentinella utilizzato per uscire dal ciclo d'inseriemento int -1
    contatoreInserimenti            Contatore di quanti inserimenti sono stati fatti                unsigned int >= 1

    1. Il programma, dato due lati di unt riangolo deve calcolare l'ipotenusa


    1.1 Funzione Main

        Esegui
            Stampa:"Inserire il primo lato del triangolo"
            Leggi lato1
            Stampa:"Inserire il secondo lato del triangolo"
            Leggi lato2

            Se lato1 > 0 && lato2 > 0
                Allora
                    ipotenusa = calcoloIpotenusa( lato1, lato2 )
                        Se lato1 + lato2 > ipotenusa && lato1 + lato2 <= ipotenusa
                            Allora
                                Stampa: L'ipotenusa del 'contatoreInserimenti' triangolo è pari a: 'ipotenusa'
                                incrementa contatoreInserimenti di uno
                            Altrimenti
                                Stampa: Attenzione i dati inseriti non corrispondono ad un triangolo
                        Fine Se
                Altrimenti Se lato1 != valoreSentinella && lato2 != valoreSentinella
                    Allora
                        Stampa:"Attenzione è stato inserito un valore non valido
                Fine Altrimenti Se
            Fine Se
        Finchè non viene inserito il valore sentinella

        Funzione ipotenusa( lato1, lato2 )

        ritorna = radice quadrata di lato1^2+lato2^2



*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{//inizio funzione main
    double calcoloIpotenusa( double lato1, double lato2 );


    float valoreSentinella = -1;
    float lato1;
    float lato2;
    float ipotenusa;
    unsigned int contatoreInserimenti = 1;


    do{
        printf( "%s", "Inserire il primo lato del triangolo ( Lato2 -1 per uscire ): ");
        scanf("%f", &lato1);
        printf( "%s", "Inserire il secondo lato del triangolo ( -1 per uscire ): ");
        scanf("%f", &lato2);

        if( lato1 > 0 && lato2 > 0 ){
            ipotenusa = calcoloIpotenusa( lato1, lato2 );
                if( ( lato1 + lato2 ) > ipotenusa && ( lato1 - lato2 ) <= ipotenusa && ( lato2 - lato1 ) <= ipotenusa ){
                    printf("L'ipotenusa del %u triangolo con Lato1 di %.1f e Lato2 di %.1f e' pari a: %.1f\n", contatoreInserimenti, lato1, lato2, ipotenusa );
                    contatoreInserimenti++;
                }
                else{
                    puts("Attenzione i dati inseriti non corrispondono ad un triangolo.");
                }
        }
        else if( lato1 != valoreSentinella && lato2 != valoreSentinella ){
                puts("Attenzione è stato inserito un valore non valido");
        }
    }while( lato1 != valoreSentinella && lato2 != valoreSentinella );


return 0;
}//Fine funzione main

double calcoloIpotenusa( double lato1, double lato2 )
{

return  sqrt( pow( lato1, 2 ) + pow( lato2, 2 ) );
}
