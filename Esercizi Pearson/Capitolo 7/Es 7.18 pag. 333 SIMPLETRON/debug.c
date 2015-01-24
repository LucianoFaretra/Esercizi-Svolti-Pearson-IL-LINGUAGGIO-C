#include <stdio.h>
#include <stdlib.h>

void debug( int *memoryPtr, int *accumulatorPtr, int *instructionCounterPtr, int *instructionRegisterPtr, int *operationCodePtr, int *operandPtr )
{
    //Stampa la RAM
    unsigned int contatoreCicloRighe;
    unsigned int contatoreCicloColonne;

    puts("");
    puts("REGISTERS:");
    printf("%-25s %+05d\n", "accumulator", *accumulatorPtr);
    printf("%-25s    %02d\n", "instructionCounter", *instructionCounterPtr);
    printf("%-25s %+05d\n", "instructionRegister", *instructionRegisterPtr);
    printf("%-25s    %02d\n", "instructionCode", *operationCodePtr);
    printf("%-25s    %02d\n\n", "operand", *operandPtr);

    puts("MEMORY:");
    contatoreCicloRighe = 0;
    printf("%7s", "");
    while(contatoreCicloRighe <= 9){
        printf("%-6d", contatoreCicloRighe);
    contatoreCicloRighe++;
    }
    puts("");
    contatoreCicloRighe = 0;
    do{
        contatoreCicloColonne = 0;
        printf("%2d", contatoreCicloRighe);
        while(contatoreCicloColonne <= 9){
            printf(" %+05d", memoryPtr[ contatoreCicloRighe + contatoreCicloColonne ]);
        contatoreCicloColonne += 1;
        }
        puts("");
    contatoreCicloRighe += 10;
    }while(contatoreCicloRighe <= 90);
return;
}
