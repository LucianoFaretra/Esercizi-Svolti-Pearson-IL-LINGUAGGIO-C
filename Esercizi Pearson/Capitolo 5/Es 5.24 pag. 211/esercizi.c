/*                 Sviluppato da Luciano Faretra 01/01/2015 rilasciato sotto licenza GNUv3
                                    Conversione di temperatura
    Affinamento Top Down

    **Funzione - celsius(gradiFahrenheit)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    gradiFahrenheit                 Gradi Fahrenheit da convertire in celsius                       float

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    gradiCelsius                    gradi Fahrenheit convertiti in celsius                          float
                                    (gradiFahrenheit − 32) / 1,8

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Il programma riceve in input i gradi Fahrenheit e li converte in Celsius

    1.1 ritorna gradiCelsius = (gradiFahrenheit − 32) / 1,8


       ******************************************************************************************

       **Funzione - fahrenheit(gradiCelsius)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    gradiCelsius                    Gradi celsius da convertire in Fahrenheit                       float

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    gradiFahrenheit                 gradi celsius convertiti in Fahrenheit                          float
                                    (gradiFahrenheit − 32) / 1,8

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO


    1. Il programma riceve in input i gradi Celsius e li converte in Fahrenheit

    1.1 ritorna gradiFahrenheit = (gradiCelsius +1,8 ) − 32


       ******************************************************************************************
       **Funzione main

    INPUT                           DESCRIZIONE                                                     DOMINIO
    gradiCelsius                    Gradi celsius convertiti da Fahrenheit                          float
    gradiFahrenheit                 gradi Fahrenheit convertiti da celsius                          float

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    gradiCelsius                    Gradi celsius convertiti da Fahrenheit                          float
    gradiFahrenheit                 gradi Fahrenheit convertiti da celsius                          float

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    contatoreCelsius                Contatore che governa l'incremento di gradi                     unsigned int >= 1, <= 100
    contatoreFahrenheit             Contatore che governa Fahrenheit                                unsigned int >= 32, <= 212


    1. La seguente funzione stampa una tabella che mostra i diversi gradi sia in celsius che farenheit

    1.1 Stampa:"Conversione Celsius in Fahrenheit      Conversione Fahrenheit in Celsius"

        Esegui

            Esegui

                Stampa:"contatoreCelsius e' pari a fahrenheit(contatoreCelsius)"        "contatoreFahrenheit e' pari a celsius(contatoreFahrenheit)"
                incrementa contatoreCelsius di uno
                incrementa contatoreFahrenheit di uno

            Finchè contatoreCelsius <= 100
                        "contatoreFahrenheit e' pari a celsius(contatoreFahrenheit)"
            incrementa contatoreFahrenheit di uno


        Finchè contatoreFahrenheit <= 212





*/

#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    float celsius( unsigned int gradiFahrenheit);
    float fahrenheit( unsigned int gradiCelsius);

    unsigned int contatoreCelsius = 0;
    unsigned int contatoreFahrenheit = 32;

    printf( "%33s\t%31s", "Conversione Celsius in Fahrenheit", "Conversione Fahrenheit in Celsius");

    do{

        do{

            printf( "%u e' pari a: %.2f \t\t %u e' pari a: %.2f", contatoreCelsius,  fahrenheit(contatoreCelsius), contatoreFahrenheit, celsius(contatoreFahrenheit) );
            contatoreFahrenheit++;

        }while( contatoreCelsius++ <= 100 );
            printf( "%33s\t\t %u e' pari a: %.2f", " ", contatoreFahrenheit, celsius(contatoreFahrenheit ));

    }while( contatoreFahrenheit++ <= 212 );


return 0;
}//Fine funzione main

float celsius( unsigned int gradiFahrenheit)
{
    float gradiCelsius;

return gradiCelsius = (gradiFahrenheit − 32) \ 1,8;
}

float fahrenheit( unsigned int gradiCelsius)
{
    float gradiFahrenheit;

return gradiFahrenheit = (gradiCelsius +1,8 ) − 32;
}
