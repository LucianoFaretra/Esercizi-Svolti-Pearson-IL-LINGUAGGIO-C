/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Eponenziazione ricorsiva
    Affinamento Top Down

    **Funzione - power(base, esponente)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    base                            Base del numero su cui calcolare la potenza                     unsigned int => 1
    esponente                       Esponente del numero su cui calcolare la potenza                unsigned int => 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    risultato                       Numero elevato a potenza                                        unsigned int => 1

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Riceve un numero ed un esponente e calcola la potenza ricorsivamente

    1.1 Se esponente > 1
            Allora
                base = base * base
                esponente - 1
                power(base, esponente)
            Altrimenti
                return base


       ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    base                            Base del numero su cui calcolare la potenza                     unsigned int => 1
    esponente                       Esponente del numero su cui calcolare la potenza                unsigned int => 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    risultato                       Numero elevato a potenza                                        unsigned int => 1

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.1 Esegui
            Stampa:"Inserisci la base e la potenza del numero da calcolare separati da uno spazio: "
            Leggi base esponente

            Se base > 0 && esponente > 0
                Allora
                    Stampa:"'base' elevato a 'esponente' e' pari a: 'power(base, esponente)'"
                Altrimenti
                    Stampa:"Attenzione sono accettati solo interi positivi > 0"
        Finchè non viene inserito un numero >= 1

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main
    unsigned int power( int base, unsigned int esponente);

    int base;
    unsigned int esponente;

    do{
        printf( "%s", "Inserisci la base e la potenza del numero separati da uno spazio (-666 per uscire): ");
        scanf( "%u %u", &base, &esponente);

        if( base > 0 && esponente > 0 ){
            printf("%d elevato a %u e' pari a: %u\n", base, esponente, power(base, esponente) );
        }
        else{
            puts( "Attenzione sono accettati solo interi positivi > 0" );
        }
    }while( base >= 1 && esponente >= 1 && base != -666 );

return 0;
}//Fine funzione main

unsigned int power( int base, unsigned int esponente)
{
    if( esponente > 1 ){
        base = base * base;
        esponente--;
        power(base, esponente);
    }

return base;
}
