/*                 Sviluppato da Luciano Faretra 02/01/2015 rilasciato sotto licenza GNUv3
                                        Esercizio 6.3

*/

 #include <stdlib.h>
 #include <stdio.h>
 #define SIZE 3

 int main( void )
 {
     int table[SIZE][SIZE] = { {1,8},{2,4,6},{5} };
     size_t x; //Variabile di controllo indice x
     size_t y; //Variabile di controllo infice y
     int numeroElementi = 0;

     for(x = 0; x < SIZE; x++ ){
        for( y = 0; y < SIZE; y++ ){
            numeroElementi++;
        }
     }
     printf("L'array table contiene %d elementi\n", numeroElementi);

     puts("Gli elementi che compongono l'array table sono i seguenti: ");

     for(x = 0; x < SIZE; x++){
        for(y = 0; y < SIZE; y++){
            printf("table[%d][%d]: %d\n", x, y, table[x][y]);
        }
        
     }

 return 0;
 }
