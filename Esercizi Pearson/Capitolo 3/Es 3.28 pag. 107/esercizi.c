/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                        Cosa stampa l'esercizio
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned int count = 1;

    while ( count <= 10 ){

        puts( count % 2 ? "****" : "++++++++" );

        ++count;
    }

return 0;
}//Fine funzione main
