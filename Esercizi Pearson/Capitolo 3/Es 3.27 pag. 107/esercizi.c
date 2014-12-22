/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                        Modifica esercizio 3.10
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned int passes = 0;
    unsigned int failures = 0;
    unsigned int student = 1;
    int result;

    while (student <= 10){

        printf("%s", "Enter result ( 1=pass,2=fail ): ");
        scanf("%d", &result);

        if( result == 1){
            passes = passes + 1;
            student = student + 1;
        }
        else if( result == 2){
            failures = failures + 1;
            student = student + 1;
        }
    }

    printf( "Passed %u\n", passes );
    printf( "Failed %u\n", failures );

    if( passes > 8 ){
        puts( "Bonus to istructor!" );
    }

return 0;
}//Fine funzione main
