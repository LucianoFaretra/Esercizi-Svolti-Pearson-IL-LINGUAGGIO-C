/*                 Sviluppato da Luciano Faretra 04/01/2015 rilasciato sotto licenza GNUv3
                                    Totale delle vendite
    Affinamento Top Down

    **Funzione - registraDistinta( sales[][5], numeroAgente, numeroProdotto, quantitaVenduta, numeroDiAgentiInServizio, numeroArticoliInVendita)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroAgente                    Numero identificativo agente                                    unsigned int >= 1, <= 4
    numeroProdotto                  Numero identificativo prodotto                                  unsigned int >= 1, <= 5
    quantitaVenduta                 Importo del prodotto venduta                                    float >= 0
    sales[][]                       Array contenente le vendite effettuate dai diversi agenti       float >= 0
    numeroDiAgentiInServizio        Numero totale degli agenti                                      unsigned int >= 1
    numeroArticoliInVendita         Diversi tipi di articoli                                        unsigned int >= 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    sales[][]                       Aggiornato con i nuovi valori                                   unsigned int => 1

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    indiceAgenti                    Contatore utilizzato come indice degli Agenti                   >=0, <4
    indiceProdotto                  Contatore utilizzato come indice dei Prodotti                   >=0, <5


    1. Salva l'importo venduto di un dato agente nel record sales[quantitaVenduta][numeroAgente]

    1.1 Se ( numeroAgente - 1 ) < numeroDiAgentiInServizio )
            Allora
                Se ( numeroProdotto - 1 < numeroArticoliInVendita )
                    Allora
                        Se quantitaVenduta >= 0
                            Allora
                                sales[numeroProdotto][numeroAgente] = quantitaVenduta
                            Altrimenti
                                Stampa:"Attenzione, importo vendite errato!"
                    Altrimenti
                        Stampa:"Attenzione, numero prodotto errato!"
            Altrimenti
                Stampa:"Attenzione, numero agente errato!"

       ******************************************************************************************
       **Funzione calcolaTotali( sales[][5], numeroDiAgentiInServizio, numeroArticoliInVendita )

    INPUT                           DESCRIZIONE                                                     DOMINIO
    sales[][]                       Array contente i dati di vendita                                float => 0
    numeroDiAgentiInServizio        Numero di agenti in servizio                                    unsigned int => 1
    numeroArticoliInVendita         Numero di articoli in vendita                                   unsigned int => 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    sales[][]                       Sales aggiornato con i totali                                   unsigned int => 1

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    indiceAgenti                    Contatore utilizzato come indice degli Agenti                   >=0, <4
    indiceProdotto                  Contatore utilizzato come indice dei Prodotti                   >=0, <5


    1.1 indiceAgenti = 0
        Esegui
            indiceProdotto = 0
            Esegui
                sales[numeroArticoliInVendita][indiceAgenti] += sales[indiceProdotto][indiceAgenti] //Somma importo per agente
                sales[indiceProdotto][numeroDiAgentiInServizio] += sales[indiceProdotto][indiceAgenti] //Somma importo per Prodotto
            Finche indiceProdotto < numeroArticoliInVendita
        Finche indiceAgenti < numeroDiAgentiInServizio


    ******************************************************************************************
    **Funzione stampaTotali( sales[][5], numeroDiAgentiInServizio, numeroArticoliInVendita )

    INPUT                           DESCRIZIONE                                                     DOMINIO
    sales[][]                       Array contente i dati di vendita                                float => 0
    numeroDiAgentiInServizio        Numero di agenti in servizio                                    unsigned int => 1
    numeroArticoliInVendita         Numero di articoli in vendita                                   unsigned int => 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    stampa della tabella            Una tabella contenente il repilogo

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    indiceAgenti                    Contatore utilizzato come indice degli Agenti                   >=0, <4
    indiceProdotto                  Contatore utilizzato come indice dei Prodotti                   >=0, <5

    1  Stampa:"Prodotti/t/tAgent\n"
        Stampa:"/t/t1.\t2.\t3.\t4.\t\tTotli Prodotti
       indiceAgenti = 0
        Esegui
            indiceProdotto = 0
            stampa:"(indiceAgenti + 1).\n"
            Esegui
                sales[indiceProdotto][indiceAgenti]
            Finche indiceAgenti <= numeroDiAgentiInServizio
        Finche indiceProdotto <= numeroArticoliInVendita
    ***************************************************************************************************
    **Funzione Main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroAgente                    Numero identificativo agente                                    unsigned int >= 1, <= 4
    numeroProdotto                  Numero identificativo prodotto                                  unsigned int >= 1, <= 5
    quantitaVenduta                 Importo del prodotto venduta                                    float >= 0
    sales[][]                       Array contenente le vendite effettuate dai diversi agenti       float >= 0
    NUMEROAGENTI                    Numero totale degli agenti                                      unsigned int >= 1
    NUMEROARTICOLI                  Diversi tipi di articoli                                        unsigned int >= 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    numeroAgente                    Numero identificativo agente                                    unsigned int >= 1, <= 4
    numeroProdotto                  Numero identificativo prodotto                                  unsigned int >= 1, <= 5
    quantitaVenduta                 Importo del prodotto venduta                                    float >= 0
    sales[][]                       Array contenente le vendite effettuate dai diversi agenti       float >= 0
    NUMEROAGENTI                    Numero totale degli agenti                                      unsigned int >= 1
    NUMEROARTICOLI                  Diversi tipi di articoli                                        unsigned int >= 1

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    valoreSentinella                Valore sentinella per uscire dal ciclo d'inserimento            unsigned int 0

    1   Esegui
            Legge numeroAgente
            Se numeroAgente != valoreSentinella
                Allora
                    Se numeroAgente < NUMEROAGENTI
                        Allora
                            Leggi numeroProdotto
                                Se numeroProdotto != valoreSentinella
                                    Allora
                                        Se numeroProdotto < NUMEROARTICOLI
                                            Allora
                                                Leggi quantitaVenduta
                                                Se quantitaVenduta >= 0
                                                    Allora
                                                        registraDistinta( sales[][5], numeroAgente, numeroProdotto, quantitaVenduta, numeroDiAgentiInServizio, numeroArticoliInVendita)
                                                    Altrimenti
                                                        Stampa:"Importo della vendita errato, ripetere inserimento distinta"
                                                Fine Se
                                            Altrimenti
                                                Stampa:"Attenzione, e' stato inserito un valore non valido"
                                        Fine Se
                                Fine Se
                        Altrimenti
                            Stampa:"Attenzione, e' stato inserito un valore non valido"
                    Fine Se
            Fine Se
        Finche numeroAgente != valoreSentinella && numeroProdotto != valoreSentinella
*/

#include <stdio.h>
#include <stdlib.h>
#define NUMEROAGENTI 4
#define NUMEROARTICOLI 5

void registraDistinta( float sales[][(NUMEROAGENTI+1)], unsigned int numeroAgente, unsigned int numeroProdotto, float quantitaVenduta );
void calcolaTotali( float sales[][(NUMEROAGENTI+1)], unsigned int numeroDiAgentiInServizio, unsigned int numeroArticoliInVendita );
void stampaTotali( float sales[][(NUMEROAGENTI+1)], unsigned int numeroDiAgentiInServizio, unsigned int numeroArticoliInVendita );

int main()
{
    unsigned int numeroAgente;
    unsigned int numeroProdotto;
    float quantitaVenduta;
    float sales[NUMEROARTICOLI+1][NUMEROAGENTI+1] = {{0},{0}}; //Una riga e una colonna sono riservati ai totali
    unsigned int stampareRisultati = 0; //Se il valore assume 1 significa che nella rabella ci sono dei record da stampare prima dell'uscita dal programma
    unsigned int valoreSentinella = 0;


    do{
        printf("%s", "Prego inserire l'ID dell'agente intestatario della distinta(0 per uscire): ");
        scanf( "%u", &numeroAgente );
        if( numeroAgente != valoreSentinella ){
            if( numeroAgente <= NUMEROAGENTI ){
                printf("%s", "Prego inserire l'ID del prodotto relativo alla distinta(0 per uscire): ");
                scanf( "%u", &numeroProdotto );
                    if( numeroProdotto != valoreSentinella ){
                        if( numeroProdotto <= NUMEROARTICOLI ){
                            printf("%s", "Prego inserire l'importo delle vendite: $");
                            scanf( "%f", &quantitaVenduta );
                            if( quantitaVenduta >= 0 ){
                                registraDistinta( sales, (numeroAgente - 1), (numeroProdotto - 1), quantitaVenduta );//Prodotto 1 e agente 1 devono essere reg alla posizione 0
                                stampareRisultati = 1;
                            }
                            else{
                                puts( "Importo della vendita errato, ripetere inserimento distinta" );
                            }
                        }
                        else{
                            puts( "Attenzione, e' stato inserito un valore non valido" );
                        }
                    }
            }
            else{
                puts( "Attenzione, e' stato inserito un valore non valido" );
            }
        }
    }while( numeroAgente != valoreSentinella && numeroProdotto != valoreSentinella );

    if(stampareRisultati == 1){
        calcolaTotali( sales, (unsigned int)NUMEROAGENTI, (unsigned int)NUMEROARTICOLI );
        stampaTotali( sales, (unsigned int)NUMEROAGENTI, (unsigned int)NUMEROARTICOLI );
    }

    return 0;
}

void registraDistinta( float sales[][(NUMEROAGENTI+1)], unsigned int numeroAgente, unsigned int numeroProdotto, float quantitaVenduta)
{

    if( quantitaVenduta >= 0 ){
        sales[numeroProdotto][numeroAgente] += quantitaVenduta;
    }
    else{
        puts("Attenzione, importo vendite errato!");
    }

return;
}

void calcolaTotali( float sales[][(NUMEROAGENTI+1)], unsigned int numeroDiAgentiInServizio, unsigned int numeroArticoliInVendita )
{
    size_t indiceAgenti;
    size_t indiceProdotto;

    indiceAgenti = 0;
    do{
        indiceProdotto = 0;
        do{
            sales[numeroArticoliInVendita][indiceAgenti] += sales[indiceProdotto][indiceAgenti]; //Somma importo per agente
            sales[indiceProdotto][numeroDiAgentiInServizio] += sales[indiceProdotto][indiceAgenti]; //Somma importo per Prodotto
            indiceProdotto++;
        }while( indiceProdotto < numeroArticoliInVendita );
    indiceAgenti++;
    }while( indiceAgenti < numeroDiAgentiInServizio );

return;
}

void stampaTotali( float sales[][(NUMEROAGENTI+1)], unsigned int numeroDiAgentiInServizio, unsigned int numeroArticoliInVendita )
{
    unsigned int indiceAgenti;
    unsigned int indiceProdotto;

    puts("\n\n\n");
    puts("Prodotti\t\tAgenti");
    puts("\t\t1.\t2.\t3.\t4.\t\tTotli Prodotti");
    indiceProdotto = 0;
    do{
        if( indiceProdotto == 5 ){
            printf("%s", "\n");
            printf("%s", "Tot. Vendite");
        }
        else{
            printf("%u.", (indiceProdotto + 1));
            printf("%s", "\t");
        }
        indiceAgenti = 0;
        do{
            if( indiceAgenti == 4 ){
                printf("%s", "\t");
            }
            printf("\t%.2f", sales[indiceProdotto][indiceAgenti]);
        indiceAgenti++;
        }while( indiceAgenti < (numeroDiAgentiInServizio + 1) );
        puts("");
    indiceProdotto++;
    }while( indiceProdotto < (numeroArticoliInVendita + 1) );
return;
}
