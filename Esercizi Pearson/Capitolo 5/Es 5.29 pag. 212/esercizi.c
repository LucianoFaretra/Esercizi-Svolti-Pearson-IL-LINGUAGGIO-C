/*                 Sviluppato da Luciano Faretra 12/01/2015 rilasciato sotto licenza GNUv3
                                    Massimo comun divisore
    Affinamento Top Down

    **Funzione - gcd(primoNumero, secondoNumero)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    primoNumero                     primo numero su cui calcolare il massimo comun divisore         intero
    secondoNumero                   secondo numero su cui calcolare il massimo comun divisore       intero

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    gcd                             Massimo comun divisore tra i due numeri                         intero

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    temp                            Risultato di a modulo b                                         int

    1. Il programma riceve due numeri e ne calcola il massimo comun divisore

    1.1 Il programma riceve due numeri, se il secondoNumero e' uguale a 0 allora gcd = primoNumero, assegna ad temp
        il risultato di a modulo di secondoNumero, se temp = 0, allora secondoNumero e il gcd. Altrimenti assegna a primoNumero il valore di secondoNumero e a secondoNumero il valore di temp

    1.2 Se secondoNumero == 0
            Allora
                return primoNumero
            Altrimenti
                temp = primoNumero%secondoNumero
                Se temp == 0
                    Allora
                        return secondoNumero
                    Altrimenti
                        primoNumero = secondoNumero
                        secondoNumero = temp
                        gcd(primoNumero, secondoNumero)


    **Funzione - main()
    INPUT                           DESCRIZIONE                                                     DOMINIO
    primoNumero                     primo numero su cui calcolare il massimo comun divisore         intero
    secondoNumero                   secondo numero su cui calcolare il massimo comun divisore       intero
    gcd                             Massimo comun divisore tra i due numeri derivante dalla funz    intero
                                    gcd

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    gcd                             Massimo comun divisore tra i due numeri                         intero

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    esitoScanf                      Valore di scanf inserito per convalidarne l'input               unsigned int
*/

#include <stdlib.h>
#include <stdio.h>

int gcd(int primoNumero, int secondoNumero);

int main(void)
{//inizio funzione main

    int primoNumero;
    int secondoNumero;
    int massimoComunDivisore;
    unsigned int esitoScanf;

    do{
        printf("Inserire i due numeri su cui calcolare il minimo comun divisore separati da uno spazio: ");
        if((esitoScanf = scanf("%d %d", &primoNumero, &secondoNumero)) == 0 ){
            scanf("%*[^\n]");
            puts("Valori inseriti non validi");
        }

    }while(esitoScanf == 0);

    massimoComunDivisore = gcd(primoNumero, secondoNumero);
    printf("Il massimo comun divisore di %d e %d e' pari a: %d", primoNumero, secondoNumero, massimoComunDivisore);

return 0;
}//Fine funzione main

int gcd(int primoNumero, int secondoNumero)
{
    int temp;
    while(secondoNumero != 0){
        temp = primoNumero % secondoNumero;
        primoNumero = secondoNumero;
        secondoNumero = temp;
    }

return primoNumero;
}

