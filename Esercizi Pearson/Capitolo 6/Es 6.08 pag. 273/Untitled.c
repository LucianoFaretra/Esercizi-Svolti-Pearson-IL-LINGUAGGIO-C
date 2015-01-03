/*                 Sviluppato da Luciano Faretra 02/01/2015 rilasciato sotto licenza GNUv3
                                        Esercizio 6.3

*/

#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#define SIZE 10

int main( void )
{
 	char table[SIZE] = {"fffffffff\0"};
 	double b[34];
 	int g[5] = { 8, 8, 8, 8, 8 };
 	float c[100];
 	float w[99] = { 0 }; 
 	float piuPiccolo;
 	float piuGrande;
 	
 	double a[11] = { 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2 };
 	
 
 	srand(time(NULL));
 	
 	size_t contatore = 0;
 	float totale = 0;
 
 	printf("%c\n", table[6]);
 	
 	printf("%f\n", b[4]);
 	printf( "%s", "Inserisci l'elemento: \n");
	scanf("%lf", &b[4]);
 	printf("%f\n", b[4]);
 	
 	do{
 		totale += c[contatore];
 		
	 }while(contatore++ < 100);
	 
	 printf("La somma dei valori di c[100] e' %f", totale);
	 
	 contatore = 0;
	 do{
	 	b[contatore] = a[contatore];
	 	
	 }while(contatore++ < 11);
	 
		contatore = 0;
	  do{
	 	printf("\n%f", b[contatore] );
	 	
	 }while(contatore++ < 34);
	 
	 printf("%s", "\nCreazione array con numeri casuali da 0 a 100\n");
	 contatore = 0;
	 do{
	 	w[contatore] = 2 + rand() % 10000;
	 	
	 }while(contatore++ < 99);
	 
	piuPiccolo = w[0];
	do{
	 	 if(piuPiccolo >= w[contatore]){
		  	piuPiccolo = w[contatore];
		  }
		 
	 }while(contatore++ < 99);
	 
	 printf("\nIl valore piu piccolo dell'arrai w e': %f", piuPiccolo);
	 
	piuGrande = w[0];
	do{
	 	 if(piuGrande <= w[contatore]){
		  	piuGrande = w[contatore];
		  }
		 
	 }while(contatore++ < 99);
	
	printf("\nIl valore piu grande dell'arrai w e': %f", piuGrande);

	

	 
	 
	 
	 
	 
 	
 	
return 0;
}
