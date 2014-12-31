/*                 Sviluppato da Luciano Faretra 31/12/2014 rilasciato sotto licenza GNUv3
                                    Esponenziazione
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    base                            Base intera del numero su cui calcolare l'esponente             int > 0
    esponente                       Esponente su cui moltiplicare la base                           unsiged int >= 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    risultato                       Risultato della moltiplicazione per l'esponente                 unsigned int >= 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    valoreSentinella                Valore sentinella utilizzato per uscire dal ciclo d'inseriemento int -1
    contatoremoltiplicazioni        COntatore utilizzato per il ciclo di mltiplicazione             unsigned int >= 1

    1. Il programma riceve una base e un'esponente e da in output il numero base moltiplicato per quanti esponenti è elevato


    1.1 Funzione Main

        Esegui
            Stampa:"Inserire la base numerica ( -1 per uscire ): "
            Leggi base
            Stampa:"Inserire l'esponente: "
            Leggi esponente

            Se base > 0 && esponente >= 0
                Allora
                    risultato = integerPower( base, esponente )
                    Stampa: Il numero 'base' elevato a 'esponente' e' pari a: 'risultato'

                Altrimenti Se base != valoreSentinella && esponente < 0
                    Allora
                        Stampa:"Attenzione è stato inserito un valore non valido
            Fine Se
        Finchè non viene inserito il valore sentinella

        Funzione integerPower( base, esponente )

        Se esponente == 0
            Allora
                return 0
            Altrimenti
                risultato = 1;
                Per contatoremoltiplicazioni = esponente; Finche' contatoremoltiplicazioni >= 1; contatoremoltiplicazioni--
                    risultato *= base

                ritorna risultato
        Fine Se



*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{//inizio funzione main
    unsigned int integerPower( int base, int esponente );

    int valoreSentinella = -1;
    int base;
    int esponente;
    unsigned int risultato;


    do{
        printf( "%s", "Inserire la base numerica ( -1 come esponente per uscire ): ");
        scanf("%d", &base);
        printf( "%s", "Inserire l'esponente ( -1 per uscire ): ");
        scanf("%u", &esponente);

        if( base > 0 && esponente >= 0 ){
            risultato = integerPower( base, esponente );
            printf( "Il numero %d elevato a %d e' pari a: %u\n", base, esponente, risultato );
        }
        else{
            if( base != valoreSentinella && esponente != valoreSentinella && base < 0 && esponente < 0 ){
                puts("Attenzione e' stato inserito un valore non valido.\n");
            }
        }
    }while( base != valoreSentinella && esponente != valoreSentinella );




return 0;
}//Fine funzione main

unsigned int integerPower( int base, int esponente )
{
    unsigned int risultato;
    unsigned int contatoremoltiplicazioni = 1;

    if( esponente == 0 ){
        return 0;
    }
    else{
        risultato = 1;
        for( contatoremoltiplicazioni = esponente; contatoremoltiplicazioni >= 1; contatoremoltiplicazioni--){
            risultato *= base;
        }
        return risultato;
    }
}
