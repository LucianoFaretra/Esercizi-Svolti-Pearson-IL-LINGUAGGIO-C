#include "globale.h"


int pokerScala( unsigned int mano[][CARTEMANO] )
{
    unsigned int card;

    card = 0;
    do{
        if( mano[0][card] < mano[0][card + 1] ){
           if( ((mano[0][card]) + 1) == mano[0][card + 1]){
              card++;
            }
        }
        else{
            return 0; //Le carte non sono a scala
        }
    }while((card + 1) < CARTEMANO); /* +1 perche per ogni ciclo vengono controllate 2 carte*/

return 1; //Le carte sono una scala
}

int pokerColore( unsigned int mano[][CARTEMANO] )
{
    unsigned int card;

    card = 0;
    do{
        if( mano[1][card] == mano[1][card + 1] ){
           card++;
        }
        else{
            return 0; //Le carte non sono a scala
        }

    }while((card + 1) < CARTEMANO); /* +1 perche per ogni ciclo vengono controllate 2 carte*/

return 1; //Le carte sono una scala
}

int pokerPoker( unsigned int mano[][CARTEMANO] )
{
    unsigned int card;

    card = 0;
    do{
        if( mano[0][card] == mano[0][card + 1] ){
           card++;
        }
    }while((card + 1) < CARTEMANO); /* +1 perche per ogni ciclo vengono controllate 2 carte*/

    if(card == 3){
       return 1;
    }
return 0; //Le carte sono una scala
}

int pokerTris( unsigned int mano[][CARTEMANO] )
{
    unsigned int card;

    card = 0;
    do{
        if( mano[0][card] == mano[0][card + 1] ){
           card++;
        }
    }while((card + 1) < CARTEMANO); /* +1 perche per ogni ciclo vengono controllate 2 carte*/

    if(card == 2){
       return 1;
    }
return 0; //Le carte sono una scala
}

int pokerDoppiaCoppia( unsigned int mano[][CARTEMANO] )
{
    unsigned int card;

    card = 0;
    do{
        if( mano[0][card] == mano[0][card + 1] ){
           card++;
        }
    }while((card + 1) < CARTEMANO); /* +1 perche per ogni ciclo vengono controllate 2 carte*/

    if(card == 3){
       return 1;
    }
return 0; //Le carte sono una scala
