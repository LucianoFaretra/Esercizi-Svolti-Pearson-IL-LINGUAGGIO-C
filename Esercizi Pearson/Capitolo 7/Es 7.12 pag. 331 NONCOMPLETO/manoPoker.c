/*                 Sviluppato da Luciano Faretra 05/01/2015 rilasciato sotto licenza GNUv3
                                    Esercizio 7.24 Modificato
    Affinamento Top Down


    INPUT                           DESCRIZIONE                                                     DOMINIO


    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Distribuisce 5 carte e decreta il punteggio

    1.1 Sceglie 5 carte casuali da dentro il mazzo e le posiziona sul tavolo
            Se Le cinque carte hanno valori in sequenza, allora c'e una scala
            Altrimenti Se tutte le carte sono dello stesso seme c'e un colore
            Altrimenti Se Vi sono 4 carte uguali e' un poker
            Altrimenti Se Vi sono 3 carte dello stesso tipo e' un tris
            Altrimenti Se vi sono 2 carte di un tipo e due dell'altro vi e' una doppia coppia
            Altrimenti due carte hanno un numero uguale allora c'e una coppia

    1.2


*/


#include "globale.h"
#include "risultatiCarte.h"

void manoPoker( unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[] )
{
    /*Prototipo*/
    void stampaCarte( const char *wFace[], const char *wSuit[], unsigned int mano[][CARTEMANO] );
    /*Prototipo*/


    size_t card;
    size_t row;
    size_t column;
    unsigned int mano[2][CARTEMANO] = { {0}, {0} }; /*0 Numero Carta, 1 Seme Carta*/

    //Distribuisci ognuna delle carte
    card = 1;
    do{
       //Effettua un ciclo lungo le righe di wDeck
       row = 0;
       do{
            //Effettua un ciclo lungo le colonne di wDeck
            column = 0;
            do{
                //Se l'elemento contiene la carta corrente, stampala
                if( wDeck[ row ][ column ] == card ){
                   mano[0][card - 1] = column;/*Salva il numero della carta*/
                   mano[1][card - 1] = row; /*Salva il seme della carta*/
                }
            column++;
            }while(column < FACES);
        row++;
       }while( row < SUITS );
    card++;
    }while( card <= CARTEMANO );



    if( pokerScala( mano ) == 1 ){
        puts("Le carte compongono una scala!");
        stampaCarte( wFace, wSuit, mano );
    }
    else if(pokerColore( mano ) == 1){
        puts("Le carte compongono un colore!");
        stampaCarte( wFace, wSuit, mano );
    }
    else if(pokerPoker( mano ) == 1){
        puts("Le carte compongono un poker!");
        stampaCarte( wFace, wSuit, mano );
    }
    else if(pokerTris( mano ) == 1){
        puts("Le carte compongono un tris!");
        stampaCarte( wFace, wSuit, mano );
    }
    else{
        puts("Vafangul!");
        stampaCarte( wFace, wSuit, mano );
    }





}

void stampaCarte( const char *wFace[], const char *wSuit[], unsigned int mano[][CARTEMANO] )
{
    unsigned int card;

    card = 0;
    do{
        printf("%7s di %-6s\n", wFace[ mano[0][card] ], wSuit[ mano[1][card] ]); /*Stampa su colonna singola*/
    card++;
    }while(card < CARTEMANO);

return;
}





