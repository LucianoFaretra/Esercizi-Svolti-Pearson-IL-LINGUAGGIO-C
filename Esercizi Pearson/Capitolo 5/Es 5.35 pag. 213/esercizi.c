/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Fibonacci
    Affinamento Top Down

    **Funzione - fibonacci(numeroSequenza)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroSequenza                  numero della sequenza di fibonacci da calcolare                 unsigned int => 1
    numeroFibonacci                 numero ibonacci provvisorio                                     unsigned int => 1
    numeroFibonacciPrecedente       numero precedente della sequenza di fibonacci                   unsigned int => 1
    secondoNumeroFibonacciPrecedente secondo numero precedente della sequenza di fibonacci          unsigned int => 0


    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    risultatoFibonacci              numeroSequenza "esimo" numero di fibonacci                      unsigned int => 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreSequenza               Contatore sequenza che calcola le iterazioni del numero di fibonacci    unsigned int => 1

    1. Riceve un numeroSequenza che indica quale posizione della sequenza di fibonacci mostrare.

    1.1 Inizializza numeroFibonacci a 1
        inizializza numeroFibonacciPrecedente = 1;
        inizializza secondoNumeroFibonacciPrecedente = 0;
        inizializza contatoreSequenza a 2
        Se numeroSequenza < 2
            Allora
                risultatoFibonacci = 1
            Altrimenti
                mentre contatoreSequenza <= numeroSequenza
                    risultatoFibonacci = numeroFibonacciPrecedente + secondoNumeroFibonacciPrecedente
                    secondoNumeroFibonacciPrecedente = numeroFibonacciPrecedente
                    numeroFibonacciPrecedente = risultatoFibonacci
                    incrementa contatoreSequenza di 1
                Fine Mentre
        Fine Se
        Stampa:"La sequenza di fibonacci alla 'numeroSequenza' posizione e' pari a 'risultatoFibonacci'


       ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroSequenza                  Quale numero della sequenza di fionacci si vuole visionare      unsigned int => 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    risultatoFibonacci              numeroSequenza "esimo" numero di fibonacci                      unsigned int => 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

    1.1 Stampa:"Inserisci quale posizione della sequenza di fibonacci vuoi visualizzare: "
        Leggi numeroSequenza

        Stampa:"La sequenza di fibonacci alla 'numeroSequenza' posizione e' pari a 'fibonacci(numeroSequenza)'


*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main
    long unsigned int fibonacci( unsigned int numeroSequenza);

    unsigned int numeroSequenza;

    printf( "%s", "Inserisci quale posizione della sequenza di fibonacci vuoi visualizzare: ");
    scanf("%u", &numeroSequenza );

    printf( "La sequenza di fibonacci alla %u posizione e' pari a: %lu", numeroSequenza, fibonacci(numeroSequenza) );

return 0;
}//Fine funzione main

long unsigned int fibonacci( unsigned int numeroSequenza)
{
    long unsigned int numeroFibonacciPrecedente = 1;
    long unsigned int secondoNumeroFibonacciPrecedente = 0;
    unsigned int contatoreSequenza = 2;
    long unsigned int risultatoFibonacci;

    if( numeroSequenza <= 2 ){
        risultatoFibonacci = 1;
    }
    else{
        while( contatoreSequenza <= numeroSequenza ){
            risultatoFibonacci = ( numeroFibonacciPrecedente + secondoNumeroFibonacciPrecedente );
            secondoNumeroFibonacciPrecedente = numeroFibonacciPrecedente;
            numeroFibonacciPrecedente = risultatoFibonacci;
            contatoreSequenza++;
        }
    }

return risultatoFibonacci;
}
