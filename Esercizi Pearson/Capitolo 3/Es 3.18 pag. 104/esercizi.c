/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                                    Calcolo commissioni sulle Vendite

Affinamento Top-Down:

    INPUT                       DESCRIZIONE                                         DOMINIO
    -COMMISSIONE                percentuale commissione sulle vendite               float >= 0
    -SALARIOSETTIMANALE         Fisso salariale settimanale in dollari              float >= 0
    -valoreSentinella           Il presente valore interrompe le operazioni di ins. int < 0
    -vendite                    Vendite su cui calcolare le commissioni             float >= 0

    OUTPUT                      DESCRIZIONE                                         DOMINIO
    -importoSalario             Salario fisso più provigioni                         float >= 0


    1. Il programma calcola i salari di un'azienda chimica, somma il salario base alle provgioni d'acquisto
       e mostra di volta in volta i totali salariali

    1.1 Finchè non si inserisce il valore sentinella
            Leggi le vendite
            Calcola il Salario
            Stampa il salario

    1.2 Azzera contatori
            Esegui
                Stampa: "Inserire vendite in dollari (-1 per uscire): "
                Leggi vendite
                Se il valore delle vendite è diverso dal valoreSentinella
                    Allora
                           calcola l'importoSalario sommando la commissione delle vendite e il salarioSettimanale

                            Stampa il messaggio: "Il Salario è: "
                            stampa importoSalario in dollari
                Fine Se
            Finchè il valore delle vendite è diverso dal valoreSentinella
            Fine

*/
#include <stdlib.h>
#include <stdio.h>
#define COMMISSIONE 9
#define SALARIOSETTIMANALE 200

int main(void)
{//inizio funzione main

    float vendite = 0;
    int valoreSentinella = -1;
    float importoSalario = 0;

    do{//Esegui finchè
        printf("%s", "\nInserire vendite in dollari (-1 per uscire): ");
        scanf("%f", &vendite);
            if(vendite != valoreSentinella){

                importoSalario = ((vendite * ((float)COMMISSIONE / 100)) + (float)SALARIOSETTIMANALE);

                printf("Il Salario e': $%.02f\n", importoSalario);
            }//Fine Se vendite != valoreSentinella

    }while(vendite != valoreSentinella);//Fine while

return 0;
}//Fine funzione main
