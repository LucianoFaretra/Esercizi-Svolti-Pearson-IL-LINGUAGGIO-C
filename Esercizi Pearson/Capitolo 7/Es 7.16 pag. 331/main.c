#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SUITS 4
#define FACES 13
#define CARDS 52

int main()
{
    void deal( unsigned int wDeck[][FACES], const char *wFace[], const char *wSuit[] );
    void shuffle( unsigned int wDeck[][ FACES ] );
    size_t row;
    size_t column;
    unsigned int i = 1;

    /*Inizializza l'array dei semi*/
    const char *suit[ SUITS ] = { "Cuori", "Quadri", "Fiori", "Picche" };

    /*Inizializza l'array delle facce*/
    const char *face[ FACES ] = { "Asso", "Due", "Tre", "Quattro", "Cinque", "Sei",
                                    "Sette", "Otto", "Nove", "Dieci", "Jack", "Regina", "Re" };

    /*Inizializza l'array deck*/
    unsigned int deck[ SUITS ][ FACES ] = { { 0 }, { 0 } };

    //Assegna le carte ordinate
    row = 0;
    do{
        column = 0;
        do{
            deck[row][column] = i;
        i++;
        column++;
        }while(column < FACES);
    row++;
    }while( row < SUITS );

    /*Inizializza il seme per il generatore di numeri casuali*/
    srand(time(NULL));

    shuffle( deck ); /*Mescola il mazzo*/
    shuffle( deck ); /*Mescola una seconda volta*/

    deal( deck, face, suit );

return 0;
}

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
                    column = FACES;
                    row = SUITS;
                }
            column++;
            }while(column < FACES);
        row++;
       }while( row < SUITS );
    card++;
    }while( card <= CARDS );

return;
}

void shuffle( unsigned int wDeck[][ FACES ] )
{
    size_t row; //Numero riga
    size_t column; //Numerodella colonna
    size_t row2; //Numero riga
    size_t column2; //Numerodella colonna
    unsigned int temp;

    /*
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
    */
    row = 0;
    do{
        column = 0;
        do{
            row2 = rand() % SUITS;
            column2 = rand() % FACES;
            temp = wDeck[row][column];
            wDeck[row][column] = wDeck[row2][column2];
            wDeck[row2][column2] = temp;
        column++;
        }while(column < FACES);
    row++;
    }while( row < SUITS );


return;
}
