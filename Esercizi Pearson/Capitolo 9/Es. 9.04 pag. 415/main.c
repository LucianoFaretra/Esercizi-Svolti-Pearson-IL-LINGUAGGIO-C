/*                 Sviluppato da Luciano Faretra 07/01/2015 rilasciato sotto licenza GNUv3
                                        Esercizio 9.4

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.
*/

#include <stdio.h>
#include <stdlib.h>

int main( void )
{
    /*A)
    unsigned int numero = 40000;
    printf("%-15.8u", numero );
    */

    int hex;
    int risultatoScanf;
    do{
        printf("%s", "Inserire un esadecimale: ");
        risultatoScanf = scanf("%x", &hex);
        if(risultatoScanf == 0){
            scanf("%*[^\n]");
            puts("Valore non valido");
        }
    }while(risultatoScanf == 0);
    printf("%x", hex);

return 0;
}
