#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main( void )
{
    char c = 'p';
    int x;
    int y;
    int z;
    double d;
    double f;
    char *ptr;
    char s1[100];
    char s2[100];
    int i = 0;
/*
    printf("Valore originario di c: %c\n", c);
    c = toupper(c);
    printf("Valore dopo conversione di c: %c\n", c);
    puts("");
    printf( "%c %s\n", c, (isdigit(c) ? "e' una cifra" : "non e' una cifra") );
    puts("");
    printf( "%c %s\n", c, ( iscntrl(c) ? "e' una cifra di controllo" : "non e' una cifra di controllo" ) );
    puts("");

    memset(s1, 0, 100);
    while( i < 100 - 1 && ( x = getchar() ) != '\n' ){
        s1[i++] = x ;
    }
    printf("%s", s1 );
    puts("");
    memset(s1, 0, 100);
    fgets(s1, 100, stdin);
    printf("%s", s1 );
    puts("");

    printf("%s", "prova puts\n");
    puts( s1 );

    ptr = strrchr( s1, c);
    puts( ptr );

    printf("Stampa c\n");
    putchar(c);

    printf( "\n%c " "%s", c, isalpha(c) ? "e' un carattere" : "non e' un carattere");

/*
    do{
    printf("%s", "Prego inserire un carattere e premere invio: ");
    i = scanf("%c", &c);
    if( i == 0 ){
        scanf("%*[^\n]");
        puts("Non e' stato inserito un carattere!");
    }
    }while( i == 0 );
*/

  //  ptr = strrchr( s1, s2);
  //  puts( ptr );
  puts("");
  printf("%c %s", c, isprint(c) ? "E' un carattere stampabile" : "Non e' un carattere stampabile" );
  puts("");

return 0;
}
