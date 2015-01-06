#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main( void )
{
    char s[100];
    size_t indice = 0;
    int temp;
    memset(s, 0, 100);

    puts("Inserire una riga");
    while(indice < 100 - 1 && ( temp = getchar() ) != '\n' ){
        s[indice++] = temp;
    }
    indice = 0;
    puts("Con lettere Maiuscole: ");
    while(s[indice] != '\0'){
        printf("%c", toupper(s[indice]));
        indice++;
    }
    puts("");
    indice = 0;
    puts("Con le lettere minuscole: ");
    while(s[indice] != '\n'){
        printf("%c", tolower(s[indice]));
        indice++;
    }

return 0;
}
