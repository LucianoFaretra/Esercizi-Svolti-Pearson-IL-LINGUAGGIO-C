/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                                    Stampare numeri con un ciclo
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned int numero = 1;

    while(numero <= 10){

        printf("%u\t", numero++);
    }
return 0;
}//Fine funzione main
