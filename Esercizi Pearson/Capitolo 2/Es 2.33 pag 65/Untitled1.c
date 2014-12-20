/*
        Il seguente programma calcola il costo sostenuto da un utente nell'utilizzo della proprio automobile
        per raggiungere il posto di lavoro e il corrispettivo utilizzando invece un servizio di car pooling

        ****************************************************************************************************

        INPUT                       DESCRIZIONE                                                 DOMINIO
        -chilometriPercorsi         Chilometri percorsi per raggingere il posto di lavoro       Float > 0
        -costoCarburante            Costo attuale del carburante                                Float > 0
        -mediaConsumoChilometro     Consumo medio per chilometro automobile                     Float > 0
        -costoParcheggio            Costo eventuale parcheggio                                  Float >= 0
        -costoPedaggio              Costo eventuale pedaggio stradale                           Float >= 0
        -SPESACARPOOLING            Tariffa per chilometro serziaio di car pooling              Float > 0

        OUTPUT                      DESCRIZIONE                                                 DOMINIO
        -spesaCarPooling            Spesa totale tragitto usando il Car pooling                 Float > 0
        -spesaPersonale             Spesa sostenuta utilizzando la propria automobile composta  Float > 0
                                    dalla somma tra costrocarburante del tragitto più eventuale
                                    pedaggio e parcheggio

        ****************************************************************************************************
*/
#include <stdlib.h>
#include <stdio.h>
#define SPESACARPOOLING 0.45

int main(void)
{//Inizio Funzione Main

    float chilometriPercorsi = 0;
    float costoCarburante = 0;
    float mediaConsumoChilometro = 0;
    float costoParcheggio = 0;
    float costoPedaggio = 0;

    float spesaCarPooling = 0;
    float spesaPersonale = 0;

    puts("Inserire il numero di chilometri percorsi per andare a lavoro: ");
    scanf("%f", &chilometriPercorsi);

    puts("Inserire il costro del carburante per litro del carburante utilizzato dalla propria auto: ");
    scanf("%f", &costoCarburante);

    puts("Inserire il consumo medio per chilometro della propria auto: ");
    scanf("%f", &mediaConsumoChilometro);

    puts("Inserire il costo dell'eventuale ticket di parcheggio: ");
    scanf("%f", &costoParcheggio);

    puts("Inserire il costo dell'eventuale ticket di pedaggio autostradale: ");
    scanf("%f", &costoPedaggio);

    printf("\nIl costro del tragitto giornaliero con un servizio di carpooling e' pari a: %f\n", spesaCarPooling = (chilometriPercorsi * SPESACARPOOLING));
    printf("Il costo del tragitto giornaliero con la propria auto e' pari a: %f", spesaPersonale = (chilometriPercorsi * (costoCarburante/100 * (100/mediaConsumoChilometro)) + costoParcheggio + costoPedaggio));


return 0;//La Funzione main restituisce 0 in caso di esito positivo
}//Fine Funzione Main


