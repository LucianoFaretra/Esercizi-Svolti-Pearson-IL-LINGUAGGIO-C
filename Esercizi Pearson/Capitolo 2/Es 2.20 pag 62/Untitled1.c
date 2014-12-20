/*
Il seguente programma calcolerà il Diametro, Circonferenza e Area di un Cerchio
*/
#include <stdlib.h>
#include <stdio.h>
#define PI 3.14159

int main(void)
{//Inizio Funzione Main
    float raggioCerchio;

    printf("%s", "Prego inserire il diametro del cerchio: ");
    scanf("%f", &raggioCerchio);
    printf("\nIl Diametro del Cerchio e' pari a: %f \n", raggioCerchio * 2);
    printf("La Circonferenza del Cerchio e' pari a: %f \n", ((raggioCerchio * 2) * PI));
    printf("L'Area del Cerchio e' pari a: %f \n", ((raggioCerchio * raggioCerchio) * PI));

return 0;//La Funzione main restituisce 0 in caso di esito positivo
}//Fine Funzione Main


