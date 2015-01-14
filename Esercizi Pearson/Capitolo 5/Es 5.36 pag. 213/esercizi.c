/*                 Sviluppato da Luciano Faretra 14/01/2015 rilasciato sotto licenza GNUv3
                                   Le Torri di Hanoi
    Affinamento Top Down

    **Funzione - stampaMosseHanoi(numeroDischi, pioloIniziale, pioloFinale, pioloTemporaneo)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroDischi                    Numero dischi da spostare in totale                             unsigned int >= 1
    pioloIniziale                   Numero del piolo inziziale                                      unsigned int >= 1, <= 3
    pioloFinale                     Numero del piolo finale                                         unsigned int >= 1, <= 3
    pioloTemporaneo                 Numero del piolo temporaneo                                     unsigned int >= 1, <= 3

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    messaggiSpostamenti             Gli spostamenti effettuati per spostare i pioli                 stringhe di caratteri

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreDischiSpostati         Conta quanti dischi sono stati spostati                         unsigned int

    1.  mentre contatoreDischiSpostati == numeroDischi - 1
                Stampa:"'pioloIniziale' --> 'pioloFinale'"
                Stampa:"'pioloIniziale' --> 'pioloTemporaneo'"
                Stampa:"'pioloFinale' --> 'pioloTemporaneo'
        contatoreDischiSpostati++
        Stampa:"'pioloIniziale' --> 'pioloFinale'
        contatoreDischiSpostati = 0
        mentre contatoreDischiSpostati == numeroDischi - 1
                Stampa:"'pioloTemporaneo' --> 'pioloIniziale'"
                Stampa:"'pioloTemporaneo' --> 'pioloFinale'"
                Stampa:"'pioloIniziale' --> 'pioloFinale'
        contatoreDischiSpostati++

       ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroDischi                    Numero dischi da spostare in totale                             unsigned int >= 1
    pioloIniziale                   Numero del piolo inziziale                                      unsigned int >= 1, <= 3
    pioloFinale                     Numero del piolo finale                                         unsigned int >= 1, <= 3
    pioloTemporaneo                 Numero del piolo temporaneo                                     unsigned int >= 1, <= 3

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    messaggiSpostamenti             Gli spostamenti effettuati per spostare i pioli                 stringhe di caratteri

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    esitoScanf                      Variabile che tiene conto dell'esito di scanf                   unsigned int


    1.  Leggi numeroDischi da spostare
        Leggi pioloIniziale
        Leggi pioloFinale
        Leggi pioloTemporaneo

        stampaMosseHanoi(numeroDischi, pioloIniziale, pioloFinale, pioloTemporaneo)

*/

#include <stdlib.h>
#include <stdio.h>
unsigned int inputScanf( void );
void stampaMosseHanoi( unsigned int numeroDischi, unsigned int pioloIniziale, unsigned int pioloFinale, unsigned int pioloTemporaneo);

int main(void)
{//inizio funzione main

    unsigned int numeroDischi;
    unsigned int pioloIniziale;
    unsigned int pioloFinale;
    unsigned int pioloTemporaneo;

    do{
        printf("%s", "Inserire numero di dischi da spostare (minimo 3): ");
        numeroDischi = inputScanf();
    }while(numeroDischi < 3);

    do{
        printf("%s", "Inserire numero di piolo iniziale: ");
        pioloIniziale = inputScanf();
        printf("%s", "Inserire numero di piolo finale: ");
        pioloFinale = inputScanf();
        printf("%s", "Inserire numero di piolo da usare come temporaneo: ");
        pioloTemporaneo = inputScanf();
    }while(pioloIniziale == pioloFinale || pioloIniziale == pioloTemporaneo || pioloFinale == pioloTemporaneo );

    stampaMosseHanoi(numeroDischi, pioloIniziale, pioloFinale, pioloTemporaneo);

return 0;
}//Fine funzione main

unsigned int inputScanf( void )
{
    unsigned int esitoScanf;
    unsigned int input;

    do{
        if((esitoScanf = scanf("%u", &input)) == 0){
            scanf("%*[^\n]");
            puts("Prego inserire un'intero senza segno.\n");
        }
    }while(esitoScanf == 0);
return input;
}

void stampaMosseHanoi( unsigned int numeroDischi, unsigned int pioloIniziale, unsigned int pioloFinale, unsigned int pioloTemporaneo)
{
    unsigned int contatoreDischiSpostati = 0;

    while( contatoreDischiSpostati != ( numeroDischi - 1 ) ){
        printf( "%u --> %u\n", pioloIniziale, pioloFinale );
        printf( "%u --> %u\n", pioloIniziale, pioloTemporaneo );
        printf( "%u --> %u\n", pioloFinale, pioloTemporaneo );
    contatoreDischiSpostati++;
    }
    printf( "%u --> %u\n", pioloIniziale, pioloFinale );
    /*contatoreDischiSpostati = 0;
    while( contatoreDischiSpostati != ( numeroDischi - 1 ) ){
        printf( "%u --> %u\n", pioloTemporaneo, pioloIniziale );
        printf( "%u --> %u\n", pioloTemporaneo, pioloFinale );
        printf( "%u --> %u\n", pioloIniziale, pioloFinale );
    contatoreDischiSpostati++;
    }*/
    stampaMosseHanoi((numeroDischi - 2), pioloTemporaneo, pioloIniziale, pioloFinale);
return;
}
