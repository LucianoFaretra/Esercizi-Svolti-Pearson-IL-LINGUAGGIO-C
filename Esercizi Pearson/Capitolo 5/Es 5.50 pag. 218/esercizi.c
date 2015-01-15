/*                 Sviluppato da Luciano Faretra 15/01/2014 rilasciato sotto licenza GNUv3
                            Istruzione assistita da computer


    Affinamento Top Down
    Fuzione nuovaDomanda(void)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    rispostaDomanda                 Risposta alla domanda inserita dall'utente                      unsigned int
    moltiplicando                   Moltiplicando generato casualmente                              unsigned int
    moltiplicatore                  Moltiplicatore generato casualmente                             unsigned int
    risultatoDomanda                moltiplicando per moltiplicatore                                unsigned int

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    esitoDomanda                    Valore di ritorno, 0 domanda errata, 1 domanda esatta           unsigned int
    messaggioEsatto                 Messaggio risposta esatta                                       stringa di caratteri
    messaggioErrato                 Messaggio per risposta errata                                   stringa di caratteri


    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. La funzione stampa una domanda, l'untente inserisce la risposta, se la risposta è sbagliata viene chiesto di reinserire la risposta
        Altrimenti se e' giusta viene generata una nuova domanda

    1.1



    ***********************************************************************************************************
    Affinamento Top Down
    Funzione Main

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.  Viene chiamata la funzione nuovaDomanda


*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>

void nuovaDomanda( void );

int main(void)
{//inizio funzione main
    srand(time(NULL));

    nuovaDomanda();

return 0;
}//Fine funzione main

void nuovaDomanda( void )
{
    unsigned int esitoDomanda = 0;
    unsigned int rispostaDomanda;
    unsigned int moltiplicando;
    unsigned int moltiplicatore;
    unsigned int risultatoDomanda;
    unsigned int esitoScanf;
    char *messaggioEsattoPtr = "Bravo hai fatto bene i conti";
    char *messaggioErratoPtr = "Ho no, hai sbagliato, riprova!";

    moltiplicando = rand() % 100;
    moltiplicatore = rand() % 100;

    risultatoDomanda = moltiplicando * moltiplicatore;

    do{
        printf("\nQuanto fanno %u per %u? = ", moltiplicando, moltiplicatore);
        if(( esitoScanf = scanf("%u", &rispostaDomanda)) == 0 ){
            scanf("%*[^\n]");
            puts("Input errato, sono accettati solo interi positivi");
        }
        else{
            if(rispostaDomanda == risultatoDomanda){
                printf("%s", messaggioEsattoPtr);
                nuovaDomanda();
            }
            else{
                printf("%s", messaggioErratoPtr);
            }
        }
    }while(esitoDomanda == 0);

return;
}
