/*                 Sviluppato da Luciano Faretra 06/01/2015 rilasciato sotto licenza GNUv3
                                    Scrivi le intestazioni
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    stringa1                        Stringa di dimensione SIZE contenente interi                    intero
    stringa2                        Stringa di dimensione SIZE contenente interi                    intero
    stringa3                        Stringa di dimensione SIZE contenente interi                    intero
    stringa4                        Stringa di dimensione SIZE contenente interi                    intero
    SIZE                            Grandezza massima delle stringhe                                intero

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    sommaStringhe                   Somma dei valori interi contenuti nelle stringhe                intero

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Legge le tre stringhe, le converte in intero e le somma



    1.1

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 10

int main( void )
{
    char stringa1[SIZE];
    char stringa2[SIZE];
    char stringa3[SIZE];
    char stringa4[SIZE];
    int sommaStringhe;

    memset(stringa1, 0, SIZE);
    memset(stringa2, 0, SIZE);
    memset(stringa3, 0, SIZE);
    memset(stringa4, 0, SIZE);


    printf("%s", "\nPrego inserire il valore della stringa1: ");
    fgets(stringa1, SIZE, stdin);
    printf("%s", "\nPrego inserire il valore della stringa2: ");
    fgets(stringa2, SIZE, stdin);
    printf("%s", "\nPrego inserire il valore della stringa3: ");
    fgets(stringa3, SIZE, stdin);
    printf("%s", "\nPrego inserire il valore della stringa4: ");
    fgets(stringa4, SIZE, stdin);
    puts("");
    sommaStringhe = 0;
    sommaStringhe += strtol( stringa1, (char **)NULL, 10 );
    sommaStringhe += strtol( stringa2, (char **)NULL, 10 );
    sommaStringhe += strtol( stringa3, (char **)NULL, 10 );
    sommaStringhe += strtol( stringa4, (char **)NULL, 10 );

    printf("La somma delle 4 stringhe e' pari a: %d", sommaStringhe);

return 0;
}
