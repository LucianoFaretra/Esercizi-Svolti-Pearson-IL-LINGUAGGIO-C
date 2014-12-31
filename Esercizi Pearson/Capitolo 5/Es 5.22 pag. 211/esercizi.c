/*                 Sviluppato da Luciano Faretra 31/12/2014 rilasciato sotto licenza GNUv3
                                    Quadrato qualsiasi carattere
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    side                            descrive il lato del quadrato di pieno da stampare              char
    fillCharacter                   Carattere utilizzato per stampare il quadrato                   char

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    ?                               Asterischi che compongono il rettangolo                         char *

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreRighe                  Contatore delle righe del quadrato di asterischi degli asterischi unsigned int >= 1
    contatoreColonne                Contatore delle colonne del quadrato di asterischi degli asterischi unsigned int >= 1


    1. Il programma riceve un intero in input e stampa il relativo quadrato di asterischi


    1.1 Funzione Main

            Stampa:"Inserire la dimensione del lato del quadrato di * da voler stampare: "
            Leggi side
            Stampa:"Inserire il carattere da mandare in stampa: "
            Leggi fillCharacter

            Se side > 0
                Allora
                    stampaQuadrato( side, fillCharacter )
                Altrimenti
                    Stampa: Non e' stato inserito un valore valido ripetere l'inserimento
            Fine Se

       ******************************************************************************************
        Funzione stampaQuadrato( side, fillCharacter )

        mentre contatoreRighe <= side
            mentre contatoreColonne <= side
                Stampa:"'fillCharacter'"
            incrementa contatoreColonne di 1
            fine mentre
        incrementa contatoreRighe di 1
        fine mentre



*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main
    int even( int side, char fillCharacter);

    int side;
    char fillCharacter;

        printf( "%s", "Inserire carattere e dimensione del lato del quadrato da stampare: ");
        scanf("%c" "%d", &fillCharacter, &side);

        if( side > 0 ){
            even( side, fillCharacter );
        }
        else{
            puts("Non e' stato inserito un valore valido ripetere l'inserimento.");
        }

return 0;
}//Fine funzione main

int even( int side, char fillCharacter )
{
    unsigned int contatoreRighe;
    unsigned int contatoreColonne;

    contatoreRighe = 1;
    while( contatoreRighe++ <= side ){
        contatoreColonne = 1;
        while( contatoreColonne++ <= side ){
            printf( "%c", fillCharacter);
        }
        printf("%s", "\n");
    }

return 0;
}
