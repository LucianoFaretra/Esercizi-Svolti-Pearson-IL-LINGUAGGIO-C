/*                 Sviluppato da Luciano Faretra 07/01/2015 rilasciato sotto licenza GNUv3
                                Esercizio 10.2
    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.


    1.1

*/
    struct part{
        unsigned int partNumber;
        char partName[25];
    };

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main( void )
{
    unsigned int esitoScanf;

    typedef struct part Part;

    Part a;
    Part b[10];
    Part *ptr;
    memset(b, 0, 10);

    printf("Prego inserire il numero della parte desiderata: ");
    do{
        esitoScanf = scanf("%u", &a.partNumber);
        if(esitoScanf == 0){
            scanf("*[^\n]");
            puts("Attenzione e' stato inserito un input non valido");
        }
    }while(esitoScanf == 0);
    printf("Prego inserire il nome della parte desiderata: ");
    scanf("%s", a.partName);
    b[3] = a;
    ptr = &b[0];
    printf("Parte: %s, N. %d", ( ptr + 3 )->partName, ( ptr + 3 )->partNumber);

return 0;
}
