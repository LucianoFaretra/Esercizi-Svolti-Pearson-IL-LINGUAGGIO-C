/*                 Sviluppato da Luciano Faretra 30/12/2014 rilasciato sotto licenza GNUv3
                                    	Numeri romani

     Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    NUMEROCOLONNE                   Numero di colonne che compongono il rombo                       unsigned int > 0
    NUMERORIGHE                     Numero di righe che compongono il rombo                         unsigned int > 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    *                               Asterischi che compongolo il rombo                              char *

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreRighe                  Contatoche che regolamenta l'inserimento delle righe            unsigned int > 0
    contatoreColonne                Contatoche che regolamenta l'inserimento delle colonne          unsigned int > 0


    1. Il programma stampa una tabella con il raffronto tra numeri decimali e romani

    1.1 Se il contatore dei

*/

#include <stdlib.h>
#include <stdio.h>
#define MAXNUMERI 100

int main(void)
{/*inizio funzione main*/

    unsigned int contatoreNumeri = 0;
    unsigned int contatoreX;
    unsigned int i;
    unsigned int restoX;
    char C = 'C';
    char L = 'L';
    char X = 'X';
    char I = 'I';
    char V = 'V';


    printf("%15s \t%14s", "Numeri Decimali", "Numeri Romani\n" );
    do{
        if(contatoreNumeri == 100){
           printf("%-15d \t%-14c\n", contatoreNumeri, C);
        }
        else if((contatoreX = contatoreNumeri / 10) >= 1){
            printf("%-15d  \t", contatoreNumeri);

            if(contatoreX < 5){
                if(((restoX = (contatoreNumeri % 10)) == 0)){
                    i = 1;
                    do{
                        printf("%c", X);
                        i++;
                    }while(i <= contatoreX);
                }

                else{
                    if(restoX < 4){
                        i = 1;
                        do{
                            printf("%c", X);
                            i++;
                        }while(i <= contatoreX);
                        i = 1;
                        do{
                            printf("%c", I);
                            i++;
                        }while(i <= restoX);
                    }
                }
            }
            else{
                contatoreX -= 5;
                printf("%c", 'L');
                if(((restoX = ((contatoreNumeri -50) % 10)) == 0)){
                    i = 1;
                    while(i <= contatoreX){
                        printf("%c", X);
                        i++;
                    }
                }

                else{
                    if(restoX < 4){
                        i = 1;
                        while(i <= contatoreX){
                            printf("%c", X);
                            i++;
                        }
                        i = 1;
                        while(i <= restoX){
                            printf("%c", I);
                            i++;
                        }
                    }
                    else{

                    }
                }

            }


            printf("\n");


        }

    contatoreNumeri++;
    }while( contatoreNumeri <= (unsigned int)MAXNUMERI );

return 0;
}/*Fine funzione main*/
