#include <stdio.h>
#include <stdlib.h>
#define SIZE 20

int main()
{
    int arrayNumeriCasuali[SIZE] = {0};
    int temp;
    size_t indice;
    size_t indice2;
    int uguali;

    indice = 0;
    while(indice < SIZE ){
        printf("Prego insierire il %d numero di %d: ", (indice + 1), SIZE);
        scanf("%d", &arrayNumeriCasuali[indice] );
        temp = arrayNumeriCasuali[indice];
        uguali = 0;
        indice2 = 0;
        while(indice2 <= indice ){
            if(temp == arrayNumeriCasuali[indice2]){
                uguali += 1;
            }
        indice2++;
        }
        if(uguali == 1){
            printf("E' stato inserito un nuovo numero! %d\n", temp);
        }
    indice++;
    }

    return 0;
}


