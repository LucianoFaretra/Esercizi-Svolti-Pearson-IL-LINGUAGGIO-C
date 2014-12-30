/*                 Sviluppato da Luciano Faretra 30/12/2014 rilasciato sotto licenza GNUv3
                                    	stampe ciclo

     Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    giorniDicembre                  Giorni che compongono dicembre                                  unsigned int 1 ~ 24

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    giorniDicembre                  Giorni che compongono dicembre                                  unsigned int 1 ~ 24


    1. Il programma deve stampare la vilastrocca di natale

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{/*inizio funzione main*/

    unsigned int giorniDicembre = 1;

    do{
        printf("%s", "On the");

        switch (giorniDicembre){
            case 1:
                printf("%s", "first");
                break;
            case 2:
                printf("%s", "second");
                break;
            case 3:
                printf("%s", "third");
                break;
            case 4:
                printf("%s", "fourth");
                break;
            case 5:
                printf("%s", "fifth");
                break;
            case 6:
                printf("%s", "sixth");
                break;
            case 7:
                printf("%s", "seventh");
                break;
            case 8:
                printf("%s", "eighth");
                break;
            case 9:
                printf("%s", "ninth");
                break;
            case 10:
                printf("%s", "tenth");
                break;
            case 11:
                printf("%s","eleventh");
                break;
            case 12:
                printf("%s","twelfth");
                break;
        }

    printf("%s", "day of Christmas, my true love gave to me\n");

        switch (giorniDicembre){
            case 12:
                printf("%s", "Twelve drummers drumming\n");
            case 11:
                printf("%s", "Eleven pipers piping\n");
            case 10:
                printf("%s", "Ten lords a-leaping\n");
            case 9:
                printf("%s", "Nine ladies dancing\n");
            case 8:
                printf("%s", "Eight maids a-milking\n");
            case 7:
                printf("%s", "Seven swans a-swimming\n");
            case 6:
                printf("%s", "Six geese a-laying\n");
            case 5:
                printf("%s", "Five golden rings\n");
            case 4:
                printf("%s", "Four calling birds\n");
            case 3:
                printf("%s", "Three french hens\n");
            case 2:
                printf("%s","Two turtle doves\n");
            case 1:
                printf("%s","A partridge in a pear tree\n");
                puts("");
                break;
        }

        giorniDicembre++;
    }while(giorniDicembre <= 12);

return 0;
}/*Fine funzione main*/
