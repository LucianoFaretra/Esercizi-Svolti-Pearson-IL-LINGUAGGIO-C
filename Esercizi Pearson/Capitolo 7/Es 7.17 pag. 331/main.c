/*                 Sviluppato da Luciano Faretra 05/01/2015 rilasciato sotto licenza GNUv3
                                    La tartaruga e la lepre

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define LUNGHEZZACAMPO 70

int main()
{
    void StampaPosizioneTartaruga( unsigned int posizioneT, unsigned int lunghezzaCampo );
    void StampaPosizioneLepre( unsigned int posizioneH, unsigned int lunghezzaCampo );
    void gara( unsigned int *posizioneLeprePtr, unsigned int *posizioneTartarugaPtr );

    unsigned int posizioneLepre = 0;
    unsigned int posizioneTartaruga = 0;

    srand(time(NULL));

    printf("%s\n%s\n", "BANG !!!!", "AND THEY'RE OFF !!!!");
    while( posizioneLepre < (unsigned int)LUNGHEZZACAMPO && posizioneTartaruga < (unsigned int)LUNGHEZZACAMPO ){
        gara( &posizioneLepre, &posizioneTartaruga );
        if( posizioneTartaruga == posizioneLepre ){
            puts("");
            puts("");
            puts("****************************************************");
            printf( "%s", "OUCH!!! Mi ha morso! Si ricomincia!\n" );
            puts("****************************************************");
            puts("");
            puts("");
            puts("Premi Invio per continuare");
            getchar();
            posizioneLepre = 1;
            posizioneTartaruga = 1; //Riavvia La gara!
        }
        else{
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("          H = Lepre                           T = Tartaruga                    ");
            puts("");
            puts("          |10       |20       |30       |40       |50       |60       |Arrivo!!");
            puts("----------------------------------------------------------------------");
            StampaPosizioneTartaruga( posizioneTartaruga, (unsigned int)LUNGHEZZACAMPO );
            puts("----------------------------------------------------------------------");
            StampaPosizioneLepre( posizioneLepre, (unsigned int)LUNGHEZZACAMPO );
            puts("----------------------------------------------------------------------");
            puts("");
            puts("");
            puts("");
            puts("Premi invio per continuare");
            getchar();
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
        }
    }

    if( posizioneLepre >= LUNGHEZZACAMPO && posizioneTartaruga >= LUNGHEZZACAMPO ){
        puts("E' un Pareggio. Si Riparte! Premi Invio.");
        getchar();
        getchar();
        gara( 0, 0 );//Riavvia La gara!
    }
    else if( posizioneLepre >= LUNGHEZZACAMPO && posizioneTartaruga < LUNGHEZZACAMPO ){
        puts("Abbiamo un vincitore! La lepre...");
        puts("Premi Invio per uscire");

    }
    else if( posizioneTartaruga >= LUNGHEZZACAMPO && posizioneLepre < LUNGHEZZACAMPO ){
        puts("LA TARTARUGA VINCE!!! YAY!!!");
        puts("Premi Invio per uscire");
    }

return 0;
}

void gara( unsigned int *posizioneLeprePtr, unsigned int *posizioneTartarugaPtr )
{
    unsigned int muoviTartaruga( unsigned int posizioneAttuale );
    unsigned int muoviLepre( unsigned int posizioneAttuale );

    *posizioneLeprePtr = muoviLepre( *posizioneLeprePtr );
    *posizioneTartarugaPtr = muoviTartaruga( *posizioneTartarugaPtr );
return;
}

unsigned int muoviTartaruga( unsigned int posizioneAttuale )
{
    unsigned int movimento;

    movimento = 1 + rand() % 10;

    if( movimento <= 5 ){
        posizioneAttuale += 3;
        puts("La tartaruga Fa uno scatto!");
    }
    else if( movimento <= 7 ){
        puts("Ho no, la tartaruga e' scivolata!");
        if( posizioneAttuale <= 6 ){
            posizioneAttuale = 1;
        }
        else{
            posizioneAttuale -= 6;
        }
    }
    else{
        puts("La tartaruga si sta muovendo!");
        posizioneAttuale += 1;
    }

return posizioneAttuale;
}

unsigned int muoviLepre( unsigned int posizioneAttuale )
{
    unsigned int movimento;

    movimento = 1 + rand() % 10;

    if( movimento <= 2 ){
        puts("La lepre schiaccia un pisolino!");
    }
    else if( movimento <= 4 ){
        puts("La lepre spicca un grande balzo!");
        posizioneAttuale += 9;
    }
    else if( movimento <= 5 ){
        puts("La lepre fa uno scivolone!");
        if( posizioneAttuale <= 12 ){
            posizioneAttuale = 1;
        }
        else{
            posizioneAttuale -= 12;
        }
    }
    else if(movimento <= 8){
        puts("La lepre Cammina");
        posizioneAttuale += 1;
    }
    else{
        puts("La lepre inciampa");
        if( posizioneAttuale <= 2 ){
            posizioneAttuale = 1;
        }
        else{
            posizioneAttuale -= 2;
        }
    }

return posizioneAttuale;
}

void StampaPosizioneTartaruga( unsigned int posizioneT, unsigned int lunghezzaCampo )
{
    size_t i;

    if( posizioneT <= 70 ){
        i = 1;
        while( i < posizioneT ){
           printf(" ");
           i++;
        }
        printf("%s", "T");
        i += 1;
        while( i <= lunghezzaCampo ){
           printf(" ");
           i++;
        }
        puts("");
    }
return;
}

void StampaPosizioneLepre( unsigned int posizioneH, unsigned int lunghezzaCampo )
{
    size_t i;

    if( posizioneH <= 70 ){
        i = 1;
        while( i < posizioneH ){
           printf(" ");
           i++;
        }
        printf("%s", "H");
        i += 1;
        while( i <= lunghezzaCampo ){
           printf(" ");
           i++;
        }
        puts("");
    }
return;
}


