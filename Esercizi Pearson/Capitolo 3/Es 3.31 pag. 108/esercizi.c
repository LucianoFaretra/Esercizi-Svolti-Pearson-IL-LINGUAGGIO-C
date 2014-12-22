/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3
                                    Indentazione
*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    //Caso A
    int y = 8;
    int x = 5;


    if ( y == 8 ){
    if ( x == 5 ){
    puts("@@@@");}
    else
    puts("#####");
    puts("$$$$$");}
    puts("&&&&&");
    //Fine Caso A
puts("");
    //Caso B
    y = 8;
    x = 5;


    if ( y == 8 ){
    if ( x == 5 )
    puts("@@@@");}
    else{
    puts("#####");
    puts("$$$$$");
    puts("&&&&&");}
    //Fine Caso B
puts("");
    //Caso C
    y = 8;
    x = 5;


    if ( y == 8 ){
    if ( x == 5 ){
    puts("@@@@");}}
    else{
    puts("#####");
    puts("$$$$$");}
    puts("&&&&&");
    //Fine Caso C
puts("");
    //Caso D
    y = 7;
    x = 5;


    if ( y == 8 ){
    if ( x == 5 ){
    puts("@@@@");}}
    else
    puts("#####");
    puts("$$$$$");
    puts("&&&&&");
    //Fine Caso D

return 0;
}//Fine funzione main
