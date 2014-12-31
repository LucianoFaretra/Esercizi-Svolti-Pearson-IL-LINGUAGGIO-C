/*                 Sviluppato da Luciano Faretra 31/12/2014 rilasciato sotto licenza GNUv3
                                    Quadrato di asterischi
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    side                            descrive il lato del quadrato di asterichi pieno da stampare    char *

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    *                               Asterischi che compongono il rettangolo                         char *

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreRighe                  Contatore delle righe del quadrato di asterischi degli asterischi unsigned int >= 1
    contatoreColonne                Contatore delle colonne del quadrato di asterischi degli asterischi unsigned int >= 1


    1. Il programma riceve un intero in input e stampa il relativo quadrato di asterischi


    1.1 Funzione Main

            Stampa:"Inserire la dimensione del lato del quadrato di * da voler stampare: "
            Leggi side

            Se side > 0
                Allora
                    stampaQUadrato( side )
                Altrimenti
                    Stampa: Non e' stato inserito un valore valido ripetere l'inserimento
            Fine Se

       ******************************************************************************************
        Funzione stampaQuadrato( side )

        mentre contatoreRighe <= side
            mentre contatoreColonne <= side
                Stampa:"*"
            incrementa contatoreColonne di 1
            fine mentre
        incrementa contatoreRighe di 1
        fine mentre



*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main
    int even( int side);

    int side;

    printf( "%s", "Inserire la dimensione del lato del quadrato di * da voler stampare: ");
    scanf("%d", &side);

    if( side > 0 ){
        even( side );
    }
    else{
        puts("Non e' stato inserito un valore valido ripetere l'inserimento.");
    }

return 0;
}//Fine funzione main

int even( int side )
{
    unsigned int contatoreRighe;
    unsigned int contatoreColonne;

    contatoreRighe = 1;
    while( contatoreRighe++ <= side ){
        contatoreColonne = 1;
        while( contatoreColonne++ <= side ){
            printf( "%s", "*");
        }
        printf("%s", "\n");
    }

return 0;
}
