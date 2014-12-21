/*                 Sviluppato da Luciano Faretra 21/12/2014 rilasciato sotto licenza GNUv3

Affinamento Top-Down:

    INPUT                       DESCRIZIONE                                         DOMINIO
    -numeroConto                Numero contro corrente cliente                      unsigned int > 0
    -saldoInizioMese            Saldo conto corrente ad inizio mese                 float >= 0
    -totaleAddebiti             Totale addebiti per acquisti effettuati             float >= 0
    -totaleAccediti             Totale accediti su conto per un mese                float >= 0
    -limiteCreditoConcesso      limite credito concesso al cliente                  float >= 0
    -valoreSentinella           Il presente valore interrompe le operazioni di ins. int < 0

    OUTPUT                      DESCRIZIONE                                         DOMINIO
    -saldoAttuale               Equivale al saldo iniziale + addebiti - crediti     float > 0


    1. Il programma in fase d'inserimento dati effettua un controllo slla situzione finanziaria del cliente
       in caso di superamento del limiteCreditoConcesso stampa un'avviso.

    1.1 Finchè non si inserisce il valore sentinella
            Leggi i dati
            Calcola nuovo Saldo

                Se il nuovo saldo eccede il limite
                    Stampa messaggio d'errore

    1.2 Azzera contatori
            Esegui
                Stampa: "Inserire il numero di conto: "
                Leggi numeroConto
                Se il numero conto è diverso dal valore sentinella
                    Allora
                           Stampa il messaggio: "Inserire il bilancio iniziale: "
                           leggi saldoInizioMese

                           Stampa il messaggio: "Inserire il totale addebiti: "
                           leggi totaleAddebili

                           Stampa il messaggio: "Inserire il totale accrediti: "
                           leggi totaleAccrediti

                           Stampa il messaggio: "Inserire il limite di credito concesso: "
                           leggi limiteCreditoConcesso


                           calcola il saldoAttuale aggiungendo al saldoIniziale il totaleAddebiti e sottraendo il totaleAccediti
                           Se il saldoAttuale è maggiore del limiteCreditoConcesso
                                Stampa il messaggio: "Numero conto: "
                                stampa numeroConto

                                Stampa il messaggio: "Limite credito concesso: "
                                stampa limiteCredito

                                Stampa il messaggio: "Saldo attuale: "
                                stampa il saldoAttuale

                                Stampa il messaggio: "Limite Credito Superato."
                            Fine Se
                Fine Se
            Finchè il numero conto è diverso dal valore sentinella
            Fine

*/
#include <stdlib.h>
#include <stdio.h>

int main(void)
{//inizio funzione main

    unsigned int numeroConto = 0;
    float saldoInizioMese = 0;
    float totaleAddebiti = 0;
    float totaleAccrediti = 0;
    float limiteCreditoConcesso = 0;
    int valoreSentinella = -1;
    float saldoAttuale = 0;


return 0;
}//Fine funzione main
