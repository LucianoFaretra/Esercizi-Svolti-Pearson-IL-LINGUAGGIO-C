/*                 Sviluppato da Luciano Faretra 07/01/2015 rilasciato sotto licenza GNUv3
                                Esercizio 10.5
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.


    1.1

*/

struct inventory{
    char partName[30];
    int partNumber;
    double price;
    int stock;
    int reorder;
};

union data{
    char c;
    short s;
    long b;
    float f;
    double d;
};

struct address{
    char streetAddress[25];
    char city[20];
    char state[3];
    char zipCode[6];
};

struct student{
    char firstName[15];
    char lastName[15];
    struct address homeAddress;
};

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main( void )
{


return 0;
}
