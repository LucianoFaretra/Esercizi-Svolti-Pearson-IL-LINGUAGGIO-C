/*                 Sviluppato da Luciano Faretra 31/12/2014 rilasciato sotto licenza GNUv3
                                    Costo parcheggio
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    TARIFFAMINIMA                   Tariffa minima parcheggio                                       float 2.00
    OREINCLUSETARIFFAMINIMA         Ore di parcheggio incluse nella tariffa minima                  unsigned int 3
    oreParcheggio                   Ore in cui la macchina è stata parcheggiata                     float > 0
    TARIFFAORARIA                   Tariffa oraria parcheggio per parcheggi eccedenti 3h            float 0.5
    TARIFFAMASSIMA                  Tariffa massima parcheggio per 24h                              float 10

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    totaleIncassiParcheggio         Totale degli incassi del parcheggio                             float >= 0
    totaleParcheggio                Totale ammontare del costo parcheggio                           float > 0
    oreParcheggioTotali             Ore per cui si è usufruito del parcheggio                       float >= 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    valoreSentinella                Valore sentinella utilizzato per uscire dal ciclo d'inseriemento float 666
    numeroInserimento               Conta gli inserimenti effettuati                                 unsigned int >= 1


    1. Il programma calcola la spesa del parcheggio dei clienti e stampa un report di fine giornata


    1.1 Funzione Main

        inizializza totaleIncassiParcheggio a 0
        inizializza oreParcheggioTotali a 0
        inizializza numeroInserimento a 1
        Stampa descrizione
        Esegui
            leggi oreParcheggio
                Se oreParcheggio != valoreSentinella && oreParcheggio > 0
                    Allora
                        totaleParcheggio = calculateCharges(oreParcheggio)
                        Stapa:" 'numeroInserimento' 'oreParcheggio' 'totaleParcheggio'
                        incrementa numeroInserimento di 1
                        oreParcheggioTotali += oreParcheggio
                        totaleIncassiParcheggio += totaleParcheggio
                    Altrimenti se oreParcheggio < 0
                        Stampa:"E' stato inserito un valore non valido"
                    Altrimenti

        Finchè non viene inserito 'valoreSentinella'

        Stampa:"TOTAL 'oreParcheggioTotali' 'totaleIncassiParcheggio'"

        Funzione calculateCharges(oreParcheggio)
        Se le oreParcheggio <= OREINCLUSETARIFFAMINIMA
            Allora
                return 'TARIFFAMINIMA'
            Altrimenti
                 totaleParcheggio = TARIFFAMINIMA
                 oreParcheggio -= OREINCLUSETARIFFAMINIMA
                 totaleParcheggio += oreParcheggio * TARIFFAORARIA
                 Se totaleParcheggio > TARIFFAMASSIMA
                    Allora
                        return 'TARIFFAMASSIMA'
                    Altrimenti
                        return 'totaleParcheggio'
                Fine Se
        Fine Se


*/

#include <stdlib.h>
#include <stdio.h>
#define TARIFFAMINIMA 2.00
#define OREINCLUSETARIFFAMINIMA 3.00
#define TARIFFAORARIA 0.50
#define TARIFFAMASSIMA 10.00

int main(void)
{//inizio funzione main
    float calculateCharges( float oreParcheggio );


    float oreParcheggio;
    float totaleIncassiParcheggio = 0;
    float totaleParcheggio;
    float oreParcheggioTotali = 0;
    float valoreSentinella = 666.0;
    unsigned int numeroInserimento = 1;

    puts("Per ogni cliente inserire le ore di parcheggio e premere invio: ");
    puts("Car \t Hours \t Charge ");
    do{
        scanf("%f", &oreParcheggio);
            if ( oreParcheggio != valoreSentinella && oreParcheggio > 0 ){
                totaleParcheggio = calculateCharges(oreParcheggio);
                printf( "%5u\t%5.2f\t%5.2f\n", numeroInserimento, oreParcheggio, totaleParcheggio );
                oreParcheggioTotali += oreParcheggio;
                totaleIncassiParcheggio += totaleParcheggio;
                numeroInserimento++;
            }
            else if ( oreParcheggio != valoreSentinella ){
                puts( "E' stato inserito un valore non valido" );
            }

    }while( oreParcheggio != valoreSentinella );

    printf( "%5s\t%5.2f\t%5.2f\n", "TOTAL",  oreParcheggioTotali, totaleIncassiParcheggio );

return 0;
}//Fine funzione main

float calculateCharges( float oreParcheggio )
{
    float totaleParcheggio;

    if( oreParcheggio <= (float)OREINCLUSETARIFFAMINIMA ){

        return (float)TARIFFAMINIMA;

    }
    else{
         totaleParcheggio = (float)TARIFFAMINIMA;
         oreParcheggio -= (float)OREINCLUSETARIFFAMINIMA;
         totaleParcheggio += ( oreParcheggio * (float)TARIFFAORARIA );
         if( totaleParcheggio > (float)TARIFFAMASSIMA ){
            return (float)TARIFFAMASSIMA;
        }
        else{
            return totaleParcheggio;
        }
    }
}
