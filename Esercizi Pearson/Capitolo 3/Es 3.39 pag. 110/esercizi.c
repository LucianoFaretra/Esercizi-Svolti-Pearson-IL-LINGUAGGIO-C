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
#define RIGHE 8
#define COLONNE 8

int main(void)
{//inizio funzione main

    unsigned int contatoreRighe = 0;
    unsigned int contatoreColonne = 0;

    contatoreRighe = 0;
    do{
        contatoreColonne = 0;

        do{
            printf( "%s", "* " );
            contatoreColonne++;
        }while( contatoreColonne < (unsigned int)COLONNE);

        puts(" ");
        if(contatoreRighe % 2 == 0){
            printf( "%s", " " );
        }
        contatoreRighe++;
    }while( contatoreRighe < (unsigned int)RIGHE);

return 0;
}//Fine funzione main
