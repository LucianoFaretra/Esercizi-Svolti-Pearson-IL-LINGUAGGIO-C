/*
Il seguente programma stampa il maggiore ed il minore di 3 interi
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//Inizio Funzione Main
    int primoNumero;
    int secondoNumero;
    int terzoNumero;

    printf("%s", "Inserire tre numeri interi: ");
    scanf("%d %d %d", &primoNumero, &secondoNumero, &terzoNumero);

    if(primoNumero > secondoNumero)
        {
            if(primoNumero > terzoNumero)
                {
                    if(secondoNumero > terzoNumero)
                        {
                            printf("Il numero più piccolo è %d \n", terzoNumero);
                        }

                    if(terzoNumero > secondoNumero)
                        {
                            printf("Il numero più piccolo è %d \n", secondoNumero);
                        }
                    printf("Il numero più grande è %d \n", primoNumero);
                }

            if(terzoNumero > primoNumero)
                {
                    printf("Il numero più grande è %d \n", terzoNumero);
                    printf("Il numero più piccolo è %d \n", secondoNumero);
                }
        }


    if(secondoNumero > primoNumero)
        {
            if(secondoNumero > terzoNumero)
                {
                    if(primoNumero > terzoNumero)
                        {
                            printf("Il numero più piccolo è %d \n", terzoNumero);
                        }

                    if(terzoNumero > secondoNumero)
                        {
                            printf("Il numero più piccolo è %d \n", primoNumero);
                        }

                    printf("Il numero più grande è %d \n", secondoNumero);
                }

            if(terzoNumero > secondoNumero)
                {
                    printf("Il numero più grande è %d \n", terzoNumero);
                    printf("Il numero più piccolo è %d \n", primoNumero);
                }

        }


return 0;//La Funzione main restituisce 0 in caso di esito positivo
}//Fine Funzione Main


