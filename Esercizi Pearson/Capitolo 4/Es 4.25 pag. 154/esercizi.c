/*                 Sviluppato da Luciano Faretra 28/12/2014 rilasciato sotto licenza GNUv3
                                    	Tabella di equivalenza
                                    	
                INPUT					DESCRIZIONE									DOMINIO
                NUMEROMINIMO			Numero piu piccolo da stampare				intero >= 0		
				NUMEROMASSIMO			Numero piu grande da stampare				intero >= 0
				
				OUTPUT					DESCRIZIONE									DOMINIO
				contatoreStampa			Stampa il contatore con i dicersi numero	intero > = 0
				
				
*/

#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define NUMEROMINIMO 1
#define NUMEROMASSIMO 256

int main(void)
{/*inizio funzione main*/

    unsigned int contatoreStampa;  
    
    
    printf("%6s\t%7s\t%6s\t%11s\n", "Intero", "Binario", "Ottale", "Esadecimale");
    for( contatoreStampa = (unsigned int)NUMEROMINIMO; contatoreStampa <= NUMEROMASSIMO; contatoreStampa++ ){
    
    	printf("%6d\t%6o\t%11X\n", contatoreStampa, contatoreStampa, contatoreStampa);
	}
	 
return 0;
}/*Fine funzione main*/
