/*                 Sviluppato da Luciano Faretra 28/12/2014 rilasciato sotto licenza GNUv3
                                    S

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    NUMERORIGHE                     Numero righe che compongono le figure                           unsigned intero > 0
    NUMEROCOLONNE                   Numero colonne che compongono le figure                         unsigned intero > 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    *                               Carattere che compone le figure                                 char

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreRighe                  Contatore delle righe                                           unsigned int
    contatoreColonne                Contatore delle colonne                                         unsigned int


    1. Disegna delle figure come da traccia

    1.1

*/

#include <stdlib.h>
#include <stdio.h>
#define NUMERORIGHE 10
#define NUMEROCOLONNE 10

int main(void)
{//inizio funzione main

    unsigned int contatoreRighe;
    unsigned int contatoreColonne;

//Figura A
    for( contatoreRighe = 1; contatoreRighe <= NUMERORIGHE; contatoreRighe++ ){

        for( contatoreColonne = 1; contatoreColonne <= contatoreRighe; contatoreColonne++ ){

            printf("%s", "*");
        }
        printf("%s", "\n");
    }
    printf("%s", "\n");

//Figura B
    for( contatoreRighe = 10; contatoreRighe <= NUMERORIGHE; contatoreRighe-- ){

        for( contatoreColonne = 1; contatoreColonne <= contatoreRighe; contatoreColonne++ ){

            printf("%s", "*");
        }
        printf("%s", "\n");
    }
    printf("%s", "\n");

//Figura C
    for( contatoreRighe = 1; contatoreRighe <= NUMERORIGHE; contatoreRighe++ ){

        for( contatoreColonne = 2; contatoreColonne <= contatoreRighe; contatoreColonne++ ){

            printf("%s", " ");
        }

        for( contatoreColonne = 10; contatoreColonne >= contatoreRighe; contatoreColonne-- ){

            printf("%s", "*");
        }
        printf("%s", "\n");
    }
    printf("%s", "\n");

//Figura D
    for( contatoreRighe = 1; contatoreRighe <= NUMERORIGHE; contatoreRighe++ ){

        for( contatoreColonne = 9; contatoreColonne >= contatoreRighe; contatoreColonne-- ){

            printf("%s", " ");
        }

        for( contatoreColonne = 1; contatoreColonne <= contatoreRighe; contatoreColonne++ ){

            printf("%s", "*");
        }
        printf("%s", "\n");
    }
    printf("%s", "\n");


return 0;
}//Fine funzione main
