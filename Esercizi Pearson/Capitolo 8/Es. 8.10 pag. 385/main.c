/*                 Sviluppato da Luciano Faretra 06/01/2015 rilasciato sotto licenza GNUv3
                                Confronto di porzioni di stringhe
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    stringa1                        Stringa di dimensione SIZE contenente caratteri                 stringa
    stringa2                        Stringa di dimensione SIZE contenente caratteri                 stringa
    SIZE                            Grandezza massima delle stringhe                                double
    numeroCaratteriDaControllare    Specifica quanti caratteri confrontare                          unsigned int

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    messaggio                       Il programma stampa se la stringa 1 e' piu grande o piccola della 2  stringa

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Legge le tre stringhe, le converte in intero e le somma



    1.1

*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 40

int main( void )
{
    char stringa1[SIZE];
    char stringa2[SIZE];
    int confronto;
    unsigned int numeroCaratteriDaControllare;
    int controlloScanf;

    memset(stringa1, 0, SIZE);
    memset(stringa2, 0, SIZE);

    printf("%s", "\nPrego inserire il valore della stringa1: ");
    fgets(stringa1, SIZE, stdin);
    printf("%s", "\nPrego inserire il valore della stringa2: ");
    fgets(stringa2, SIZE, stdin);
    printf("%s", "\nPrego inserire il numero di caratteri da confrontare: ");
    do{
        controlloScanf = scanf("%u", &numeroCaratteriDaControllare);
        if( controlloScanf == 0 ){
            scanf("%*[^\n]");
            puts("Input errato, inserire un intero: ");
        }

    }while(controlloScanf == 0);

    puts("");

    confronto = strncmp(stringa1, stringa2, numeroCaratteriDaControllare);

    if( confronto == 0 ){
        puts("Le stringhe sono della stessa lunghezza");
    }
    else if( confronto >= 1 ){
        puts("La stringa1 e' maggiore della stringa2");
    }
    else if( confronto <= -1 ){
        puts("La stringa2 e' maggiore della stringa1");
    }

return 0;
}
