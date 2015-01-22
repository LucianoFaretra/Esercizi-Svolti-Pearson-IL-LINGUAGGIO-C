#include <stdio.h>
#include <stdlib.h>

void load(int *memoryPtr, unsigned int operand )
{
    int esitoScanf;
    char *inputInserito = "*** Program loading completed ***";

    do{
        do{
            printf("%02d ? ", operand);
            if( (esitoScanf = scanf("%d", &memoryPtr[operand])) == 0 || ((memoryPtr[operand] < 1000) && memoryPtr[operand] != -99999 && memoryPtr[operand] != 0 ) || (memoryPtr[operand] > 9999 )){
                scanf("%*[^\n]");
                puts("Sono accettati solo interi positivi di 4 cifre.");
            }
            else if(memoryPtr[operand] == -99999){
                    puts(inputInserito);
                    operand = 100;
            }
            else{
                operand++;
            }
        }while( esitoScanf == 0 );

    }while(operand <= 99);

    return;
}
