/*
Il seguente programma legge due interi e determina se il primo è un multiplo del secondo
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//Inizio Funzione Main
    int primoNumero = 0;
    int secondoNumero = 0;

    printf("%s", "Per cortesia inserire due numeri interi per sapere se il primo e' multiplo del secondo: ");

    scanf("%d %d", &primoNumero, &secondoNumero);

    if((secondoNumero % primoNumero) == 0)
        {
            printf("\nIl primo numero inserito \"%d\" e' multiplo del secondo numero inserito \"%d\"\n", primoNumero, secondoNumero);
        }

    if((secondoNumero % primoNumero) != 0)
        {
            printf("Il primo numero inserito \"%d\" NON e' multiplo del secondo numero inserito \"%d\"\n", primoNumero, secondoNumero);
        }


return 0;//La Funzione main restituisce 0 in caso di esito positivo
}//Fine Funzione Main


