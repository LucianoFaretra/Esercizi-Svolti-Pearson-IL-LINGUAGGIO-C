#include <stdio.h>
#include <stdlib.h>
#include "debug.h"

int execute( int *memoryPtr, int *accumulatorPtr, int *instructionCounterPtr, int *instructionRegisterPtr, int *operationCodePtr, int *operandPtr, int debugMode )
{
    unsigned int esitoScanf;
    char *violation = "*** Simpletron execution abnormally terminated ***";

    puts("*** Program execution begins ***");

    while(*instructionRegisterPtr != -99999){

        *instructionRegisterPtr = memoryPtr[ *instructionCounterPtr ]; //il PC punta alla prossima istruzione e la trasferisce nell'istruction register
        *operationCodePtr = *instructionRegisterPtr / 100; //Ricava il codice operazione
        *operandPtr = *instructionRegisterPtr % 100; //Ricava l'operando

        if(*operationCodePtr == 10){ //Istruzione READ
            do{
                printf("? ");
                if(( esitoScanf = scanf("%d", &memoryPtr[ *operandPtr ]) ) == 0 ){
                    scanf("%*[^\n]");
                    puts("Attenzione, sono consentiti solo numeri interi.");
                }
            }while(esitoScanf == 0);
        }
        else if(*operationCodePtr == 11){ //Istruzione WRITE
                printf("Risultato dell'elaborazione: %+5d\n", memoryPtr[ *operandPtr ]);
        }
        else if(*operationCodePtr == 20){ //Istruzione LOAD
                *accumulatorPtr = memoryPtr[ *operandPtr ];
        }
        else if(*operationCodePtr == 21){ //Istruzione STORE
                memoryPtr[ *operandPtr ] = *accumulatorPtr;
        }
        else if(*operationCodePtr == 30){ //Istruzione ADD
                *accumulatorPtr += memoryPtr[ *operandPtr ];
                if(*accumulatorPtr > 9999 || *accumulatorPtr < -9999){
                    puts(violation);
                    puts("*** Aritmetic overflow ***");
                    return 0;
                }
        }
        else if(*operationCodePtr == 31){ //Istruzione SUBTRACT
                *accumulatorPtr -= memoryPtr[ *operandPtr ];
                if(*accumulatorPtr < -9999){
                    puts(violation);
                    puts("*** Aritmetic overflow ***");
                    return 0;
                }
        }
        else if(*operationCodePtr == 32){ //Istruzione DIVIDE
                if ( memoryPtr[ *operandPtr ] == 0 || *accumulatorPtr == 0 ){
                    puts(violation);
                    puts("*** Attempt to divide by zero ***");
                    return 0;
                }
                else{
                    *accumulatorPtr /= memoryPtr[ *operandPtr ];
                }
        }
        else if(*operationCodePtr == 33){ //Istruzione MULTIPLY
                *accumulatorPtr *= memoryPtr[ *operandPtr ];
                if(*accumulatorPtr > 9999 || *accumulatorPtr < -9999){
                    puts(violation);
                    puts("*** Aritmetic overflow ***");
                    return 0;
                }
        }
        else if(*operationCodePtr == 40){ //Istruzione BRANCH
                *instructionCounterPtr = *operandPtr - 1;
        }
        else if(*operationCodePtr == 41){ //Istruzione BRANCHNEG
                if( *accumulatorPtr < 0 ){
                    *instructionCounterPtr = *operandPtr - 1;
                }
        }
        else if(*operationCodePtr == 42){ //Istruzione BRANCHZERO
                if( *accumulatorPtr == 0 ){
                    *instructionCounterPtr = *operandPtr -1 ;
                }
        }
        else if(*operationCodePtr == 43){ //Istruzione HALT
            puts("*** Simpletron execution terminated ***");
            return 1;
        }
        else if(*operationCodePtr <= 0){
            puts("*** Loop detected ***");
            puts(violation);
            return 0;
        }
        else{ //Istruzione NON VALIDA
            puts("*** Atempt to use unrecognized operation code ***");
            puts(violation);
            return 0;
        }

        /*DEBUG MODE*/
        if( debugMode == 1 ){
            debug( memoryPtr, accumulatorPtr, instructionCounterPtr, instructionRegisterPtr, operationCodePtr, operandPtr );
        }
        /*DEBUG MODE*/
    ++(*instructionCounterPtr);
    }

return 1;
}
