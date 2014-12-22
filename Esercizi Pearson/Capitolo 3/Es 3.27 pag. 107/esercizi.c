/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                        Di dieci numeri diversi tra loro trova i due numeri piu grandi
Affinamento Top-Down:

    INPUT                       DESCRIZIONE                                                DOMINIO
    -MAXNUMERI                  Numero massimo di numeri su cui effettuare il controllo    unsigned int > 0
    -numeroInserito             Numero inserito dall'untente per effettuare il controllo   reale > 0

    OUTPUT                      DESCRIZIONE                                                DOMINIO
    -numeroPiuGrande            Il numero piu grande tra quelli esaminati                  reale > 0
    -secondoNumeroPiuGrade      Il numero piu grande dopo numeroPiuGrande tra quelli esamin.reale > 0

    DATI DI LAVORO              DESCRIZIONE                                                DOMINIO
    -counter                    Contatore di quanti numeri sono stati inseriti             unsigned int > 0 <= 10


    1. Il programma legge dieci numeri e stampa il numero piu grande e il secondo numero numero più grande

    1.1 Inserisci il numeroInserito
        Esegui
            Se il numeroInserito e' più grande di secondoNumeroPiuGrande
                Allora
                    Se il numeroInserito e' piu grande del numeroPiuGrande
                        Allora
                            il numeroPiuGrande diventa il secondoNumeroPiuGrande
                            il numeroInserito diventa il numeroPiuGrande
                        Altrimenti
                            il numeroInserito diventa il secondoNumeroPiuGrande
                    Fine Se
            Fine Se
            Passa a numero Successivo
        Finche' ci sono ancora numeri da controllare
        Fine

    1.2 Esegui
        Stampa: "Inserisci numero counter MAXNUMERI da controllare"
        Inserisci il numeroInserito
            Se il numeroInserito e' più grande di secondoNumeroPiuGrande
                Allora
                    Se il numeroInserito e' piu grande del numeroPiuGrande
                        Allora
                            il numeroPiuGrande diventa il secondoNumeroPiuGrande
                            il numeroInserito diventa il numeroPiuGrande
                        Altrimenti
                            il numeroInserito diventa il secondoNumeroPiuGrande
                    Fine Se
            Fine Se
            incrementa counter di uno
        Finche' counter e' diverso da 10
        Stampa Il primo num piu grande
        Stampa il secondo num piu grande
        Fine
*/
#include <stdlib.h>
#include <stdio.h>
#define MAXNUMERI 10

int main(void)
{//inizio funzione main

    float numeroInserito;
    unsigned int counter = 0;
    float numeroPiuGrande = 0;
    float secondoNumeroPiuGrande = 0;

    do{//Esegui finchè non si raggiunge il limite di numeri massimi analizzabili
        printf("Inserisci numero %u di %u da controllare: ", (counter + 1), (unsigned int)MAXNUMERI);
        scanf("%f", &numeroInserito);
            if( numeroInserito > secondoNumeroPiuGrande ){//Esegui se il numero inserito e' piu grande del secondo num piu grande

                if( numeroInserito > numeroPiuGrande ){//Esegui se il numero inserito e' piu grande del numero piu grande finora inserito

                    secondoNumeroPiuGrande = numeroPiuGrande;
                    numeroPiuGrande = numeroInserito;

                }//Fine Se numero inserito piu granse numeroPiuGrande

                else{//Esegui se numero inserito e' piu piccolo del numeroPiuGrande
                    secondoNumeroPiuGrande = numeroInserito;
                }//Fine else

            }//Fine Se numero inserito e' piu grande del secondo numero piu grande
            counter++; //Passa al numero successivo
    }while( counter != MAXNUMERI);//Esegui finche non si analizzano tutti i numeri analizzabili

    printf("\nIl numero piu' grande tra quelli presi in esame e': %.2f", numeroPiuGrande);
    printf("\nIl secondo numero piu' grande tra quelli presi in esame e': %.2f", secondoNumeroPiuGrande);

return 0;
}//Fine funzione main
