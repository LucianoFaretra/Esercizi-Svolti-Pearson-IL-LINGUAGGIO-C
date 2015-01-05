#include "globale.h"

void deal( unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[] )
{
    size_t card;
    size_t row;
    size_t column;

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
                    /*printf("%7s di %-6s%c", wFace[ column ], wSuit[ row ], card % 2 == 0 ? '\n' : '\t' );*/
                    printf("%7s di %-6s\n", wFace[ column ], wSuit[ row ]); /*Stampa su colonna singola*/
                }
            column++;
            }while(column < FACES);
        row++;
       }while( row < SUITS );
    card++;
    }while( card <= CARDS );

return;
}
