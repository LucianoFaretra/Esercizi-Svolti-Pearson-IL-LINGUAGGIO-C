/*                 Sviluppato da Luciano Faretra 23/12/2014 rilasciato sotto licenza GNUv3
                                Diametro, circonferenza e area di un cerchio

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    PIGRECO                     Valore del pi greco                                      float
    raggio                      Raggio del cerchio                                       float

    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    diametro                    Diametro del cerchio                                     float
    circonferenza               Circonferenza del cerchio                                float
    area                        Area del cerchio                                         float

    DATI DI LAVORO              DESCRIZIONE                                              DOMINIO

    1   Leggi il valore del raggio
        Calcola diametro del cerchio
        Calcola circonferenza del cerchio
        Calcola area del cerchio

        Stampa diametro del cerchio
        Stampa circonferenza del cerchio
        Stampa area del cerchio

    1.1 Leggi il valore del raggio

        Stampa diametro = raggio + raggio
        Stampa circonferenza = diametro * PIGRECO
        Stampa area = ( circonferenza * raggio ) / 2


   */
#include <stdlib.h>
#include <stdio.h>
#define PIGRECO 2

int main(void)
{//inizio funzione main

    float raggio;
    float diametro;
    float circonferenza;
    float area;

    printf("%s", "Inserire il valore del raggio: ");
    scanf("%f", &raggio);

    printf("\n\n\nIl diametro del cerchio avente raggio %.2f e' pari a: %.2f", raggio, diametro = ( raggio * raggio ));
    printf("\n\nLa circonferenza del cerchio avente raggio %.2f e' pari a: %.2f", raggio, circonferenza = ( diametro * (float)PIGRECO ));
    printf("\n\nL'area del cerchio avente raggio %.2f e' pari a: %.2f\n", raggio, area = (( circonferenza * raggio ) / 2 ));

return 0;
}//Fine funzione main
