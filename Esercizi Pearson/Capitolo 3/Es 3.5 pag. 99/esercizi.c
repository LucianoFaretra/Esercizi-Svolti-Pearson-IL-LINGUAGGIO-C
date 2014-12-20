#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main
    int sum;
    int x;

    x = 1;//Inizializza x a 1
    sum = 0;

    while(x <= 10)
        {//Inizio istruzione while
            sum += x;//somma a sum x
            ++x;//incrementa x si uno
        }//Fine istruzione while

    printf("La somma e': %d\n", sum);
    printf("Il valore di x e': %d\n", x);

return 0;
}//Fine funzione main
