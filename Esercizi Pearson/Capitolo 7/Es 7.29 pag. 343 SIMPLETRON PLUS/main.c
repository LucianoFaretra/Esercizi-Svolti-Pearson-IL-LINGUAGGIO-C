/*                 Sviluppato da Luciano Faretra 23/01/2015 rilasciato sotto licenza GNUv3
                                    Esercizio 7.28 SIMPLETRON

    LISTA DEI COMANDI

    input/output:
    READ    10 //Legge una parola dal terminale e inseriscila in una specifica locazione di memoria 10XX
    WRIE    11 //Scrive sul terminale una parola memorizzata in una specifica locazione di memoria 11XX

    caricamento/memorizzazione:
    LOAD 20 //Carica una parola da una specifica locazione in memoria nell'accoumulatore
    STORE 21 //Memorizza una parola in una specifica locazione in memoria dall'accoumulatore

    operazioni aritmetiche
    ADD 30 //Somma una parola da una specifica locazione in memoria nell'accumulatore (lascia il risultato nell'accumulatore)
    SUBTRACT 31 //Sottrae una parola da una specifica locazione in memoria nell'accumulatore (lascia il risultato nell'accumulatore)
    DIVIDE 32 //Divide una parola da una specifica locazione in memoria nell'accumulatore (lascia il risultato nell'accumulatore)
    RESTO 52 //Mostra il resto della divisione dell'accumulatore per un numero da una specifica locazione in memoria nell'accumulatore (lascia il risultato nell'accumulatore)
    MULTIPLY 33 //Moltiplica una parola da una specifica locazione in memoria nell'accumulatore (lascia il risultato nell'accumulatore)
    ELEVA 53 //Eleva a potenza il risultato presente nell'accumulatore (lascia il risultato nell'accumulatore)


    operazioni di traferimento del controllo
    BRACH 40 //Salta a una specifica locazione di memoria
    BRACHNEG 41 //Se l'accumulatore è negativo salta a una specifica locazione di memoria
    BRANCHZERO 42 // Se l'accumulatore è zero alta a una specifica locazione di memoria
    HALT 43 // Halt, il programma ha completato il suo compito e termina

    manipolazioni caratteri
    NEWLINE 60  Stampa una newline
    STRINGW 61 Scrivi una stringa
    STRINGR 62 Leggi una stringa

    -99999 Termina l'inserimento


    Esempio di codice che somma numeri positivi inseriti da tastiera fin quando non vine inserito uno negativo

    +1011
    +2011
    +4110
    +1012
    +2012
    +4110
    +3011
    +2111
    +1111
    +4003
    +4300
    +0000
    +0000
    -99999

    */

#include <stdio.h>
#include <stdlib.h>

#include "load.h"
#include "execute.h"
#include "debug.h"
#include "globale.h"

#define ERRFILE "bootMsg.txt" //Messaggio specifico file mancante

int main( void )
{
FILE *bootMsgPtr;

double memory[SIZERAM] = {0};
char *genericError = "*** Simpletron execution abnormally terminated ***";
char *bufferPtr; //buffer lettura

double accumulator = {0};
int instructionCounter = {00};
int instructionRegister = {0000};
int operationCode = {00};
int operand = {00};
int debugMode;

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

        /*DEBUGMODE*/
        printf("%s", "Run in Debug Mode(type Y)? ");

        if(( debugMode = scanf("%1[Yy]", bufferPtr) ) == 1 ){
            puts("Now you are in debug mode YHEA!");
        }
        else{
            scanf("%c", bufferPtr);//Scarica la new line nell'immondizia
            puts("");
        }
        /*FINE DEBUGMODE*/

        free(bufferPtr);

        load(memory, operand); //Carica le istruzioni in memoria
        if( 0 == execute(memory, &accumulator, &instructionCounter, &instructionRegister, &operationCode, &operand, debugMode) ){
            debug( memory, &accumulator, &instructionCounter, &instructionRegister, &operationCode, &operand );
        }
    }
    return 0;
}
