/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Indovina il numero
    Affinamento Top Down

    **Funzione - GenerazioneCasualeNumero(intervallo)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    intervallo                      Indica l'intervallo da 0 a n da cui scegliere il numero         unsigned int => 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroCasuale                   Numero Generato Casualmente                                     unsigned int => 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Genera un numero casuale da 0 a n

    1.1 return rand % intervallo



       ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroCasuale                   numero generato casualmente                                     unsigned int >= 0
    numeroInput                     numero inserito dall'utente per cercare di indovinare           unsigned int >=0
    intervallo                      Indica l'intervallo da 0 a n da cui scegliere il numero         unsigned int => 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    messaggio                       Se e' stato inserito un numero piu grande/picolo di numeroCasuale string "numero piu grande", "numero piu piccolo"                                            stringa: numero piu piccolo

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    valoreSentinella                Serve per uscire dal gioco                                      unsigned int 6666

    1.1 Stampa:"Ho un numero tra 1 e 'intervallo'.
        Stampa:"Sei in grado di indovinare il mio numero?".
        Stampa:"Inserisci il tuo primo numero"
        numeroCasuale = GenerazioneCasualeNumero(intervallo);
        Esegui
            Esegui
                Leggi: leggi numeroInput
                    Se numeroInput == numeroCasuale
                        Allora
                            Stampa:"Eccellente! Hai indovinato il numero!
                        Altrimenti Se numeroInput > numeroCasuale
                            Stampa:"Troppo alto. Ritenta."
                        Altrimenti Se numeroInput < numeroCasuale
                            Stampa:"Troppo basso. Ritenta."
                    Finchè TentativiDaControllare != 0
            Finchè numeroInput != numeroCasuale
            Stampa:"Ti piacerebbe giocare ancora?
                leggi numeroInput
                    Se numeroInput == n
                        Allora
                            numeroInput = 6666
        Finchè numeroInput != valoreSentinella

*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{//inizio funzione main
    unsigned int GenerazioneCasualeNumero( unsigned int intervallo );

    unsigned int numeroCasuale;
    unsigned int numeroInput = 0;
    unsigned int intervallo = 1000;
    unsigned int valoreSentinella = 6666;


    srand( time(NULL));

    do{
        printf( "Ho un numero tra 1 e %u.\n", intervallo );
        puts( "Sei in grado di indovinare il mio numero?." );
        printf( "%s", "Inserisci il tuo primo numero: ");
        numeroCasuale = GenerazioneCasualeNumero(intervallo);
        do{
            scanf( "%u", &numeroInput );
            if( numeroInput == numeroCasuale ){
                puts( "Eccellente! Hai indovinato il numero!" );
            }
            else if( numeroInput > numeroCasuale ){
                puts( "Troppo alto. Ritenta." );
            }
            else if( numeroInput < numeroCasuale ){
                puts( "Troppo basso. Ritenta." );
            }
        }while( numeroInput != numeroCasuale );
        puts( "Ti piacerebbe giocare ancora?" );
             scanf( "%u", &numeroInput );
                if( getchar() == 'n' ){
                    numeroInput = 6666;
                }
    }while( numeroInput != valoreSentinella );

return 0;
}//Fine funzione main

unsigned int GenerazioneCasualeNumero( unsigned int intervallo )
{

return 1 + rand() % intervallo;
}
