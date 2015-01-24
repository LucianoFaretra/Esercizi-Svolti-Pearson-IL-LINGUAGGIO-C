#include <stdio.h>
#include <stdlib.h>
#include "debug.h"
#include <math.h>
#include <ctype.h>
#include <string.h>

int execute( double *memoryPtr, double *accumulatorPtr, int *instructionCounterPtr, int *instructionRegisterPtr, int *operationCodePtr, int *operandPtr, int debugMode )
{
unsigned int esitoScanf;
unsigned int buffer;
unsigned int buffer2;
char *violation = "*** Simpletron execution abnormally terminated ***";
char *stringa;
size_t i; //Indice array

    puts("*** Program execution begins ***");

    while(*instructionRegisterPtr != -99999){

        *instructionRegisterPtr = memoryPtr[ *instructionCounterPtr ]; //il PC punta alla prossima istruzione e la trasferisce nell'istruction register
        *operationCodePtr = *instructionRegisterPtr / 100; //Ricava il codice operazione
        *operandPtr = *instructionRegisterPtr % 100; //Ricava l'operando

        if(*operationCodePtr == 10){ //Istruzione READ
            do{
                printf("? ");
                if(( esitoScanf = scanf("%lf", &memoryPtr[ *operandPtr ]) ) == 0 ){
                    scanf("%*[^\n]");
                    puts("Attenzione, sono consentiti solo numeri interi.");
                }
            }while(esitoScanf == 0);
        }
        else if(*operationCodePtr == 11){ //Istruzione WRITE
                printf("Risultato dell'elaborazione: %+5lf\n", memoryPtr[ *operandPtr ]);
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
        else if(*operationCodePtr == 52){ //Istruzione RESTO
                if ( memoryPtr[ *operandPtr ] == 0 || *accumulatorPtr == 0 ){
                    puts(violation);
                    puts("*** Attempt to divide by zero ***");
                    return 0;
                }
                else{
                    buffer = ( *accumulatorPtr * 1000 );
                    buffer2 = ( memoryPtr[ *operandPtr ] * 1000 );
                    *accumulatorPtr = (( buffer % buffer2 ) / 1000 );
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
        else if(*operationCodePtr == 53){ //Istruzione ELEVA
                *accumulatorPtr *= *accumulatorPtr;
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
        else if(*operationCodePtr == 60){ //Istruzione NEWLINE
                printf("%s", "\n");
        }
        else if(*operationCodePtr == 61){ //Istruzione STRINGW
                stringa = calloc(80, sizeof(char)); //Inizializza la stringa
                puts("Sono consentite solo lettere maiuscole e numeri.");
                scanf("%79s", stringa);
                buffer = (( strlen(stringa))); //Buffer contiene la lunghezza della stringa, include il New Line
                memoryPtr[ *operandPtr ] = buffer * 100; //Assegna il numerdo di caratteri alle prime due cifre della cella di memoria

                i = 0;
                while( i <= buffer ){ //SOLO LE LETTERE MAIUSCONE SONO FORMATE DA 2 CIFRE
                    stringa[i] = toupper(stringa[i]);
                i++;
                }

                i = 0;
                while(i <= buffer){
                    if(i % 2 == 0){//Se indice pari, la lettera va nella parte destra della cella di memoria
                        memoryPtr[ *operandPtr ] = ( stringa[i] + memoryPtr[ *operandPtr ]);
                        *operandPtr += 1;
                    }
                    else{//Se indice dispari, la lettera va nella parte sinistra della cella di memoria
                        memoryPtr[ *operandPtr ] = ( stringa[i] * 100 );
                    }
                i++;
                }
        free(stringa);//Libera la memoria dedicata alla stringa
        }
        else if(*operationCodePtr == 62){ //Istruzione STRINGR
                stringa = calloc(80, sizeof(int)); //Inizializza la stringa
                buffer = floor(( memoryPtr[ *operandPtr ] / 100 )); //Ricava il numero di caratteri che compongolo la stringa
                i = 0;
                while(i < buffer){
                    if(i % 2 == 0){//Se indice pari, la lettera va nella parte destra della cella di memoria
                        printf("%c", stringa[i] = ( (int)memoryPtr[ *operandPtr ] % 100 ));
                        *operandPtr += 1;
                    }
                    else{//Se indice dispari, la lettera va nella parte sinistra della cella di memoria
                        printf("%c", stringa[i] = floor(( memoryPtr[ *operandPtr ] / 100 )));
                    }
                i++;
                }
                puts("");
        free(stringa);//Libera la memoria dedicata alla stringa
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
