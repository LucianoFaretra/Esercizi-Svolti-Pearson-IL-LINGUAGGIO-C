/*                 Sviluppato da Luciano Faretra 31/12/2014 rilasciato sotto licenza GNUv3
                                    Pari o dispari
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroInserito                     primonumero intero inserito dall'utente                         intero


    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    1                               Valore Vero restituito dalla funzione, il secondo num è pari    intero
    0                               Valore Falso restituito dalla funzione, il secondo num è dispariintero

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    valoreSentinella                Valore sentinella utilizzato per uscire dal ciclo d'inseriemento int -1

    1. Il programma un numero in input e dice se è pari o dispari


    1.1 Funzione Main

        Esegui
            Stampa:"Inserire il primo numero ( -1 per uscire ): "
            Leggi numeroInserito

            Se numeroInserito != valoreSentinella
                Allora
                    Se even( numeroInserito ) == 1
                        Allora
                            Stampa: Il numero: 'numeroInserito' e' pari.
                        Altrimenti
                            Stampa: "Il secondo numero: 'numeroInserito' non e' pari.
            Fine Se
        Finchè non viene inserito il valore sentinella

        Funzione even( numeroInserito )

        Se numeroInserito % 2 == 0
            Allora
                return 1
            Altrimenti
                return 0
        Fine Se



*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main
    unsigned int even( int numeroInserito);

    int valoreSentinella = -1;
    int numeroInserito;

    do{
        printf( "%s", "Inserire il primo numero ( -1 per uscire ): ");
        scanf("%d", &numeroInserito);

        if( numeroInserito != valoreSentinella){

            if( even( numeroInserito ) == 1 ){
                printf( "Il numero: %d e' pari.\n", numeroInserito );
            }
            else{
                printf( "Il numero: %d non e' pari.\n", numeroInserito );
            }
        }
    }while( numeroInserito != valoreSentinella );

return 0;
}//Fine funzione main

unsigned int even( int numeroInserito )
{

    if( numeroInserito % 2 == 0 ){
        return 1;
    }

return 0;
}
