#include <stdio.h>
#include <stdlib.h>
#include "globale.h"

void load(double *memoryPtr, unsigned int operand )
{
    int esitoScanf;
    char *inputInserito = "*** Program loading completed ***";

    do{
        do{
            printf("%02d ? ", operand);
            if( (esitoScanf = scanf("%lf", &memoryPtr[operand])) == 0 || ((memoryPtr[operand] < 1000) && memoryPtr[operand] != -99999 && memoryPtr[operand] != 0 ) || (memoryPtr[operand] > 9999 )){
                scanf("%*[^\n]");
                puts("Sono accettati solo interi positivi di 4 cifre.");
            }
            else if(memoryPtr[operand] == -99999){
                    puts(inputInserito);
                    operand = SIZERAM;
            }
            else{
                operand++;
            }
        }while( esitoScanf == 0 );

    }while(operand <= SIZERAM - 1);

    return;
}
