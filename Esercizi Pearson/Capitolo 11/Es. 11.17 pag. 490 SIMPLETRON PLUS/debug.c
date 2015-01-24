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

void debugDump( double *memoryPtr, double *accumulatorPtr, int *instructionCounterPtr, int *instructionRegisterPtr, int *operationCodePtr, int *operandPtr, int debugMode )
{
FILE *dumpPtr;
    //Stampa la RAM
unsigned int contatoreCicloRighe;
unsigned int contatoreCicloColonne;

    if( debugMode == 1){//Cancella il file ed aprilo in modalità append per salvare tutte le schermate
        dumpPtr = fopen("dump.txt", "w");
        fclose(dumpPtr);
        dumpPtr = fopen("debugDump.txt", "a");
    }
    else{//Salva solo ultima schermata
        dumpPtr = fopen("dump.txt", "w");
    }
    if(dumpPtr == NULL){
        puts("Critical Error, dump failed");
    }
    else{
        fprintf(dumpPtr, "\n%s\n", "REGISTERS:");
        fprintf(dumpPtr, "%-25s %05f\n", "accumulator", *accumulatorPtr);
        fprintf(dumpPtr, "%-25s %02d\n", "instructionCounter", *instructionCounterPtr);
        fprintf(dumpPtr, "%-25s %04d\n", "instructionRegister", *instructionRegisterPtr);
        fprintf(dumpPtr, "%-25s %02d\n", "instructionCode", *operationCodePtr);
        fprintf(dumpPtr, "%-25s %02d\n\n", "operand", *operandPtr);

        fprintf(dumpPtr, "%s\n", "MEMORY:");
        contatoreCicloRighe = 0;
        fprintf(dumpPtr, "%8s", "");
        while(contatoreCicloRighe <= 9){
            fprintf(dumpPtr, "%-6d", contatoreCicloRighe);
        contatoreCicloRighe++;
        }
        fprintf(dumpPtr, "%s\n", "");
        contatoreCicloRighe = 0;
        do{
            contatoreCicloColonne = 0;
            fprintf(dumpPtr, "%3d", contatoreCicloRighe);
            while(contatoreCicloColonne <= 9){
                if(memoryPtr[ contatoreCicloRighe + contatoreCicloColonne ] == -99999){
                    fprintf(dumpPtr, "%5s", " $FINE");
                }
                else{
                    fprintf(dumpPtr, " %+05.0lf", memoryPtr[ contatoreCicloRighe + contatoreCicloColonne ]);

                }
            contatoreCicloColonne += 1;
            }
            fprintf(dumpPtr, "%s\n", "");
        contatoreCicloRighe += 10;
        }while(contatoreCicloRighe <= (SIZERAM - 10));
    }
    fclose(dumpPtr);
return;
}
