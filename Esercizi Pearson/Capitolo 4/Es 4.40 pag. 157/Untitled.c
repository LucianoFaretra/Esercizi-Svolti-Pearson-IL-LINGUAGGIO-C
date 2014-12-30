/*                 Sviluppato da Luciano Faretra 30/12/2014 rilasciato sotto licenza GNUv3
                                        Tassa equa

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    IMPORTOTASSA                Importo della tassa equa                                 unsigned int >= 0
    spesaAlloggio               Spesa sopportata per l'alloggio                          float >= 0
    spesaGeneriAlimentari       Spesa sopportata per l'acquisto dei generi alimentari    float >= 0
    spesaAbbigliamento          Spesa sopportata per l'abbigliamento                     float >= 0
    spesaEducazione             Spesa sopportata per l'educazione                        float >= 0
    spesaAssistenzaSanitaria    Spesa sopportata per l'assistenza sanitaria              float >= 0
    spesaVacanze                Spesa sopportata per le vacanze                          float >= 0

    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    spesaTotale                 Somma totale delle spese                                 float >= 0
    importoTasse                Importo delle tasse pari al IMPORTOTASSA% tel totale     float >= 0
    spesaFinale                 Spesa compresa di tassazione                             float >= 0

    DATI DI LAVORO              DESCRIZIONE                                              DOMINIO

    1. Calcola la tessazione se si usasse la cos'ì detta tassa equa

    1.1 Stampa:"Inserire l'ammontare delle spese per l'Alloggio: $"
        leggi spesaAlloggio
        Stampa:"Inserire l'ammontare delle spese per l'acquisto dei generi alimentari: $"
        leggi spesaGeneriAlimentari
        Stampa:"Inserire l'ammontare delle spese per l'abbigliamento: $"
        leggi spesaAbbigliamento
        Stampa:"Inserire l'ammontare delle spese per l'educazione: $"
        leggi spesaEducazione
        Stampa:"Inserire l'ammontare delle spese per l'assistenza sanitaria: $"
        leggi spesaAssistenzaSanitaria
        Stampa:"Inserire l'ammontare delle spese per le vacanze: $"
        leggi spesaVacanze

        spesaTotale = ( spesaAlloggio + spesaGeneriAlimentari + spesaAbbigliamento + spesaEducazione + spesaAssistenzaSanitaria + spesaVacanze)
        importoTasse = spesaTotale * IMPORTOTASSA / 100
        spesaFinale = spesaTotale + importoTasse

        Stampa:"Nel caso fosse adorrata la tassazione equa, i cittadini con le seguenti spese:
        Spese per l'Alloggio: $'spesaAlloggio'
        spese per l'acquisto dei generi alimentari: $'spesaGeneriAlimentari'
        spese per l'abbigliamento: $'spesaAbbigliamento'
        spese per l'educazione: $'spesaEducazione'
        spese per l'assistenza sanitaria: $'spesaAssistenzaSanitaria'
        spese per le vacanze: $'spesaVacanze'
        Pagherebbero: $'importoTasse' di tasse su una spesa di 'spesaTotale'
        Per una spesa complessiva di: $'spesaFinale'.
   */

#include <stdlib.h>
#include <stdio.h>
#define IMPORTOTASSA 27


int main(void)
{//inizio funzione main

    float spesaAlloggio = 0;
    float spesaGeneriAlimentari = 0;
    float spesaAbbigliamento = 0;
    float spesaEducazione = 0;
    float spesaAssistenzaSanitaria = 0;
    float spesaVacanze = 0;
    float spesaTotale;
    float importoTasse;
    float spesaFinale;



    do{
        printf("%s", "Inserire l'ammontare delle spese per l'Alloggio: $");
        scanf("%f", &spesaAlloggio);
    }while(spesaAlloggio < 0);
    do{
    printf("%s", "Inserire l'ammontare delle spese per l'acquisto dei generi alimentari: $");
    scanf("%f", &spesaGeneriAlimentari);
    }while(spesaGeneriAlimentari < 0);
    do{
    printf("%s", "Inserire l'ammontare delle spese per l'abbigliamento: $");
    scanf("%f", &spesaAbbigliamento);
    }while(spesaAbbigliamento < 0);
    do{
    printf("%s", "Inserire l'ammontare delle spese per l'educazione: $");
    scanf("%f", &spesaEducazione);
    }while(spesaEducazione < 0);
    do{
    printf("%s", "Inserire l'ammontare delle spese per l'assistenza sanitaria: $");
    scanf("%f", &spesaAssistenzaSanitaria);
    }while(spesaAssistenzaSanitaria < 0);
    do{
    printf("%s", "Inserire l'ammontare delle spese per le vacanze: $");
    scanf("%f", &spesaVacanze);
    }while(spesaVacanze < 0);

    spesaTotale = ( spesaAlloggio + spesaGeneriAlimentari + spesaAbbigliamento + spesaEducazione + spesaAssistenzaSanitaria + spesaVacanze);
    importoTasse = ( spesaTotale * IMPORTOTASSA / 100 );
    spesaFinale = ( spesaTotale + importoTasse );

    printf("%s", "Nel caso fosse adorrata la tassazione equa, i cittadini con le seguenti spese:\n");
    printf("Spese per l'Alloggio: \t\t\t\t$%.2f\n", spesaAlloggio);
    printf("spese per l'acquisto dei generi alimentari: \t$%.2f\n", spesaGeneriAlimentari);
    printf("spese per l'abbigliamento: \t\t\t$%.2f\n", spesaAbbigliamento);
    printf("spese per l'educazione: \t\t\t$%.2f\n", spesaEducazione);
    printf("spese per l'assistenza sanitaria: \t\t$%.2f\n", spesaAssistenzaSanitaria);
    printf("spese per le vacanze: \t\t\t\t$%.2f\n", spesaVacanze);
    puts("");
    printf("Pagherebbero: $%.2f di tasse su una spesa di: %.2f\n", importoTasse, spesaTotale);
    printf("Per una spesa complessiva di: $%.2f.\n", spesaFinale);

return 0;
}//Fine funzione main
