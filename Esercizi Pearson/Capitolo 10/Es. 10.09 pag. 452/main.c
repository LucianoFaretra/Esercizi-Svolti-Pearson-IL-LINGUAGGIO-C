/*                 Sviluppato da Luciano Faretra 08/01/2015 rilasciato sotto licenza GNUv3
                                Uso di unioni
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    floatingPoint                   Unione formata da piu tipi di dato                              unione
    f                               Variabile contenuta in floatingPoint                            float
    d                               Variabile contenuta in floatingPoint                            double
    x                               Variabile contenuta in floatingPoint                            long double

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    floatingPoint                   Stampa di tutta l'unione in tutti e 3 i formati                 unione

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


*/
   union integer{
        float f;
        double d;
        long double x;
    };


#include <stdlib.h>
#include <stdio.h>


int main( void )
{
    union integer a;

    printf("%s", "inserire un valore float: ");
    scanf("%f", &a.f);
    printf("\n%f\n", a.f);
    printf("\n%lf\n", a.d);
    printf("\n%Lf\n", a.x);
    puts("");

    printf("%s", "inserire un valore double: ");
    scanf("%lf", &a.d);
    printf("\n%f\n", a.f);
    printf("\n%lf\n", a.d);
    printf("\n%Lf\n", a.x);
    puts("");

    printf("%s", "inserire un valore long double: ");
    scanf("%Lf", &a.f);
    printf("\n%f\n", a.f);
    printf("\n%lf\n", a.d);
    printf("\n%Lf\n", a.x);
    puts("");


return 0;
}
