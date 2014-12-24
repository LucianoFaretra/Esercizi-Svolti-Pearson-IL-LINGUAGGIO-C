/*                 Sviluppato da Luciano Faretra 24/12/2014 rilasciato sotto licenza GNUv3
                                        Fattoriale di un numero

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    numeroInserito              Numero inserito dall'untente su cui calcolare fattoriale unsigned int >= 0

    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    numeroFattoriale            fattoriale di numeroInserito                             unsigned int >= 1

    DATI DI LAVORO              DESCRIZIONE                                              DOMINIO
    contatoreFattori            Contatore utilizzato per calcolare il fattoriale         unsigned int >= 1
    contatoreMoltiplicazioni    Conta quante moltiplicazioni sono state fatte            unsigned int >= 0


    1   Il fattoriale di un numero e calcolato moltiplicando il numero stesso per n-contatore fattori, esempio,
        n! = n * (n - 1) * (n - 2) ...

     1  contatoreMoltiplicazioni = 1
        Stampa messaggio: "Inserisci il numero su cui calcolare il Fattoriale (intero positivo): "
        Leggi numeroInserito

        Se numeroInserito >= 0
            Allora
                Se numeroInserito == 0
                    Allora
                        numeroFattoriale = 1
                    Altrimenti
                        contatoreFattori = numeroInserito

                        Esegui
                            numeroFattoriale *= ( numeroInserito - contatoreMoltiplicazioni )
                            aumenta contatoreMoltiplicazioni di uno
                        Mentre contatoreMoltiplicazioni != contatoreFattori - 1

                        Stampa:"Il numero fattoriale di 'numeroInserito' e' 'numeroFattoriale'
                Fine Se
            Altrimenti
                Stampa: "'numeroInserito' non e' un numero valido"
        Fine Se

   */
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    long long int numeroInserito;
    long long int numeroFattoriale = 1;
    long long int contatoreMoltiplicazioni = 1;
    long long int contatoreFattori = 0;

    printf("Inserisci il numero su cui calcolare il Fattoriale (intero positivo): ");
    scanf("%lld", &numeroInserito);

    if( numeroInserito >= 0 ){
        if( numeroInserito <= 20 ){
            if( numeroInserito <= 1 ){
                printf("Il numero fattoriale di %lld e' %lld", numeroInserito, numeroFattoriale);
            }
            else{
                contatoreFattori = numeroInserito;
                numeroFattoriale = numeroInserito;
                do{
                    numeroFattoriale *= ( numeroInserito - contatoreMoltiplicazioni );
                    contatoreMoltiplicazioni++;
                }while( contatoreMoltiplicazioni != contatoreFattori );

                printf("Il numero fattoriale di %lld e' %lld", numeroInserito, numeroFattoriale);
            }
        }
        else{
            printf("%lld non e' un numero valido (accettati > 0 e < 20)", numeroInserito);
        }
    }
    else{
        printf("%lld non e' un numero valido (accettati > 0 e < 20)", numeroInserito);
    }

return 0;
}//Fine funzione main
