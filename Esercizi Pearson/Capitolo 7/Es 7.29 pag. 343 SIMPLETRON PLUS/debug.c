#include <stdio.h>
#include <stdlib.h>
#include "globale.h"

void debug( double *memoryPtr, double *accumulatorPtr, int *instructionCounterPtr, int *instructionRegisterPtr, int *operationCodePtr, int *operandPtr )
{
    //Stampa la RAM
unsigned int contatoreCicloRighe;
unsigned int contatoreCicloColonne;

    puts("");
    puts("REGISTERS:");
    printf("%-25s %05f\n", "accumulator", *accumulatorPtr);
    printf("%-25s %02d\n", "instructionCounter", *instructionCounterPtr);
    printf("%-25s %04d\n", "instructionRegister", *instructionRegisterPtr);
    printf("%-25s %02d\n", "instructionCode", *operationCodePtr);
    printf("%-25s %02d\n\n", "operand", *operandPtr);

    puts("MEMORY:");
    contatoreCicloRighe = 0;
    printf("%8s", "");
    while(contatoreCicloRighe <= 9){
        printf("%-6d", contatoreCicloRighe);
    contatoreCicloRighe++;
    }
    puts("");
    contatoreCicloRighe = 0;
    do{
        contatoreCicloColonne = 0;
        printf("%3d", contatoreCicloRighe);
        while(contatoreCicloColonne <= 9){
            if(memoryPtr[ contatoreCicloRighe + contatoreCicloColonne ] == -99999){
                printf("%5s", " $FINE");
            }
            else{
                printf(" %+05.0lf", memoryPtr[ contatoreCicloRighe + contatoreCicloColonne ]);

            }
        contatoreCicloColonne += 1;
        }
        puts("");
    contatoreCicloRighe += 10;
    }while(contatoreCicloRighe <= (SIZERAM - 10));
return;
}
