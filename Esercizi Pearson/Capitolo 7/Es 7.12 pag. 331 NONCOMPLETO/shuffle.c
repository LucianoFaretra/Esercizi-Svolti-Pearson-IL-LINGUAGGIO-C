#include "globale.h"

void shuffle( unsigned int wDeck[][ FACES ] )
{
    size_t row; //Numero riga
    size_t column; //Numerodella colonna
    size_t card; //Contatore

    //Per ogni carta scegli a caso un elemento dell'array del mazzo
    card = 1;
    do{
        do{
            row = rand() % SUITS;
            column = rand() % FACES;
        }while( wDeck[ row ][ column ] != 0 ); //Mette una carta solo su un posto libero
        wDeck[ row ][ column ] = card; //Inserisce la carta nell'apposito spazio
    card++;
    }while( card <= CARDS );
return;
}
