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

    unsigned int contatoreNumeri = 1;
    unsigned int contatoreX;
    unsigned int i;
    unsigned int restoX;


    printf("%15s \t%14s", "Numeri Decimali", "Numeri Romani\n" );
    do{
        if(contatoreNumeri == 100){
           printf("%-15d \t%-14c\n", contatoreNumeri, 'C');
        }
        else if(contatoreNumeri < 10){
        printf("%-15d  \t", contatoreNumeri);
                if(contatoreNumeri < 4){
                    i = 1;
                    while(i <= contatoreNumeri){
                        printf("%c", 'I');
                        i++;
                    }
                }
                else if(contatoreNumeri == 4){
                    i = 1;
                    printf("%c", 'I');
                    printf("%c", 'V');
                }
                else if(contatoreNumeri > 4 && contatoreNumeri <= 9){
                    printf("%c", 'V');
                    i = 1;
                    while(i <= ( contatoreNumeri - 5)){
                        printf("%c", 'I');
                        i++;
                    }
                }
                else if(contatoreNumeri == 9){
                            printf("%c", 'I');
                            printf("%c", 'X');
                }
        }
        else if((contatoreX = contatoreNumeri / 10) >= 1){
            printf("%-15d  \t", contatoreNumeri);

                if(contatoreX < 5){
                    if(((restoX = (contatoreNumeri % 10)) == 0)){
                        i = 1;
                        do{
                            printf("%c", 'X');
                            i++;
                        }while(i <= contatoreX);
                    }
                    else{
                        if(restoX < 4){
                            i = 1;
                            do{
                                printf("%c", 'X');
                                i++;
                            }while(i <= contatoreX);
                            i = 1;
                            do{
                                printf("%c", 'I');
                                i++;
                            }while(i <= restoX);
                        }
                        else if(restoX == 4){
                            i = 1;
                            while(i <= contatoreX){
                                printf("%c", 'X');
                                i++;
                            }
                            printf("%c", 'I');
                            printf("%c", 'V');
                        }
                        else if(restoX > 4 && restoX <= 9){
                            i = 1;
                            while(i <= contatoreX){
                                printf("%c", 'X');
                                i++;
                            }
                            printf("%c", 'V');
                            i = 1;
                            while(i <= ( restoX - 5)){
                                printf("%c", 'I');
                                i++;
                            }
                        }
                    }
                }
                else{
                    contatoreX -= 5;
                    printf("%c", 'L');
                    if(((restoX = ((contatoreNumeri -50) % 10)) == 0)){
                        i = 1;
                        while(i <= contatoreX){
                            printf("%c", 'X');
                            i++;
                        }
                    }

                    else{
                        if(restoX < 4){
                            i = 1;
                            while(i <= contatoreX){
                                printf("%c", 'X');
                                i++;
                            }
                            i = 1;
                            while(i <= restoX){
                                printf("%c", 'I');
                                i++;
                            }
                        }
                        else if(restoX == 4){
                            i = 1;
                            while(i <= contatoreX){
                                printf("%c", 'X');
                                i++;
                            }
                            printf("%c", 'I');
                            printf("%c", 'V');
                        }
                        else if(restoX > 4 && restoX <= 9){
                            i = 1;
                            while(i <= contatoreX){
                                printf("%c", 'X');
                                i++;
                            }
                            if(restoX == 4){
                            printf("%c", 'I');
                            }
                            printf("%c", 'V');
                            i = 1;
                            while(i <= ( restoX - 5)){
                                printf("%c", 'I');
                                i++;
                            }
                        }
                        else if(restoX == 9){
                            printf("%c", 'I');
                            printf("%c", 'X');
                        }
                }

        }

 }
    printf("\n");
    contatoreNumeri++;
    }while( contatoreNumeri <= (unsigned int)MAXNUMERI );

return 0;
}/*Fine funzione main*/
