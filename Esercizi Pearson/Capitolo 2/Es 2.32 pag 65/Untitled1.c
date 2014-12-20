/*
        Il seguente programma calcola l'indice di massa corporea secondo la formula
        BMI = PesoInKg/(Altezza^2)
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//Inizio Funzione Main
    float altezza = 0;
    float peso = 0;

    printf("Per cortesia inserire il proprio peso in kilogrammi: ");
    scanf("%f", &peso);

    printf("\nPer cortesia inserire la propria altezza in metri: ");
    scanf("%f", &altezza);

    printf("\nIl proprio BMI è pari a: %f\n\n", (peso / (altezza * altezza)));

    puts("VALORI del BMI");
    puts("Sottopeso:\tmeno di 18.5");
    puts("Normale:\ttra 18.5 e 24.9");
    puts("Sovrappeso:\ttra 25 e 29.9");
    puts("Obeso:\t\t30 o oltre");

return 0;//La Funzione main restituisce 0 in caso di esito positivo
}//Fine Funzione Main


