/*                 Sviluppato da Luciano Faretra 31/12/2014 rilasciato sotto licenza GNUv3
                                    Testare le funzioni della librearia standard
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    counter                         Stampa i numeri da uno a 10                                     unsigned intero > 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    counter                         Conta i numeri da uno a 10                                      unsigned intero > 0


    1. Stampa i numeri da uno a 10


    1.1

*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{//inizio funzione main

    unsigned int numero;

    printf("%s", "Inserire il numero: ");
    scanf("%u", &numero);

    printf("La radice quadrata di %u e' pari a %.2f\n", numero, sqrt(numero));
    printf("La radice cubica di %u e' pari a %.2f\n", numero, cbrt(numero));
    printf("Funzione esponenziale di %u e' pari a %.2f\n", numero, exp(numero));
    printf("Logaritmo naturale di x(in base e) di %u e' pari a %.2f\n", numero, log(numero));
    printf("Logaritmo di x x %u e' pari a %.2f\n", numero, log10(numero));
    printf("Valore assoluto di x come numero in virgola mobile %u e' pari a %.2f\n", numero, fabs(numero));
    printf("Arrotonda x all'intero piu piccolo non minore di x %u e' pari a %.2f\n", numero, ceil(numero));
    printf("Arrotonda x all'intero piu grande non maggiore di x %u e' pari a %.2f\n", numero, floor(numero));
    printf("x elevato alla potenza y (x^y) %u e' pari a %.2f\n", numero, pow(numero, 5));
    printf("resto x/y come numero in virgola mobile %u e' pari a %.2f\n", numero, fmod(numero, 3));
    printf("funzione trigonometrica seno di x (x in radiandi) %u e' pari a %.2f\n", numero, sin(numero));
    printf("Funzione trigonometrica coseno di x (x in radianti) %u e' pari a %.2f\n", numero, cos(numero));
    printf("funzione trigonometrica tangente di x (x in radianti) %u e' pari a %.2f\n", numero, tan(numero));


return 0;
}//Fine funzione main
