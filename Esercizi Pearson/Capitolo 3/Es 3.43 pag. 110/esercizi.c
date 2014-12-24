/*                 Sviluppato da Luciano Faretra 23/12/2014 rilasciato sotto licenza GNUv3
                Il programma legge tre valori interi e dice se è possibile costruire un triangolo

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    primoLato                   Primo lato del triangolo inserito dall'utente            float > 0
    secondoLato                 Secondo lato del triangolo inserito dall'utente          float > 0
    terzoLato                   Terzo lato del triangolo inserito dall'utente            float > 0


    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    latoPiuGrande               Definisce il lato piu grande                             float > 0
    secondoLatoPiuGrande        Definsce il secondo lato piu grande                      float > 0
    terzoLatoPiuGrande          Definisce il terzo lato piu grande                       float > 0
    totaleLati                  totale dei lati rimanenti                                float > 0

    DATI DI LAVORO              DESCRIZIONE                                              DOMINIO

    1   Stampa messaggio: "Inserisci il primo lato (>0): "
        Leggi primoLato
        Stampa messaggio: "Inserisci il secondo lato (>0): "
        Leggi secondoLato
        Stampa messaggio: "Inserisci il terzo lato (>0): "
        Leggi terzolato

        calcola quale dei tre lati e' il lato piu grande

        Se i due lati rimanenti sommati sono > del lato piu grande
            Allora
                Se la differenza dei due lati rimanenti sono <= del lato piu grande
                    Allora
                        Stampa: "I lati inseriti corrispondono ad un triangolo!"
                    Altrimenti
                        Stampa: "I lati inseriti non corrispondono ad un triangolo!"
                Fine Se
            Altrimenti
                Stampa: "I lati inseriti non corrispondono ad un triangolo!"
        Fine Se


    1.1 Stampa messaggio: "Inserisci il primo lato (>0): "
        Leggi primoLato
        Stampa messaggio: "Inserisci il secondo lato (>0): "
        Leggi secondoLato
        Stampa messaggio: "Inserisci il terzo lato (>0): "
        Leggi terzolato

        Se primoLato > secondoLato
            Allora
                Se primoLato > terzoLato
                    Allora
                        Se secondoLato > terzoLato
                            Allora
                                latoPiuGrande = primoLato
                                secondoLatoPiuGrande = secondoLato
                                terzoLatoPiuGrande = terzoLato
                            Altrimenti
                                latoPiuGrande = primoLato
                                secondoLatoPiuGrande = terzoLato
                                terzoLatoPiuGrande = secondoLato
                        Fine Se
                    Altrmenti
                        latoPiuGrande = primoLato
                        secondoLatoPiuGrande = secondoLato
                        terzoLatoPiuGrande = terzoLato
                Fine Se
        Altrimenti
            Se secondoLato > terzoLato
                Allora
                    Se primoLato > TerzoLato
                        Allora
                            latoPiuGrande = secondoLato
                            secondoLatoPiuGrande = primoLato
                            terzoLatoPiuGrande = terzoLato
                        Altrimenti
                            latoPiuGrande = secondoLato
                            secondoLatoPiuGrande = terzoLato
                            terzoLatoPiuGrande = primoLato
                    Fine Se
                Altrimenti
                    latoPiuGrande = terzoLato
                    secondoLatoPiuGrande = secondoLato
                    terzoLatoPiuGrande = primoLato
            Fine Se
        Fine Se


        Se (secondoLatoPiuGrande + terzoLatoPiuGrande) sono > del latoPiuGrande
            Allora
                Se (secondoLatoPiuGrande - terzoLatoPiuGrande) <= del latoPiuGrande
                    Allora
                        Stampa: "I lati inseriti corrispondono ad un triangolo!"
                    Altrimenti
                        Stampa: "I lati inseriti non corrispondono ad un triangolo!"
                Fine Se
            Altrimenti
                Stampa: "I lati inseriti non corrispondono ad un triangolo!"
        Fine Se

   */
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    float primoLato;
    float secondoLato;
    float terzoLato;
    float latoPiuGrande = 0;
    float secondoLatoPiuGrande = 0;
    float terzoLatoPiuGrande = 0;

    printf("%s", "Inserisci il primo lato (>0): ");
    scanf("%f", &primoLato);
    printf("%s", "Inserisci il secondo lato (>0): ");
    scanf("%f", &secondoLato);
    printf("%s", "Inserisci il terzo lato (>0): ");
    scanf("%f", &terzoLato);

    if( primoLato > secondoLato ){
        if( primoLato > terzoLato ){
            if( secondoLato > terzoLato ){
                latoPiuGrande = primoLato;
                secondoLatoPiuGrande = secondoLato;
                terzoLatoPiuGrande = terzoLato;
            }
            else{
                latoPiuGrande = primoLato;
                secondoLatoPiuGrande = terzoLato;
                terzoLatoPiuGrande = secondoLato;
            }
        }
        else{
            latoPiuGrande = primoLato;
            secondoLatoPiuGrande = secondoLato;
            terzoLatoPiuGrande = terzoLato;
        }
    }
    else{
        if( secondoLato > terzoLato ){
            if( primoLato > terzoLato ){
                latoPiuGrande = secondoLato;
                secondoLatoPiuGrande = primoLato;
                terzoLatoPiuGrande = terzoLato;
            }
            else{
                latoPiuGrande = secondoLato;
                secondoLatoPiuGrande = terzoLato;
                terzoLatoPiuGrande = primoLato;
            }
        }
        else{
            latoPiuGrande = terzoLato;
            secondoLatoPiuGrande = secondoLato;
            terzoLatoPiuGrande = primoLato;
        }

    }


    if(( secondoLatoPiuGrande + terzoLatoPiuGrande ) > latoPiuGrande ){
        if(( secondoLatoPiuGrande - terzoLatoPiuGrande ) <= latoPiuGrande ){
            printf("%s", "I lati inseriti corrispondono ad un triangolo!\n");
        }
        else{
            printf("%s", "I lati inseriti non corrispondono ad un triangolo!\n");
        }
    }
    else{
        printf("%s", "I lati inseriti non corrispondono ad un triangolo!\n");
    }

return 0;
}//Fine funzione main
