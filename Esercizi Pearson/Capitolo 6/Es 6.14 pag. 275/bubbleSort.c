/*                 Sviluppato da Luciano Faretra 02/01/2015 rilasciato sotto licenza GNUv3
                                    Bubble Sort Modificato

****************************************************************************************************************

    INPUT                           DESCRIZIONE                                                     DOMINIO
    array                           Array monodimensionale da ordinare                              double
    grandezzaArray                  Grandezza dell'array                                            unsigned int

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    array                           Array monodimensionale ordinata in ordine alfabbetico           double

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    passate                         Contatore di quante passate sono state fatte                    unsigned int >= 0
    i                               Indice contatorei dei confronti                                 size_t >= 0
    temp                            Locazione temporanea utilizzata per effettuare gli scambi       double >= 0

*****************************************************************************************************************

    1. Inserisci un'array monodimensionale e la ordina in modo crescente

*/

#include <stdio.h>
#include <stdlib.h>

int bubbleSort( unsigned int array[], unsigned int grandezzaArray )
{
    unsigned int passate;    /*Contatore delle passate*/
    size_t i;       /*Contatore dei confronti*/
    int temp;    /*Locazione temporanea utilizzata per effettuare gli scambi*/
    int noScambi = 0;

    passate = 1;
    while( passate < grandezzaArray ){
        i = 0;
        noScambi = 0;
        while( i < grandezzaArray ){
            if( array[i] > array[i + 1] ){ //Confronta elemento con successivo, se piu grande lo scambia
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
                noScambi++;
            }
        i++;
        }
    if( noScambi == 0){// Se non vengono operati scambi in una passata significa che l'arrai e' in posizione esatta
        return 0;
    }
    passate++;
    grandezzaArray--; //Ad ogni passata si e' sicuri che l'ultimo membro spostato e in poosizione giusta
    }

    return 0;
}
