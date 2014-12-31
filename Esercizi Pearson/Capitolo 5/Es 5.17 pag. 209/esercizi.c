/*                 Sviluppato da Luciano Faretra 31/12/2014 rilasciato sotto licenza GNUv3
                                    Multipli
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    primoNumero                     primonumero intero inserito dall'utente                         intero
    secondoNumero                   secondo intero inserito dall'utente                             intero


    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    1                               Valore Vero restituito dalla funzione, il secondo num è multiplo intero
    0                               Valore Falso restituito dalla funzione, il secondo num è multiplo intero

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    valoreSentinella                Valore sentinella utilizzato per uscire dal ciclo d'inseriemento int -1

    1. Il programma riceve due numeri interi e stabilisce se il secondo sia multiplo del primo


    1.1 Funzione Main

        Esegui
            Stampa:"Inserire il primo numero ( -1 come secondo numero per uscire ): "
            Leggi primoNumero
            Stampa:"Inserire il secondo numero ( -1 per uscire ): "
            Leggi secondoNumero

            Se primoNumero != valoreSentinella && secondoNumero != valoreSentinella
                Allora
                    Se multiple( primoNumero, secondoNumero ) == 1
                        Allora
                            Stampa: Il secondo numero: 'secondoNumero' e' un multiplo del primo numero: 'primoNumero'.
                        Altrimenti
                            Stampa: "Il secondo numero: 'secondoNumero' non e' multiplo del primo: 'primoNumero'.
            Fine Se
        Finchè non viene inserito il valore sentinella

        Funzione multiple( primoNumero, secondoNumero )

        Se secondoNumero % primoNumero == 0
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
    unsigned int multiple( int secondoNumero, int primoNumero );

    int valoreSentinella = -1;
    int primoNumero;
    int secondoNumero;

    do{
        printf( "%s", "Inserire il primo numero ( -1 come secondo numero per uscire ): ");
        scanf("%d", &primoNumero);
        printf( "%s", "Inserire il secondo numero ( -1 per uscire ): ");
        scanf("%d", &secondoNumero);

        if( primoNumero != valoreSentinella && secondoNumero != valoreSentinella ){

            if( multiple( secondoNumero, primoNumero ) == 1 ){
                printf( "Il secondo numero: %d e' un multiplo del primo numero: %d.\n", secondoNumero, primoNumero );
            }
            else{
                printf( "Il secondo numero: %d non e' multiplo del primo: %d.\n", secondoNumero, primoNumero );
            }
        }
    }while( primoNumero != valoreSentinella && secondoNumero != valoreSentinella );

return 0;
}//Fine funzione main

unsigned int multiple( int secondoNumero, int primoNumero )
{

    if( secondoNumero % primoNumero == 0 ){
        return 1;
    }

return 0;
}
