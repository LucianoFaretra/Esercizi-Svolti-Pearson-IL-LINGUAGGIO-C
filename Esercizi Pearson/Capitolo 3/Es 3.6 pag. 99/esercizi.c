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
    unsigned int power;

    scanf("%u", &x); //inserisci da tastiera un intero senza segno per la variabile x
    scanf("%u", &y); //inserisci da tastiera un intero senza segno per la variabile y

    i = 1; //assegna 1 a i
    power = 1; //assegna 1 a power

    power *= x; //Moltiplica power per x e assegna il valore a power
    i++; //Incrementa i di 1

    while(i <= y){// Testa in un ciclo while se i è minore o uguale a y
        printf("%s", "Lo e'\n");
    }//Gile while

    printf("%u\n", power); //Stampa la variabile power

return 0;
}//Fine funzione main
