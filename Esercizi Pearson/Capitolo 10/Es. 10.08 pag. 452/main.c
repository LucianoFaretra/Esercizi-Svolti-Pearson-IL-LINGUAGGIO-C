/*                 Sviluppato da Luciano Faretra 08/01/2015 rilasciato sotto licenza GNUv3
                                Uso di unioni
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    integer                         Unione formata da piu tipi di file                              unione
    c                               Variabile contenuta in integer                                  char
    s                               Variabile contenuta in integer                                  short
    i                               Variabile contenuta in integer                                  intero
    b                               Variabile contenuta in integer                                  intero lungo

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    integer                         Stampa di tutta l'unione in tutti e 4 i formati                 unione

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


*/
   union integer{
        char c;
        short s;
        int i;
        long int b;
    };


#include <stdlib.h>
#include <stdio.h>


int main( void )
{
    union integer a;

    printf("%s", "inserire un valore: ");
    scanf("%d", &a.i);
    printf("\n%d\n", a.c);
    printf("\n%hd\n", a.s);
    printf("\n%c\n", a.c);
    printf("\n%ld\n", a.b);

return 0;
}
