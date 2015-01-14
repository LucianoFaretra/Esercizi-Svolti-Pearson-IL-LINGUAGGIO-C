/*                 Sviluppato da Luciano Faretra 14/01/2015 rilasciato sotto licenza GNUv3
                                    valutazione qualitativa dei voti dello studente
    Affinamento Top Down

    **Funzione - qualityPoints(mediaVoto)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    mediaVoto                       Media voto dello studente inserita dall'operatore               unsigned int >= 60 <= 100

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    votoFinale                      Voto finale compreso tra 0 e 3                                  unsigned int 0, 1, 2, 3

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. La funzione riceve la media dei vori dello studente ricevuta durante, l'anno e da come output il voto finale compreso tra 0 e 3

    1.1 Ricevi mediaVoto
            Se mediaVoto e' >= 90 e <= 100
                Allora
                    votoFinale = 4
            Altrimenti Se mediaVoto e' >= 80 e <= 89
                Allora
                    votoFinale = 3
            Altrimenti Se mediaVoto e' >= 70 e <=79
                Allora
                    votoFinale = 2
            Altrimenti Se mediaVoto e' >= 60 e <= 69
                Allora
                    votoFinale = 1
            Altrimenti Se mediaVoto e' >= 0 e <= 59
                Allora
                    votoFinale = 0
            Altrimenti
                Stampa: "E' stato inserito un valore non valido"

        Ritorna votoFinale

       ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    mediaVoto                       Media dei voti conseguiti dallo studente, inserito da operatore unsigned int >= 60, <= 100

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    votoFinale                      Voto finale conseguito dall'utente                              unsigned int 3, 2, 1, 0

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    valoreSentinella                Valore sentinella inserito per poter terminare l'output         unsigned int 666
    esitoScanf                      Esito della funzione scanf utilizzato per poter controllare     unsigned int
                                    l'avvenuto inserimento dell'input


    1.  Esegui
            Esegui
                Leggi il mediaVoto
                Se mediaVoto non e' un intero senza segno
                    Allora
                        esitoScanf = 0
            Finchè esitoScanf == 0

            votoFinale = qualityPoints(mediaVoto)
            Stampa:"Il voto finale dello studente e' pari a votoFinale

        Finchè non viene inserito il valore sentinella

*/

#include <stdlib.h>
#include <stdio.h>

unsigned int qualityPoints( unsigned int mediaVoto );

int main(void)
{//inizio funzione main
    unsigned int mediaVoto;
    unsigned int votoFinale;
    unsigned int esitoScanf;
    unsigned int valoreSentinella = 666;

    do{
        do{
            printf("%s", "Inserire la media dei voti dello studente( inserisci 666 per uscire ): ");
            if((esitoScanf = scanf("%u", &mediaVoto)) == 0){
                scanf("%*[^\n]");
                puts("Attenzione, e' stato inserito un valore non valido. Sono accettati solo interi da 0 a 100");
            }
        }while( esitoScanf == 0 );
        votoFinale = qualityPoints(mediaVoto);
        printf("Il voto finale dello studente e' pari a: %u\n", votoFinale);

    }while( mediaVoto != valoreSentinella );


return 0;
}//Fine funzione main

unsigned int qualityPoints(unsigned int mediaVoto)
{
    unsigned int votoFinale;

    if( mediaVoto >= 90 && mediaVoto <= 100 ){
        votoFinale = 4;
    }
    else if( mediaVoto >= 80 && mediaVoto <= 89 ){
        votoFinale = 3;
    }
    else if( mediaVoto >= 70 && mediaVoto <=79 ){
        votoFinale = 2;
     }
    else if( mediaVoto >= 60 && mediaVoto <= 69 ){
        votoFinale = 1;
    }
    else if( mediaVoto >= 0 && mediaVoto <= 59 ){
        votoFinale = 0;
    }
    else{
        puts:( "E' stato inserito un valore non valido" );
    }

return votoFinale;
}
