#include <stdio.h>
#include <stdlib.h>

#include "load.h"
#include "execute.h"
#include "debug.h"

#define ERRFILE "bootMsg.txt" //Messaggio specifico file mancante

int main( void )
{
FILE *bootMsgPtr;

    int memory[100] = {0};
    char *genericError = "*** Simpletron execution abnormally terminated ***";
    char *bufferPtr; //buffer lettura

    int accumulator = {0};
    int instructionCounter = {00};
    int instructionRegister = {0000};
    int operationCode = {00};
    int operand = {00};

    if((bootMsgPtr = fopen("bootMsg.txt", "r")) == NULL ){
        puts(genericError);
        printf("%s %s %s", "*** ", ERRFILE, "not found ***");
    }
    else{
        bufferPtr = calloc(80, sizeof(char));  //Alloca un buffer di 80 caratteri per la lettura della riga
        while(!feof(bootMsgPtr)){
            fgets(bufferPtr, 80, bootMsgPtr);
            printf("%s", bufferPtr);
        }
        puts("");
        puts("");
        free(bufferPtr);
    }
    load(memory, operand); //Carica le istruzioni in memoria
    if( 0 == execute(memory, &accumulator, &instructionCounter, &instructionRegister, &operationCode, &operand) ){
        debug( memory, &accumulator, &instructionCounter, &instructionRegister, &operationCode, &operand );
    }

    return 0;
}
