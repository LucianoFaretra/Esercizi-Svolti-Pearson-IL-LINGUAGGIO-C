/*                 Sviluppato da Luciano Faretra 30/12/2014 rilasciato sotto licenza GNUv3
                                    	stampe ciclo

     Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{/*inizio funzione main*/

    unsigned int i;
    unsigned int j;
    unsigned int k;

    for(i = 1; i <= 5; ++i){
        for( j = 1; j <= 3; ++j){
            for(k = 1; k <= 4; k++){
                printf("%s", "*");
            }
            puts("");
        }
        puts("");
    }

return 0;
}/*Fine funzione main*/
