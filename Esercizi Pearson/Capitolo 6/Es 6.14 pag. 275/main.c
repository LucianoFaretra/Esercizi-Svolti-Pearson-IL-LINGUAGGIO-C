/*                 Sviluppato da Luciano Faretra 03/01/2015 rilasciato sotto licenza GNUv3
                                    Modifica esercizio 6.16

****************************************************************************************************************


*****************************************************************************************************************

    1. Inserisci un'array monodimensionale e la ordina in modo crescente

*/

#include <stdio.h>
#include <stdlib.h>
#include "bubbleSort.h"
#define SIZE 100

void mean( const unsigned int ansewer[] );
void median( unsigned int answer[] );
void mode( unsigned int freq[], unsigned const int answer[] );
void printArray( const unsigned int a[] );

int main( void )
{
    unsigned int frequency[ 10 ] = { 0 };

    unsigned int response[ SIZE ] = {   6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
                                        7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
                                        6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
                                        7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
                                        6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
                                        7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
                                        5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
                                        7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
                                        7, 4, 4, 2, 5, 3, 4, 7, 5, 6,
                                        4, 5, 6, 1, 6, 5, 7, 7, 7, 7 };

    mean( response );
    median( response );
    mode( frequency, response );

    return 0;
}

void mean( const unsigned int answer[] )
{
    size_t j;
    unsigned int total = 0;

    printf( "%s\n%s\n%s\n", "********", " Mean", "********" );

    for( j = 0; j < SIZE; ++j ){
        total += answer[ j ];
    }

    printf( "The mean is the averange value of the data\n"
            "items. The mean is equal to the total of\n"
            "all the data items divided by the number\n"
            "of data items ( %u ). The mean value for\n"
            "this run is: %u / %u = %.4f\n\n",
            SIZE, total, SIZE, (double)total / SIZE );
}

void median( unsigned int answer[] )
{
    printf( "\n%s\n%s\n%s\n%s",
            "********", " Median", "********",
            "The unsorted array of responses is" );

    printArray( answer );

    bubbleSort( answer, SIZE );

    printf( "%s", "\n\nThe sorted array is" );
    printArray( answer );

    if( SIZE / 2 != 0){
        printf( "\n\nThe median is element %u of\n"
                "the sorted %u element array.\n"
                "For this run the median is %u\n\n",
                SIZE / 2, SIZE, answer[ SIZE / 2] );
    }
    else{
        printf( "\n\nThe median is element %u of\n"
                "the sorted %u element array.\n"
                "For this run the median is %u\n\n",
                SIZE / 2, SIZE, (( answer[ SIZE / 2] + answer[ (SIZE / 2 ) + 1] ) / 2 )  );
    }
    return;
}

void mode( unsigned int freq[], const unsigned int answer[] )
{
    size_t rating;
    size_t j;
    unsigned int h;
    unsigned int largest = 0;
    unsigned int secondlargest = 0;
    unsigned int modeValue = 0;
    unsigned int modeValue2 = 0;


    printf( "\n%s\n%s\n%s\n", "********", " Mode", "*********" );

    for ( rating = 1; rating <= 9; ++rating ){
        freq[rating] = 0;
    }

    for ( j = 0; j < SIZE; ++j ){
        ++freq[answer[j]];
    }

    printf( "%s%11s%19s\n\n%54s\n%54s\n\n", "Response", "Frequency", "Histogram",
                                            "1    1   2     2", "5    0    5    0     5" );

    for( rating = 1; rating <= 9; ++rating){
        printf( "%8u%11u        ", rating, freq[ rating ] );

        if( freq[ rating ] >= largest ){
            secondlargest = largest;
            largest = freq[ rating ];
            modeValue2 = modeValue;
            modeValue = rating;
        }

        for( h = 1; h <= freq[ rating ]; ++h ){
            printf( "%s", "*" );
        }

        puts( "" );
    }

    if( largest == secondlargest ){
        printf( "\nThe mode is the most frequent value.\n"
            "For this run the mode is %u and %u wich occurred"
            " %u times each.\n", modeValue, modeValue2, largest );
    }
    else{
    printf( "\nThe mode is the most frequent value.\n"
            "For this run the mode is %u wich occurred"
            " %u times.\n", modeValue, largest );
    }
return;
}

void printArray( const unsigned int a[] )
{
    size_t j;

    for( j = 0; j < SIZE; ++j ){
        if( j % 20 == 0 ){
            puts( "" );
        }

    printf( "%2u", a[ j ] );
    }
return;
}
