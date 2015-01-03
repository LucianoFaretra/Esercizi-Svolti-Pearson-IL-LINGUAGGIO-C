/*                 Sviluppato da Luciano Faretra 02/01/2015 rilasciato sotto licenza GNUv3
                                        Esercizio 6.9

*/

#include <stdlib.h>
#include <stdio.h>

int main( void )
{
 	int t[2][5] = { {0} };
 	size_t x;
 	size_t y;
 	int piuPiccolo;
 	int somma = 0;

 	for( x = 0; x < 2; x++ ){
 		for( y = 0; y < 5; y++ ){
 			t[x][y] = 0;
		 }
	 }

 	for( x = 0; x < 2; x++ ){
 		for( y = 0; y < 5; y++ ){
 			printf("Inserisci il valore in posizione t[%d][%d]", x + 1, y + 1);
			scanf("%d", &t[x][y]);
		 }
	 }

 	piuPiccolo = t[0][0];
	for( x = 0; x < 2; x++ ){
 		for( y = 0; y < 5; y++ ){

			if(piuPiccolo > t[x][y]){
				piuPiccolo = t[x][y];
			}
		 }
	 }

	 printf("Il valore Piu piccolo di t[2][5] e': %d", piuPiccolo);

	 printf( "%s", "\nStampa la prima colonna in modo sequenziale di t: ");
	 x = 0;
	 y = 0;
	 while(x < 2){
	 	printf("%d ", t[x][y]);//Stampa tutta la prima colonna
	 	x = x + 1;
	 }

	 x = 0;
	 y = 3;
	 do{
	 	somma += t[x][y];//Stampa tutta la prima colonna
	 	x++;
	 }while(x < 2);
	printf("\nIl risultato della somma della quarta colonna di t e': %d\n", somma );

    puts("");
    printf("Colonna \t1\t2\t3\t4\t5\n\n");
    for( x = 0; x < 2; x++ ){
        printf("Riga %d\t", x+1);
 		for( y = 0; y < 5; y++ ){
 			printf("\t%d", t[x][y]);
		 }
	 puts("");
	 }


return 0;
}
