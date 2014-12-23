/*                 Sviluppato da Luciano Faretra 23/12/2014 rilasciato sotto licenza GNUv3
                                        Conta quanti 7

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    NUMERODACONTROLLARE         Definisca quale numero utilizzare                        unsigend int > 0
    numero                      Numero inserito da analizzare                            unsigned int > 0

    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    contatoreNumero             Mostra quanti NUMERODACONTROLLARE ci sono nel numero     unsigned int > 0

    DATI DI LAVORO              DESCRIZIONE                                              DOMINIO
    contatore                   Contatore quanti NUMERODACONTROLLARE ci sono nel numero  unsigned int > 0

    1. il programma, dato un numero di 5 o meno cifre, contra quanti 7 ci sono dentro al numero

    1.1 Definisci le costanti
        Stampa messaggio: inserisci il numero da analizzare
        leggi il numero inserito
        Mentre contatore <= numero
            Se numero % NUMERODACONTROLLARE == 0
                aumenta contatoreNumero di 1
            Fine se
            contatore++
        Fine mentre
        Stampa: il numero: NUMERODACONTROLLARE e' presente 'contatoreNumero' nel numero 'numero'
        Fine
*/
#include <stdlib.h>
#include <stdio.h>
#define NUMERODACONTROLLARE 7

int main(void)
{//inizio funzione main

    unsigned int contatore = 0;
    unsigned int numero = 0;
    unsigned int contatoreNumero = 0;

    printf("%s", "inserisci il numero da analizzare: ");
    scanf("%u", &numero);

    while( contatore < numero ){
        if( contatore % NUMERODACONTROLLARE == 0 ){
           contatoreNumero++;
        }
    contatore++;
    }
    printf("il numero: %u e' presente %u nel numero %u", (unsigned int)NUMERODACONTROLLARE, contatoreNumero, numero);

return 0;
}//Fine funzione main
