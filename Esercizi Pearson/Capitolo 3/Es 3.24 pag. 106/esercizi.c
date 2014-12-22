/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                                    Stampa Tabella
Affinamento Top-Down:

    INPUT                       DESCRIZIONE                                                DOMINIO
    -PRIMACOLONNA               Moltiplicatore prima colonna                               unsigned int > 0
    -SECONDACOLONNA             Moltiplicatore seconda colonna                             unsigned int > 0
    -TERZACOLONNA               Moltiplicatore terza colonna                               unsigned int > 0
    -QUARTACOLONNA              Moltiplicatore quarta colonna                              unsigned int > 0
    -numeroIniziale             Il numero iniziale da cui parte la sequenza                unsigned int > 0


    OUTPUT                      DESCRIZIONE                                                DOMINIO
    -numeroIniziale             Numeri che compongono la tabella incrementati di uno       unsigned int > 0
                                per ogni rigo e moltiplicati per il moltiplicatore ogni
                                colonna

    DATI DI LAVORO              DESCRIZIONE                                                DOMINIO
    -counter                    Contatore di quanti numeri ci sono nella colonna           unsigned int > 0 <= 10


    1. Il programma legge il primo numero e li stampa in tabella in colonne da dieci moltiplicandoli per il moltiplicatore della XCOLONNA

    1.1 Inizializza le costanti
        inizializza counter a 0
        leggi il numeroIniziale
        Se il numero inserito è maggiore di 0

            Allora
                Stampa la prima riga della colonna contenente la legenda dei moltiplicatori
                Esegui
                    Stampa: numeroIniziale spaziatura numeroIniziale moltiplicato per PRIMACOLONNA spaziatura numeroIniziale per
                            SECONDACOLONNA numeroIniziale per TERZACOLONNA spaziatura numeroIniziale per QUARTACOLONNA
                    incrementa numeroIniziale di uno
                    incrementa counter di uno
                Finchè counter != 10

            Altrimenti
                Stampa: "Attenzione non è possibile stampare la tabella se il valore iniziale è minore di 0"
        Fine se
        Fine

*/
#include <stdlib.h>
#include <stdio.h>
#define PRIMACOLONNA 1
#define SECONDACOLONNA 10
#define TERZACOLONNA 100
#define QUARTACOLONNA 1000

int main(void)
{//inizio funzione main

    int numeroIniziale = 0;
    unsigned int counter = 0;

    printf("%s", "Inserire il numero iniziale su cui calcolare la tabella (>0): ");
    scanf("%d", &numeroIniziale);
    if(numeroIniziale > 0){// Esegui blocco se è stato inserito un valore valido
        printf("\nN\t%d*N\t%d*N\t%d*N\n\n", SECONDACOLONNA, TERZACOLONNA, QUARTACOLONNA);
        do{//Esegui finchè non terminano i numeri da stampare

                printf("%d\t%d\t%d\t%d\t\n", ( numeroIniziale * (int)PRIMACOLONNA ), ( numeroIniziale * (int)SECONDACOLONNA ), (numeroIniziale * (int)TERZACOLONNA), (numeroIniziale * (int)QUARTACOLONNA));
                numeroIniziale++;
                ++counter;
        }while(counter != 10);//Fine while
    }

    else{
        puts("Attenzione non e' possibile stampare la tabella se il valore iniziale e' minore di 0");
        }

return 0;
}//Fine funzione main
