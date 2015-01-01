/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Tempo in secondi
    Affinamento Top Down

    **Funzione - Ore in Secondi

    INPUT                           DESCRIZIONE                                                     DOMINIO
    oreTempoInput                   Ore su cui calcolare il tempo (quadrante 12h)                   unsigned int >= 0, <= 12
    minutiTempoInput                minuti su cui calcolare il tempo (quadrante 12h)                unsigned int >= 0, <= 59
    secondiTempoInput               secondi su cui calcolare il tempo (quadrante 12h)               unsigned int >= 0, <= 59

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    secondiOrario                 pari a secondiTempoInput +  minutiTempoInput * 60 +             unsigned int >= 0
                                    oreTempoInput * 60 * 60


    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Il programma riceve in input tre valori, ore, minuti e secondi e calcola di quanti secondi e' composto

    1.1 Funzione oreInSecondi



       ******************************************************************************************
       Funzione Main

        oreInSecondi(oreTempoInput, minutiTempoInput, secondiTempoInput)

        secondiOrario = secondiTempoInput + ( minutiTempoInput + ( oreTempoInput * 60 ) ) * 60

        ritorna secondiOrario


        ******************************************************************************************
       Funzione main

       Stampa:"Primo Orario:"
       Esegui
            Stampa:"Inserire le ore che compongono l'orario ( quadrante 12h ): "
            Leggi oreTempoInput
            Se oreTempoInput >= 0 && oreTempoInput <= 11
                Allora
                    Stampa:"Inserire i minuti che compongono l'orario: "
                    Leggi minutiTempoInput
                Altrimenti
                    Stampa:"Attenzione non e' stato inserito un valore in ore valido."
                        Se minutiTempoInput >= 0 && minutiTempoInput <= 59
                            Allora
                                Stampa:"Inserire i secondiTempoInput che compongono l'orario: "
                                Leggi secondiInseriti
                                Se secondiTempoInput >= 0 && secondiTempoInput <= 59
                                    Allora
                                        valoreSentinella = 1
                                    Altrimenti
                                        Stampa:"Attenzione non e' stato inserito un valore in secondi valido."
                            Altrimenti
                                Stampa:"Attenzione non e' stato inserito un valore in minuti valido."
        Finchè valoreSentinella != 1

        secondiPrimoOrario = oreInSecondi( oreTempoInput, minutiTempoInput, secondiTempoInput )

        Stampa:"Secondo Orario:"
        Esegui
            Stampa:"Inserire le ore che compongono l'orario ( quadrante 12h ): "
            Leggi oreTempoInput
            Se oreTempoInput >= 0 && oreTempoInput <= 11
                Allora
                    Stampa:"Inserire i minuti che compongono l'orario: "
                    Leggi minutiTempoInput
                Altrimenti
                    Stampa:"Attenzione non e' stato inserito un valore in ore valido."
                        Se minutiTempoInput >= 0 && minutiTempoInput <= 59
                            Allora
                                Stampa:"Inserire i secondiTempoInput che compongono l'orario: "
                                Leggi secondiInseriti
                                Se secondiTempoInput >= 0 && secondiTempoInput <= 59
                                    Allora
                                        valoreSentinella = 1
                                    Altrimenti
                                        Stampa:"Attenzione non e' stato inserito un valore in secondi valido."
                            Altrimenti
                                Stampa:"Attenzione non e' stato inserito un valore in minuti valido."
        Finchè valoreSentinella != 1

        secondiSecondoOrario = oreInSecondi( oreTempoInput, minutiTempoInput, secondiTempoInput )

        Stampa: La differenza in secondi tra i due orari e' di:
            Se secondiPrimoOrario >= secondiSecondoOrario
                Allora
                    Stampa:"secondiPrimoOrario - secondiSecondoOrario"
                Altrimenti
                    Stampa:"secondiSecondoOrario - secondiPrimoOrario"

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned int oreInSecondi( unsigned int oreTempoInput, unsigned int minutiTempoInput, unsigned int secondiTempoInput);

    unsigned int oreTempoInput;
    unsigned int minutiTempoInput;
    unsigned int secondiTempoInput;
    unsigned int secondiPrimoOrario;
    unsigned int secondiSecondoOrario;
    unsigned int valoreSentinella = 0;

    puts( "Inserisci il Primo Orario: " );
    do{
        printf( "%s", "Inserire le ore che compongono l'orario ( quadrante 12h ): " );
        scanf( "%u", &oreTempoInput );
        if( oreTempoInput >= 0 && oreTempoInput <= 11 ){
            printf( "%s", "Inserire i minuti che compongono l'orario: ");
            scanf( "%u", &minutiTempoInput );
            if( minutiTempoInput >= 0 && minutiTempoInput <= 59 ){
                printf( "%s", "Inserire i secondiTempoInput che compongono l'orario: " );
                scanf( "%u", &secondiTempoInput );
                if( secondiTempoInput >= 0 && secondiTempoInput <= 59 ){
                    valoreSentinella = 1;
                }
                else{
                    puts( "Attenzione non e' stato inserito un valore in secondi valido." );
                }
            }
            else{
                puts( "Attenzione non e' stato inserito un valore in minuti valido." );
            }
        }
        else{
             puts( "Attenzione non e' stato inserito un valore in ore valido." );
        }

    }while( valoreSentinella != 1 );

    secondiPrimoOrario = oreInSecondi( oreTempoInput, minutiTempoInput, secondiTempoInput );

    puts( "Secondo Orario:" );
    do{
        printf( "%s", "Inserire le ore che compongono l'orario ( quadrante 12h ): " );
        scanf( "%u", &oreTempoInput );
        if( oreTempoInput >= 0 && oreTempoInput <= 11 ){
            printf( "%s", "Inserire i minuti che compongono l'orario: ");
            scanf( "%u", &minutiTempoInput );
            if( minutiTempoInput >= 0 && minutiTempoInput <= 59 ){
                printf( "%s", "Inserire i secondiTempoInput che compongono l'orario: " );
                scanf( "%u", &secondiTempoInput );
                if( secondiTempoInput >= 0 && secondiTempoInput <= 59 ){
                    valoreSentinella = 1;
                }
                else{
                    puts( "Attenzione non e' stato inserito un valore in secondi valido." );
                }
            }
            else{
                puts( "Attenzione non e' stato inserito un valore in minuti valido." );
            }
        }
        else{
             puts( "Attenzione non e' stato inserito un valore in ore valido." );
        }

    }while( valoreSentinella != 1 );

    secondiSecondoOrario = oreInSecondi( oreTempoInput, minutiTempoInput, secondiTempoInput );

    printf( "%s", "La differenza in secondi tra i due orari e' di: ");
        if( secondiPrimoOrario >= secondiSecondoOrario ){
            printf( "%d", secondiPrimoOrario - secondiSecondoOrario );
        }
        else{
            printf( "%d", secondiSecondoOrario - secondiPrimoOrario );
        }


return 0;
}//Fine funzione main

unsigned int oreInSecondi( unsigned int oreTempoInput, unsigned int minutiTempoInput, unsigned int secondiTempoInput)
{
    unsigned int secondiOrario;

    secondiOrario = ( secondiTempoInput + ( minutiTempoInput + ( oreTempoInput * 60 ) ) * 60 );

return secondiOrario;
}
