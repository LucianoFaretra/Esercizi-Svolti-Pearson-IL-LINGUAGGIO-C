#include <stdio.h>
#include <stdlib.h>
#include "globale.h"
#include "string.h"

void load(double *memoryPtr, unsigned int operand )
{
FILE *comandiPtr;
int esitoScanf;
char *inputInserito = "*** Program loading completed ***";
char nomeFile[30];

    memset(nomeFile, 0, 30);
    printf("%s", "\nInserire il nome del file contenente le istruzioni.\nPremere INVIO per l'inserimento manuale\n? ");
    scanf("%19s", nomeFile);

    if((comandiPtr = fopen(nomeFile, "r")) == NULL){
        puts("Non e' stato possibile leggere il file, procedere all'inserimento manuale.");
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
    }
    else{
        while(!feof(comandiPtr)){
            fscanf(comandiPtr, "%lf", &memoryPtr[operand]);
            if(memoryPtr[operand] == -99999){
                puts(inputInserito);
                operand = SIZERAM;
            }
            operand++;
        }
    }

    return;
}
