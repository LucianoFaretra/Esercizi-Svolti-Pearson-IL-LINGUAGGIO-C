/*
Il seguente programma esegue le istruzioni richieste dall'esercizio omonimo
*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned int x;
    unsigned int y;
    unsigned int i;

    puts("Inserire il valore di x ed y");
    scanf("%u %u", &x, &y); //inserisci da tastiera un intero senza segno per la variabile x e y

    i = 1;//Inizializza i a 1
    while(i < y){// Calcola x elevato alla potenza di y
        x *= x;//Moltiplica x per y
        i++;
    }//Gile while

    printf("X elevato alla potenza di Y e': %u", x);

return 0;
}//Fine funzione main
