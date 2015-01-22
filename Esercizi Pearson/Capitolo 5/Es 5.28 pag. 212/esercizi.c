/*                 Sviluppato da Luciano Faretra 12/01/2015 rilasciato sotto licenza GNUv3
                                    Inversione Cifre
    Affinamento Top Down

    **Funzione - inversione(numeroDaInvertire)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroDaInvertire               Numero inserito dall'utente da invertire                        unsigned int >= 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroInvertito                 Numero invertito restituito dalla funzione inversione           unsigned int >= 1

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

    1. Il programma riceve un intero e lo rimanda invertito

    1.1 Il programma riceve un intero, lo scompone in cifre e lo stampa invertito

    1.2 Leggi il numero da invertire
        La primaCifra e' uguale a numeroDaInvertire / 10000
        numeroDaInvertire = numeroDaInvertire % 10000
        La secondaCifra e' uguale a numeroDaInvertire / 1000
        numeroDaInvertire = numeroDaInvertire % 1000
        La terzaCifra e' uguale a numeroDaInvertire / 100
        numeroDaInvertire = numeroDaInvertire % 100
        La quartaCifra e' uguale a numeroDaInvertire / 10
        numeroDaInvertire = numeroDaInvertire % 10
        La quintaCifra e' uguale a numeroDaInvertire

        se primaCifra >= 1
            Allora
                numeroInvertito = ( quintaCifra * 10000 )  + ( quartaCifra * 1000 ) + ( terzaCifra * 100 ) + ( secondaCifra * 10 ) + primaCifra

        Altrimenti Se secondaCifra >= 1
                numeroInvertito = ( quintaCifra * 1000 )  + ( quartaCifra * 100 ) + ( terzaCifra * 10 ) + ( secondaCifra )

        Altrimenti Se terzaCifra >= 1
                numeroInvertito = ( quintaCifra * 100 )  + ( quartaCifra * 10 ) + ( terzaCifra )

        Altrimenti Se quartaCifra >= 1
                numeroInvertito = ( quintaCifra * 10 )  + ( quartaCifra  )

        Altrimenti Se quintaCifra >= 1
                numeroInvertito = ( quintaCifra )

        Altrimenti
                numeroInvertito = 0


*/

#include <stdlib.h>
#include <stdio.h>

unsigned int inversione(unsigned int numeroDaInvertire);

int main(void)
{//inizio funzione main
    int esitoScanf;
    int numeroDaInvertire;

    do{
        printf("Inserire l'intero positivo da invrtire: ");
        if(((esitoScanf = scanf("%d", &numeroDaInvertire)) == 0) && numeroDaInvertire >= 1 ){
            scanf("%*[^\n]");
            puts("Attenzione sono accettati solo interi positivi");
        }
    }while(esitoScanf == 0);

    printf("Il numero invertito e' pari a: %u", inversione((unsigned int)numeroDaInvertire));

return 0;
}//Fine funzione main


unsigned int inversione(unsigned int numeroDaInvertire)
{
    unsigned int numeroInvertito;
    unsigned int primaCifra;
    unsigned int secondaCifra;
    unsigned int terzaCifra;
    unsigned int quartaCifra;
    unsigned int quintaCifra;

    primaCifra = ( numeroDaInvertire / 10000 );
    numeroDaInvertire = numeroDaInvertire % 10000;
    secondaCifra = ( numeroDaInvertire / 1000 );
    numeroDaInvertire = numeroDaInvertire % 1000;
    terzaCifra = ( numeroDaInvertire / 100 );
    numeroDaInvertire = numeroDaInvertire % 100;
    quartaCifra = ( numeroDaInvertire / 10 );
    numeroDaInvertire = numeroDaInvertire % 10;
    quintaCifra = numeroDaInvertire;

    if( primaCifra >= 1 ){
        numeroInvertito = ( quintaCifra * 10000 )  + ( quartaCifra * 1000 ) + ( terzaCifra * 100 ) + ( secondaCifra * 10 ) + primaCifra;

    }
    else if( secondaCifra >= 1 ){
            numeroInvertito = ( quintaCifra * 1000 )  + ( quartaCifra * 100 ) + ( terzaCifra * 10 ) + ( secondaCifra );
    }
    else if( terzaCifra >= 1 ){
            numeroInvertito = ( quintaCifra * 100 )  + ( quartaCifra * 10 ) + ( terzaCifra );
    }
    else if( quartaCifra >= 1 ){
            numeroInvertito = ( quintaCifra * 10 )  + ( quartaCifra );
    }
    else if( quintaCifra >= 1 ){
            numeroInvertito = ( quintaCifra );
    }
    else{
        numeroInvertito = 0;
    }

return numeroInvertito;
}
