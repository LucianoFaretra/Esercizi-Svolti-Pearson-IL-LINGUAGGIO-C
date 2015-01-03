/*                 Sviluppato da Luciano Faretra 03/01/2015 rilasciato sotto licenza GNUv3
                                        6.12

****************************************************************************************************************

*****************************************************************************************************************

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counts[10] = { 0 };
    int bonus[15] = { 0 };
    size_t contatoreArray;
    float monthlyTemperatures[12];


    contatoreArray = 0;
    do{
        bonus[contatoreArray] += 1;
        contatoreArray++;
    }while( contatoreArray < 15 );

    contatoreArray = 0;
    do{
        printf("Inserire l'emelemnto %d dell'array: ", contatoreArray + 1);
        scanf( "%f", &monthlyTemperatures[contatoreArray] );
    contatoreArray++;
    }while( contatoreArray < 12 );


    return 0;
}
