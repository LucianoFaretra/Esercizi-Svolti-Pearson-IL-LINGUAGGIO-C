/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                                    Calcolo del salario
Affinamento Top-Down:

    INPUT                       DESCRIZIONE                                                DOMINIO
    -ORARIOLAVORATIVONORMALE    Ore lavorative settimanali standard                        unsigned int 40
    -oreDiLavoro                Ore di lavoro effettivamente svolte dal dipendente         int >= 0
    -pagaStandard               paga oraria per lavoro non eccedente le 40h/st             float >= 0
    -STRAORDINARIO              Moltiplicatore calcolo straordinario "calcolo sopracento"  float >= 0
    -oreStraordinario           Ore lavorative straordinario                               unsigned int >= 0
    -importoStraordinario       Importo busta paga oradio straordinario                    float >= 0
    -importoStandard            Importo busta paga orario standard                         float >= 0

    OUTPUT                      DESCRIZIONE                                                DOMINIO
    -importoSalario             importoStandard più importoStraordinario                   float >= 0


    1. Il programma calcola il salario di un'operaio calcolando anche le ore di straordinario con un supplemento di
        una volta e mezza l'importo orario su ogni ora di straordinario effettuata.

    1.1 Fin quando non viene inserito il valore sentinella
        Leggi le oreDiLavoro del dipendente
            Se le oreDiLavoro sono superiori all'ORARIOLAVORATIVONORMALE
                Allora
                    calcola importoStandard
                    calcola pagaStraordinario
                Altrimenti
                    calcola importoStandard
            inportoSalario equivale a importoStandard + pagaStraordinario
            Fine se

        Stampa importoSalario
        Fine

    1.2 Azzera contatori
            Esegui
                Stampa: "Inserire numero di ore di lavoro (-1 per uscire): "
                Leggi oreDiLavoro
                Se il valore di oreDiLavoro è diverso dal valoreSentinella
                    Allora
                           Se le oreDiLavoro sono superiori all'ORARIODILAVORONORMALE
                                Allora
                                    oreStraordinario è pari a oreDiLavoro meno ORARIODILAVORONORMALE
                                    importoStraordinario è pari a ((pagaStandard per oreStraordinario)*STRAORDINARIO)
                                    importoStandard equivale a pagaStandard per OREDILAVORONORMALE
                                Altrimenti
                                    importoStandard equivale a pagaStandard per oreDiLavoro
                            Fine Se
                importoSalario = importoStandard + importoStraordinario
                Stampa messaggiocon importoSalario: "Il Salario è: importoSalario"
                Fine Se
            Finchè le oreDiLavoro sono diverse dal valoreSentinella
            Fine
*/
#include <stdlib.h>
#include <stdio.h>
#define ORARIOLAVORATIVONORMALE 40 //Ore lavorative come da contratto, le ore eccedenti sono straordinario
#define STRAORDINARIO 1.5 //Moltiplicatore importo Straordinario, 1.5 paga per le ore di straordinario una volta e mezza l'importo standard


int main(void)
{//inizio funzione main

    int oreDiLavoro = 0;
    float pagaStandard = 0;
    int valoreSentinella = -1;
    unsigned int oreStraordinario = 0;
    float importoStraordinario = 0;
    float importoStandard = 0;
    float importoSalario = 0;

    do{//Esegui finchè non viene inserito il valoreSentinella
       printf("%s", "Inserire numero di ore di lavoro (-1 per uscire): ");
       scanf("%u", &oreDiLavoro);
            if(oreDiLavoro != valoreSentinella){// Stoppa esecuzione se viene inserito valore sentinella
                printf("%s", "Inserire paga oraria per il lavoratore ($00.00): ");
                scanf("%f", &pagaStandard);
                if(oreDiLavoro > (int)ORARIOLAVORATIVONORMALE){// Se le ore di lavoro eccedono le ore standard esegui:

                    oreStraordinario = ( oreDiLavoro - (int)ORARIOLAVORATIVONORMALE);
                    importoStraordinario = (( pagaStandard * (float)oreStraordinario ) * (float)STRAORDINARIO );
                    importoStandard = ( pagaStandard * (float)ORARIOLAVORATIVONORMALE );
                }
                else {// Esegui se il lavoratore non ha ore di straordinario
                    importoStandard = ( pagaStandard * (float)oreDiLavoro );
                }

                importoSalario = ( importoStandard + importoStraordinario );
                printf("Il Salario e: $%.02f\n", importoSalario);
            }
    }while(oreDiLavoro != valoreSentinella);//Fine while

return 0;
}//Fine funzione main
