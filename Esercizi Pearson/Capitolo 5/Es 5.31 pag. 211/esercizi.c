/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Timulazione lancio di una moneta
    Affinamento Top Down

    **Funzione - flip()

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    0/1                             La funzione ritorna 0 croce 1 testa                          unsigned int

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Simula il lancio di una monetina e da testa o croce

    1.1 Se numeroDaControllare >= 2
            Allora
                contatoreDivisione = numeroDaControllare
                Mentre contatoreDivisione >= 2
                    Se numeroDaControllare % contatoreDivisione == 0
                        Allora
                            return 0
                        Altrimenti
                            decrementa contatoreDivisione di 1
                    Fine Se
                Fine Mentre
                return 1
            Altrimenti
                return 0

       ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    maxNumDaControllare             Inserisci quanti numeri da controllare per vede se sono primi   unsgned int >= 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroPrimo                     E' un numero primo                                              unsigned int >= 1

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreNumeri                 Contatore che permette la selezione dei numeri                  unsigned int >= 1


    1.1 Esegui
            Stampa:"Indica quanti numeri si desidera controllare: "
            Leggi: maxNumDaControllare

                Esegui

                    numeroPrimo = controlloNumeroPrimo(numeroDaControllare)
                    Se numeroPrimo == 1
                        Allora
                            Stampa: " 'contatoreNumeri' e' un numero primo!!"
                    Fine Se
                    Incrementa contatoreNumeri di 1

                Finchè contatoreNumeri <= maxNumDaControllare


        Finchè maxNumDaControllare >= 0


*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main
    unsigned int controlloNumeroPrimo( unsigned int numeroDaControllare);

    unsigned int maxNumDaControllare;
    unsigned int numeroPrimo;
    unsigned int contatoreNumeri = 1;
    unsigned int quantiNumeriPrimi = 0;

    printf( "%s", "Indica quanti numeri si desidera controllare: " );
    scanf( "%u", &maxNumDaControllare );

    do{
        numeroPrimo = controlloNumeroPrimo(contatoreNumeri);
        if( numeroPrimo == 1 ){
            printf( "%u e' un numero primo!!\n", contatoreNumeri );
            quantiNumeriPrimi++;
        }

    }while( contatoreNumeri++ < maxNumDaControllare );

    printf("\nSono stati scoperti: %u numeri primi", quantiNumeriPrimi );

return 0;
}//Fine funzione main

unsigned int controlloNumeroPrimo( unsigned int numeroDaControllare )
{
    unsigned int contatoreDivisione;

    if( numeroDaControllare >= 2 ){

        contatoreDivisione = ( numeroDaControllare - 1 );
        while( contatoreDivisione >= 2 ){
            if( numeroDaControllare % contatoreDivisione == 0 ){
                return 0;
            }
            else{
                contatoreDivisione--;
            }
        }
        return 1;
    }
    else{
        return 0;
    }
}
