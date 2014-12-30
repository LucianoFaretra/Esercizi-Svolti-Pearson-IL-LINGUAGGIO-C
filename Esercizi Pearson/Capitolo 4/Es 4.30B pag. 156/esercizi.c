/*                 Sviluppato da Luciano Faretra 29/12/2014 rilasciato sotto licenza GNUv3
                                    	Sostituire switch con if else

     Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1.

*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{/*inizio funzione main*/

    int grades;
    unsigned int aCount = 0;
    unsigned int bCount = 0;
    unsigned int cCount = 0;
    unsigned int dCount = 0;
    unsigned int fCount = 0;

    puts( "Enter the letter grades." );
    puts( "Enter the EOF character to end input." );

    while( (grades = getchar( ) ) != EOF ){

        if ( grades == 'A' || grades == 'a' ){
                aCount++;
        }
        if ( grades == 'B' || grades == 'b' ){
                bCount++;
        }
        if ( grades == 'C' || grades == 'c' ){
                cCount++;
        }
        if ( grades == 'D' || grades == 'd' ){
                dCount++;
        }
        if ( grades == 'F' || grades == 'f' ){
                fCount++;
        }
        if ( grades == '\n' || grades == '\t' || grades == ' ' ){
        }
        if ( !(( grades == 'A' || grades == 'a' ) || ( grades == 'B' || grades == 'b' ) || ( grades == 'C' || grades == 'c' ) || ( grades == 'D' || grades == 'd' ) || ( grades == 'F' || grades == 'f' ) || ( grades == '\n' || grades == '\t' || grades == ' ' )) ){
            printf( "%s", "Incorrect letter grade entered." );
            puts( "Enter a new grade." );
        }
    }

    puts( "\nTotals for each letter grade are:" );
    printf( "A: %u\n", aCount );
    printf( "B: %u\n", bCount );
    printf( "C: %u\n", cCount );
    printf( "D: %u\n", dCount );
    printf( "F: %u\n", fCount );

return 0;
}/*Fine funzione main*/
