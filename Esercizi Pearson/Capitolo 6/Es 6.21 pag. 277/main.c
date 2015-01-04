/*                 Sviluppato da Luciano Faretra 03/01/2015 rilasciato sotto licenza GNUv3
                                Sistema di prenotazione per compagnie aeree

****************************************************************************************************************

    MI SPIACE, ANALISI FATTA A MANO

*/

#include <stdlib.h>
#include <stdio.h>
#define POSTIPRIMACLASSE 5
#define POSTISECONDACLASSE 5
#define TOTALEPOSTI POSTIPRIMACLASSE + POSTIPRIMACLASSE

int sceltaPrimaClasse( unsigned int mappaPosti[], unsigned int postiPrimaClasse );
int sceltaEconomy( unsigned int mappaPosti[], unsigned int postiSecondaClasse, unsigned int totalePostiAereo );

int main (void)
{
    unsigned int mappaPosti[TOTALEPOSTI] = { 0 };
    unsigned int sceltaUtente;
    unsigned int valoreSentinella = 0;
    int situazionePosti;

    do{
        puts("*******************************");
        puts("");
        printf( "Please type 1 for \"first class\"\nPlease type 2 for\"economy\"\n(0 per uscire): " );
        scanf("%u", &sceltaUtente);
        puts("");
        puts("*******************************");


        if( sceltaUtente == 1 ){
            situazionePosti = sceltaPrimaClasse( mappaPosti, POSTIPRIMACLASSE);
            if( situazionePosti == 0 ){
                printf("Posti in prima classe terminati, desideri accettare un posto in economy? (Y per accettare): ");
                sceltaUtente = getchar();
                sceltaUtente = getchar();//STA ROBA E' ILLEGALE
                if( sceltaUtente == 'Y' || sceltaUtente == 'y' ){
                    situazionePosti = sceltaEconomy( mappaPosti, POSTISECONDACLASSE, TOTALEPOSTI );
                    if( situazionePosti == 0 ){
                        puts("Aereo al completo, Next flight leaves in 3 hours");
                    }
                    else{
                        printf( "Prego accomodarsi al posto %u in classe Economy.\n", situazionePosti );
                    }
                }
                else{
                    puts("Next flight leaves in 3 hours");
                }
            }
            else{
                printf( "Prego accomodarsi al posto %u in Prima Classe.\n", situazionePosti );
            }
        }
        else if( sceltaUtente == 2 ){
            situazionePosti = sceltaEconomy( mappaPosti, POSTISECONDACLASSE, TOTALEPOSTI );
            if( situazionePosti == 0 ){
                printf("Posti in classe Economy terminati, desideri accettare un posto in Prima Classe? (Y per accettare): ");
                sceltaUtente = getchar();
                sceltaUtente = getchar();//STA ROBA E' ILLEGALE
                if( sceltaUtente == 'Y' || sceltaUtente == 'y' ){
                    situazionePosti = sceltaPrimaClasse( mappaPosti, POSTIPRIMACLASSE);
                    if( situazionePosti == 0 ){
                        puts("Aereo al completo, Next flight leaves in 3 hours");
                    }
                    else{
                        printf( "Prego accomodarsi al posto %u in Prima Classe.\n", situazionePosti );
                    }
                }
                else{
                    puts("Next flight leaves in 3 hours");
                }
            }
            else{
                printf( "Prego accomodarsi al posto %u in classe Economy.\n", situazionePosti );
            }
        }
        else if( sceltaUtente != valoreSentinella ){
            printf("Attenzione e' stato inserito un valore errato!\n");
        }

    }while( sceltaUtente != valoreSentinella );

    puts("\nGrazie per aver scelto i nostri volti!\n");

return 0;
}

int sceltaPrimaClasse( unsigned int mappaPosti[], unsigned int postiPrimaClasse)
{
    size_t indiceMappaPosti;

    indiceMappaPosti = 0; //Posti Prima classe assegnati dal posto numro 1
    do{
        if( mappaPosti[indiceMappaPosti] == 0 ){
            mappaPosti[indiceMappaPosti] = 1;//Segna il posto come occupato
            return (indiceMappaPosti + 1); //Manda in return il primo posto libero della prima classe
        }
        else{
            indiceMappaPosti++; //Aumenta contatore per controllo successivo
        }

    }while( indiceMappaPosti < postiPrimaClasse );

return 0;//Se sono stati controllati tutti i posti e non ci sono posti liberi return aereo pieno
}

int sceltaEconomy( unsigned int mappaPosti[], unsigned int postiSecondaClasse, unsigned int totalePostiAereo )
{
    size_t indiceMappaPosti;

    indiceMappaPosti = ( totalePostiAereo - postiSecondaClasse );//Posti Prima classe assegnati dal posto numro 6
    do{
        if( mappaPosti[indiceMappaPosti] == 0 ){
            mappaPosti[indiceMappaPosti] = 1;//Segna il posto come occupato
            return (indiceMappaPosti + 1); //Manda in return il primo posto libero della prima classe
        }
        else{
            indiceMappaPosti++; //Aumenta contatore per controllo successivo
        }

    }while( indiceMappaPosti < totalePostiAereo );

return 0;//Se sono stati controllati tutti i posti e non ci sono posti liberi return aereo pieno
}
