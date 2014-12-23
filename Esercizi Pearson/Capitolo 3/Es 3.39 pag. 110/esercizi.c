/*                 Sviluppato da Luciano Faretra 23/12/2014 rilasciato sotto licenza GNUv3
                                Stampa scacchiera con comandi predefiniti

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    CLONNE                      Definisca di quante colonne è la scacchiera              unsigend int > 0
    RIGHE                       Definisce di quante righe è composta la scacchiera       unsigned int > 0

    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    scacchiera                  Array di * formata da RIGHE per COLONNE                  stringhe di char

    DATI DI LAVORO              DESCRIZIONE                                              DOMINIO
    contatoreRighe              Conta a che riga si trova                                unsigned int > 0
    contatoreColonne            Conta a che colonna si trova                             unsigned int > 0

   */
#include <stdlib.h>
#include <stdio.h>
#define RIGHE
#define COLONNE

int main(void)
{//inizio funzione main

    unsigned int contatoreRighe = 0;
    unsigned int contatoreColonne = 0;

    do{
        do{
            printf( "%s", "* " );
            contatoreColonne++;
        }while( contatoreColonne < COLONNE );
        puts("");
    }while(contatoreRighe < RIGHE);
return 0;
}//Fine funzione main
