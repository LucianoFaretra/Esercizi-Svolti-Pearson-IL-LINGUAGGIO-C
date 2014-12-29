/*                 Sviluppato da Luciano Faretra 29/12/2014 rilasciato sotto licenza GNUv3
                                    	Calcolo della paga settimanale

     Affinamento Top Down

    INPUT                           DESCRIZIONE                                                     DOMINIO
    codicePaga                      Codice paga dei dipendenti, 1 manager, 2 lavoratori a ore,      intero 1 ~ 4
                                    3 lavoratori a commissione, 4 lavoratori a cottimo
    FISSOSALARIOMANAGER             Salario fisso maanger                                           double >= 0
    numeroOreLavorate               Numero di ore lavorate dal lavoratore ad ore                    unsigned intero >= 0
    OreStraordinario                LIMITEORE - numeroOreLavorate                                   unsigned intero > 0
    LIMITEORE                       Limite di ore lavorative settimanali con paga standard          unsigned intero 40
    PAGASTRAORDINARIO               Moltiplicatore per calcolo straordinario                        float 1.5
    IMPORTOORARIOLAVORATORE         Importo salariale ad ore lavoratore ad ore                      double >= 0
    FISSOLAVORATORECOMMISSIONI      Stipendio fisso lavoratori a commissione                        double >= 0
    venditeLorde                    Lordo delle vendite per l'impiegato a commissioni               double >= 0
    COMMISSIONIVENDITE              Percentuale di commissioni sulle vendire                        double = 5.7
    quantitaProdotta                Quanità di oggetti prodotti dall'operaio                        unsigned int >= 0
    FISSOPERPRODOTTOCOTTIMO         Importo fisso per pezzo prodotto lavoratori a cottimo           double >= 0



    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    stipendioSettimanale            Stipendio totale settimanale                                    double >= 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    valoreSentinella                Valore sentinella usato per uscire dal ciclo di inserimento     EOF


    1. Il programma legge il tipo di impiegato, e chiede i relativi dati di conseguenza

    1.1 Esegui
            Stampa: "Inserisci il codice contratto del lavoratore ( h per aiuto -1 per terminare ): "
            Leggi codicePaga
                switch ( codicePaga )
                    caso: 1 /Paga Manager/

                        Stampa:"La paga per l'impiegato in posizione manageriale e' pari a: $'FISSOSALARIOMANAGER'"
                        break

                    caso: 2 /Paga lavoratori a ore/

                        Stampa:"Si sta calcolando la paga di un Lavoratore con contratto a ore."
                        Stampa:"Prego inserire le ore lavorate in questa settimana: "
                        Leggi numeroOreLavorate
                            Se( numeroOreLavorate > LIMITEORE )
                                Allora
                                  OreStraordinario = numeroOreLavorate - LIMITEORE
                            FineSe
                        stipendioSettimanale = ( ( numeroOreLavorate * IMPORTOORARIOLAVORATORE ) + ( OreStraordinario * ( IMPORTOORARIOLAVORATORE * PAGASTRAORDINARIO ) ) )
                        Stampa:"La paga per l'impiegato con contratto ad ore e' pari a: $'stipendioSettimanale'"
                        break

                    caso: 3 /Paga lavoratori a commissione/

                        Stampa:"Si sta calcolando la paga di un Lavoratore con contratto a commissione."
                        Stampa:"Inserire l'importo lordo delle vendite dell'impiegato: $"
                        Leggi venditeLorde
                        stipendioSettimanale = ( FISSOLAVORATORECOMMISSIONI + ( venditeLorde * ( (double)COMMISSIONIVENDITE / 100 ) ) )
                        Stampa:"La paga per l'impiegato con contratto a provigioni con vendite lorde pari a $'venditeLorde' e' pari a: $'stipendioSettimanale'"
                        break

                    caso: 4 /Paga lavoratori a cottimo/

                        Stampa:"Si sta calcolando la paga di un Lavoratore con contratto a cottimo."
                        Stampa:"Inserire la quantita' di articoli prodotti dall'impiegato: "
                        leggi quantitaProdotta
                        stipendioSettimanale = ( quantitaProdotta * FISSOPERPRODOTTOCOTTIMO )
                        Stampa:"La paga per l'impiegato con contratto a cottimo ilq uale ha prodotto 'quantitaProdotta' articoli e' pari a: $'stipendioSettimanale'"
                        break

                    caso: "h"
                        Stampa: "Manager codice Cod. 1"
                        Stampa: "lavoratori a ore codice Cod. 2"
                        Stampa: "lavoratori a commissione Cod. 3"
                        Stampa: "lavoratori a cottimo Cod. 4"
                        break
                    caso: "-1"
                        valoreSentinella = EOF
                        break

                    caso: " "
                    caso: "\n"
                    caso: "\t"
                    default:
                        Stampa: "Valore non valido, ripetere l'inserimento"
                        break

        Finchè non viene inserito il valore sentinella


*/

#include <stdlib.h>
#include <stdio.h>
#define FISSOSALARIOMANAGER 3500
#define LIMITEORE 40
#define PAGASTRAORDINARIO 1.5
#define IMPORTOORARIOLAVORATORE 10
#define FISSOLAVORATORECOMMISSIONI 200
#define COMMISSIONIVENDITE 5.7
#define FISSOPERPRODOTTOCOTTIMO 2.5

int main(void)
{/*inizio funzione main*/

    unsigned int numeroOreLavorate;
    unsigned int OreStraordinario;
    double venditeLorde;
    unsigned int quantitaProdotta;
    double stipendioSettimanale;
    int codicePaga;
    int valoreSentinella = 0;

    do{
        printf("%s", "Inserisci il codice contratto del lavoratore ( 0 per aiuto -1 per terminare ): ");
        scanf( "%d", &codicePaga );

        switch ( codicePaga ){
            case 1 : /*Paga Manager*/

                printf( "La paga per l'impiegato in posizione manageriale e' pari a: $%.2lf\n", (double)FISSOSALARIOMANAGER );
                break;

            case 2 : /*Paga lavoratori a ore*/

                printf( "%s", "Si sta calcolando la paga di un Lavoratore con contratto a ore.\nPrego inserire le ore lavorate in questa settimana: " );
                scanf( "%u", &numeroOreLavorate );

                    if( numeroOreLavorate > (int)LIMITEORE ){
                        OreStraordinario = numeroOreLavorate - (int)LIMITEORE;
                        printf("\n%d\n", OreStraordinario);
                        stipendioSettimanale = ( ( (double)LIMITEORE * (double)IMPORTOORARIOLAVORATORE ) + ( (double)OreStraordinario * ( (double)IMPORTOORARIOLAVORATORE * (double)PAGASTRAORDINARIO ) ) );
                    }
                    else{
                        stipendioSettimanale = ( ( numeroOreLavorate * (double)IMPORTOORARIOLAVORATORE ) );
                    }

                printf( "La paga per l'impiegato con contratto ad ore e' pari a: $%.2lf\n", stipendioSettimanale);
                break;

            case 3 : /*Paga lavoratori a commissione*/

                printf( "%s", "Si sta calcolando la paga di un Lavoratore con contratto a commissione.\nInserire l'importo lordo delle vendite dell'impiegato: $");
                scanf( "%lf", &venditeLorde );
                stipendioSettimanale = ( FISSOLAVORATORECOMMISSIONI + ( venditeLorde * ( (double)COMMISSIONIVENDITE / 100 ) ) );
                printf( "La paga per l'impiegato con contratto a provigioni con vendite lorde pari a $%.2lf e' pari a: $%.2lf\n", venditeLorde, stipendioSettimanale );
                break;

            case 4 : /*Paga lavoratori a cottimo*/

                printf( "%s", "Si sta calcolando la paga di un Lavoratore con contratto a cottimo.\nInserire la quantita' di articoli prodotti dall'impiegato: " );
                scanf( "%u", &quantitaProdotta );
                stipendioSettimanale = ( quantitaProdotta * (double)FISSOPERPRODOTTOCOTTIMO );
                printf( "La paga per l'impiegato con contratto a cottimo il quale ha prodotto %u articoli e' pari a: $%.2lf\n", quantitaProdotta, stipendioSettimanale);
                break;

            case 0 : /*Istruzione aiuto*/
                puts("");
                puts( "Manager  \t\t\tCod. 1" );
                puts( "lavoratori a ore \t\tCod. 2" );
                puts( "lavoratori a commissione \tCod. 3" );
                puts( "lavoratori a cottimo \t\tCod. 4" );
                puts("");
                break;
            case -1 : /*Valore Sentinella*/
                valoreSentinella = 1;
                break;

            case ' ' :
            case '\n' :
            case '\t' :
            default:
                puts( "\nValore non valido, ripetere l'inserimento" );
                break;
        }

    }while( valoreSentinella != 1 );

return 0;
}/*Fine funzione main*/
