/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Massimo comun divisore

                                    Affinamento Top Down

    **Funzione - gcd(x, y)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    x                               Primo numero di cui analizzare il Massimo Comune divisore       unsigned int => 0
    y                               Secondo numero di cui analizzare il Massimo Comune divisore     unsigned int => 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    x                               Il massimo comune divisore                                      unsigned int => 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.1 Se y == 0
         Allora
             return x
         Altrimenti
             gcd(y, x % y)


    ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    primoNumero                     Primo numero su cui calcolare il massimo comun divisore         unsigned int >= 0
    secondoNumero                   Secondo numero su cui calcolare il massimo comun divisore       unsigned int >= 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    massimoComunDivisore            Massimo comun divisore di primoNumero e secondoNumero           unsigned int >= 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

    Stampa:"Inserisci i due numeri per calcolare il Massimo comun divisore
        Leggi primoNumero secondoNumero

        Il massimo comun divisore tra 'primoNumero' e 'secondoNumero' e' pari a: gcd(x, y)

*/

#include <stdlib.h>
#include <stdio.h>

    unsigned int gcd( unsigned int x, unsigned int y);

int main(void)
{//inizio funzione main

    unsigned int primoNumero;
    unsigned int secondoNumero;

    printf( "Inserisci i due numeri per calcolare il Massimo comun divisore: ");
    scanf( "%u %u", &primoNumero, &secondoNumero );

    printf("Il massimo comun divisore tra %u e %u e' pari a: %u", primoNumero, secondoNumero, gcd(primoNumero, secondoNumero) );

return 0;
}//Fine funzione main

unsigned int gcd( unsigned int x, unsigned int y)
{
    if( y == 0 ){
        return x;
    }
    else{
        return gcd(y, x % y);
    }
}
