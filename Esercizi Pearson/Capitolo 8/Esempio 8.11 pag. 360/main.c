#include <stdlib.h>
#include <stdio.h>
#define SIZE 80

int main( void )
{
    int c;
    char sentence[ SIZE ];
    int i = 0;

    puts( "Inserisci una riga di testo:" );

    while( i < SIZE - 1 && ( c = getchar() ) != '\n' ){
        sentence[i++] = c;
    }

    sentence[i] = '\0';

    puts( "\nLa Riga immessa e':" );
    puts( sentence );

return 0;
}
