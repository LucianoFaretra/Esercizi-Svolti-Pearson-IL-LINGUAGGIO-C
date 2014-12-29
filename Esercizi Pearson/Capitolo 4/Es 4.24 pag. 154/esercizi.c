/*                 Sviluppato da Luciano Faretra 28/12/2014 rilasciato sotto licenza GNUv3
                                    	Cosa stampa?

*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(void)
{/*inizio funzione main*/

    unsigned int i = 1;
    unsigned int j = 2;
    unsigned int k = 3;
    unsigned int m = 2;

    printf("%d", i == 1 );
    printf("%d", j == 3 );
	printf("%d", i >= 1 && j < 4 );
	printf("%d", m <= 99 && k < m );
	printf("%d", j >= i || k == m );
	printf("%d", k + m < j || 3 - j >= k );
	printf("%d", !m );
	printf("%d", !( j - m ) );
	printf("%d", !( k > m ) );
	printf("%d", !( j > k ) );
	 
return 0;
}/*Fine funzione main*/
