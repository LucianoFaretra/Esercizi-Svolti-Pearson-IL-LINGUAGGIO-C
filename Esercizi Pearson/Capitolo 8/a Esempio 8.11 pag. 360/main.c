#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define SIZE 50

int main( void )
{
    int c;
    char sentence[ SIZE ];
    int i = 0;

    puts( "Inserisci una riga di testo:" );

    while( i < SIZE - 1 && ( c = getchar() ) != '\n' ){
        sentence[i++] = c;
    }

    sentence[i] = '\0';

    puts( "\nLa Riga immessa e':" );
    puts( sentence );


    int valoreTemp;
    int intero;
    char frase[SIZE];
    char *tempPtr;
    memset(frase, 0, SIZE);
    fgets(frase, SIZE, stdin);
    valoreTemp = strtol(frase, &tempPtr, 0);
    if(strlen(tempPtr) > 1){
        printf("Errore");
    }
    else{
        intero = valoreTemp;
        printf("%d", intero);
    }
/*
    int esitoScanf;
    int intero;
    do{
        printf("Inserire un intero: ");
        esitoScanf = scanf("%d", &intero);
        if(esitoScanf == 0){
            printf( "%s", "Attenzione non e' stato inserito un intero!\n");
            scanf("%*[^\n]");
        }
    }while(esitoScanf != 1);
    printf("%d", intero);

   // printf("%s\n", tempPtr);
*/
return 0;
}
