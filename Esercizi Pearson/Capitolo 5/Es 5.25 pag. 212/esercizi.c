/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Trova il piu piccolo di tre numeri
    Affinamento Top Down

    **Funzione - minimoDiTreNumeri(numero1, numero2, numero3)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numero1                         Primo numero inserito dall'utente                               float
    numero2                         Secondo numero inserito dall'utente                             float
    numero3                         Terzo numero inserito dall'utente                               float
    parziale                        Numero piu piccolo parziale                                     float

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroPiuPiccolo                Numero piu piccolo dei tre                                      float

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Il programma riceve tre numeri e decreta qual'e il piu piccolo

    1.1 parziale = minimoDiDueNumeri(numero1, numero2)
        Se numero3 > parziale
            Allora
                return numero 3
            altrimenti
                return parziale

       ******************************************************************************************
       **Funzione - minimoDiDueNumeri(numero1, numero2)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numero1                         Primo numero da confrontare                                     float
    numero2                         Secondo numero da confrontare                                   float

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroPiuPiccoloDeiDue          Numero piu piccolo dei due                                      float

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Il programma riceve due numeri e decreta qual'e il piu piccolo

    1.1 Se numero1 e' piu grande di numero2
            Allora
                return numero1
            Altrimenti
                return numero2

       ******************************************************************************************

       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numero1                         Primo numero inserito dall'utente                               float
    numero2                         Secondo numero inserito dall'utente                             float
    numero3                         Terzo numero inserito dall'utente                               float

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroPiuGrande                 Numero piu grande dei tre                                       float

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Legge tre numeri e ne stampa il piu grande

    1.1 Stampa:"inserisci il primo numero: "
        Leggi numero1
        Stampa:"inserisci il secondo numero: "
        Leggi numero2
        Stampa:"inserisci il terzo numero: "
        Leggi numero3

        Stampa:"Il numero piu grande dei tre e': minimoDiTreNumeri(numero1, numero2, numero3)"
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    float minimoDiTreNumeri( float numero1, float numero2, float numero3 );
    float minimoDiDueNumeri( float numero1, float numero2 );

    float numero1;
    float numero2;
    float numero3;

    printf( "%s", "inserisci il primo numero: " );
    scanf( "%f", &numero1 );
    printf( "%s", "inserisci il secondo numero: " );
    scanf( "%f", &numero2 );
    printf( "%s", "inserisci il terzo numero: " );
    scanf( "%f", &numero3 );

    printf( "Il numero piu grande dei tre e': %f", minimoDiTreNumeri(numero1, numero2, numero3) );

return 0;
}//Fine funzione main

float minimoDiDueNumeri( float numero1, float numero2 )
{

    if( numero1 > numero2 ){
        return numero1;
    }
    else{
        return numero2;
    }
}

float minimoDiTreNumeri( float numero1, float numero2, float numero3 )
{
    float parziale;

    parziale = minimoDiDueNumeri(numero1, numero2);
    if( numero3 > parziale ){
        return numero3;
    }
    else{
        return parziale;
    }

}
