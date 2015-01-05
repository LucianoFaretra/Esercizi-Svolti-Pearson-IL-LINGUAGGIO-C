/*                 Sviluppato da Luciano Faretra 05/01/2015 rilasciato sotto licenza GNUv3
                                    La tartaruga e la lepre

    Affinamento Top Down Funzione CalcolaSpostamentoTartaruga(

    1 Viene simulata la corsa della lepre, vince chi arriva prima alla posizione 70

    2 I due animali hanno velocita diverse di camminate, a seconda della probabilita casuale possono camminare correre scivolare ecc...

    3   Stampa:"BANG !!!!"
        Stampa:"AND THEY'RE OFF !!!!"
        Esegui

            Entrambi Partono da 0
            Viene estratto un numero a sorte per la tartaruga, se i >= 1 e <= 5 cammina di 3 quadrati ecc...
                Se e' una scivolata
                    Allora
                        Se posizioneTartaruga <= 6
                            Allora
                                posizioneTartaruga = 1
                            Altrimenti
                                posizioneTartaruga -= 6
                    Altrimenti
                        posizioneTartaruga viene incrementato di conseguenza
            Viene estratto un numero a sorte per il coniglio
                Se e' una scivolata
                    Allora
                        Se posizioneLepre <= 12
                            Allora
                                posizioneLepre = 1
                            Altrimenti
                                posizioneLepre -= 12
                    Altrimenti
                        posizioneLepre viene incrementato di conseguenza

            Se posizioneTartaruga == posizioneLepre
                Allora
                    Stampa:"OUCH!!!"
                    posizioneTartaruga = 0;
                    posizioneLepre = 0;

            StampaPosizioni( posizioneTartaruga, posizioneLepre, LUNGHEZZACAMPO )

        Finchè posizioneLepre == LUNGHEZZACAMPO || posizioneTartaruga == LUNGHEZZACAMPO


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
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("****************************************************");
            printf( "%s", "OUCH!!!\n" );
            puts("****************************************************");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
            puts("");
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
    }
    else if( posizioneTartaruga >= LUNGHEZZACAMPO && posizioneLepre < LUNGHEZZACAMPO ){
        puts("LA TARTARUGA VINCE!!! YAY!!!");
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
    //char percorso[lunghezzaCampo + 1]; //Lo 0 non ci piace
    size_t i;

    if( posizioneT > 0 && posizioneT < 70 ){
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
    //char percorso[lunghezzaCampo + 1]; //Lo 0 non ci piace
    size_t i;

    if( posizioneH > 0 && posizioneH <= 70 ){
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


