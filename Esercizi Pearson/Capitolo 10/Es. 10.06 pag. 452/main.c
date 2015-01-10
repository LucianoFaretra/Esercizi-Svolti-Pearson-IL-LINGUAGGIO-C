/*                 Sviluppato da Luciano Faretra 07/01/2015 rilasciato sotto licenza GNUv3
                                Esercizio 10.5
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.


    1.1

*/

struct customer{
    char lastName[ 15 ];
    char firstName[ 15 ];
    unsigned int customerNumber;
    struct{
        char phoneNumber[ 11 ];
        char address[ 50 ];
        char city[ 15 ];
        char state[ 3 ];
        char zipCode[ 6 ];
    }personal;
}customerRecord, *customerPtr;

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main( void )
{

    customerPtr = &customerRecord;

    customerRecord.lastName; //a)
    customerPtr->lastName;//b)
    customerRecord.firstName;//c)
    customerPtr->firstName;//d)
    customerRecord.customerNumber;//e)
    customerPtr->customerNumber;//f)
    customerRecord.personal.phoneNumber;//g
    customerPtr->personal.phoneNumber;//h
    customerRecord.personal.address;//i
    customerPtr->personal.address;//j
    customerRecord.personal.city;//k
    customerPtr->personal.city;//l
    customerRecord.personal.state;//m
    customerPtr->personal.state;//n
    customerRecord.personal.zipCode;//o
    customerPtr->personal.zipCode;//p

return 0;
}
