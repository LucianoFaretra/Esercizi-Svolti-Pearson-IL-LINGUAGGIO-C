/*
Il seguente programma calcolerà il prodotto, somma, differenza, quoziente, resto di 3 interi
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//Inizio Funzione Main
    int primoNumero;
    int secondoNumero;
    int terzoNumero;

    printf("%s", "Prego inserire tre differenti interi: ");
    scanf("%d %d %d", &primoNumero, &secondoNumero, &terzoNumero);
    printf("\nLa somma e' %d\n", primoNumero + secondoNumero + terzoNumero);
    printf("La media e' %d\n", ((primoNumero + secondoNumero + terzoNumero) / 3));
    printf("Il prodotto e' %d\n", primoNumero * secondoNumero * terzoNumero);

    if(primoNumero > secondoNumero)
        {
            if(primoNumero > terzoNumero)
                {
                    if(terzoNumero > secondoNumero)
                        {
                            printf("Il piu' grande e': %d\n", primoNumero);
                            printf("Il piu' piccolo e': %d\n", secondoNumero);
                        }
                     if(terzoNumero < secondoNumero)
                        {
                            printf("Il piu' grande e': %d\n", primoNumero);
                            printf("Il piu' piccolo e': %d\n", terzoNumero);
                        }
                }
              if(primoNumero < terzoNumero)
                {
                    printf("Il piu' grande e': %d\n", terzoNumero);
                    printf("Il piu' piccolo e': %d\n", secondoNumero);
                }
        }

    if(secondoNumero > primoNumero)
        {
            if(secondoNumero > terzoNumero)
                {
                    if(terzoNumero > primoNumero)
                        {
                            printf("Il piu' grande e': %d\n", secondoNumero);
                            printf("Il piu' piccolo e': %d\n", primoNumero);
                        }
                     if(terzoNumero < primoNumero)
                        {
                            printf("Il piu' grande e': %d\n", secondoNumero);
                            printf("Il piu' piccolo e': %d\n", terzoNumero);
                        }
                }
              if(secondoNumero < terzoNumero)
                {
                    printf("Il piu' grande e': %d\n", terzoNumero);
                    printf("Il piu' piccolo e': %d\n", primoNumero);
                }
        }

return 0;//La Funzione main restituisce 0 in caso di esito positivo
}//Fine Funzione Main


