/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Timulazione lancio di una moneta
    Affinamento Top Down

    **Funzione - flip()

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    0/1                             La funzione ritorna 0 croce 1 testa                          unsigned int

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Simula il lancio di una monetina e da testa o croce

    1.1 return srand(time(NULL)) % 2



       ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    TentativiDaControllare          Tetativi per cui lanciare la monetina                           unsgned int >= 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroTesta                     Numero di volte in cui e' uscito testa                          unsigned int >= 0
    numeroCroce                     Numero di volte in cui e' uscito croce                          unsigned int >= 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.1 Esegui
            Stampa:"Indica quante volte vuoi lanciare la moneta: "
            Leggi: TentativiDaControllare

                Esegui

                    Se flip(void) == 0
                        Allora
                            numeroCroce + 1
                        Altrimenti
                            numeroTesta +1

                Finchè TentativiDaControllare != 0

        Finchè TentativiDaControllare >= 1

        Stampa:"Il numero volte in cui e' uscita testa e' pari a: numeroTesta"
        Stampa:"Il numero volte in cui e' uscita croce e' pari a: numeroCroce"

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main
    unsigned int flip(void);

    unsigned int TentativiDaControllare;
    unsigned int numeroCroce = 0;
    unsigned int numeroTesta = 0;

        printf( "%s", "Indica quante volte vuoi lanciare la moneta: " );
        scanf( "%u", &TentativiDaControllare );

        if(TentativiDaControllare >= 1){

            do{

                if( flip() == 0 ){
                    numeroCroce++;
                }
                else{
                    numeroTesta++;
                }
                printf("%d\n", flip());
            TentativiDaControllare--;
            }while(TentativiDaControllare > 0);
        }
        else{
            printf("%s", "E' stato inserito un valore non valido");
        }

    printf( "Il numero volte in cui e' uscita testa e' pari a: %u\n", numeroTesta );
    printf( "Il numero volte in cui e' uscita croce e' pari a: %u\n", numeroCroce );

return 0;
}//Fine funzione main

unsigned int flip(void)
{
    srand( time(NULL));

return rand() % 2;
}
