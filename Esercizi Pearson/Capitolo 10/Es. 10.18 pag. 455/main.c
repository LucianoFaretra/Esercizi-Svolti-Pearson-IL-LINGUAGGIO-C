/*                 Sviluppato da Luciano Faretra 09/01/2015 rilasciato sotto licenza GNUv3
                                Computerizzare cartelle cliniche

    Affinamento Top Down

    ****************************************************************************************************************

    Funzione main(void)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    Nome                            Nome del paziente                                               stringa di 20 caratteri
    Cognome                         Cognome del paziente                                            stringa di 20 caratteri
    Sesso                           Sesso del paziente M/F                                          carattere M o F
    Giorno                          Giorno di nascta del paziente                                   unsigned intero >= 1, <= 31
    Mese                            Mese di nascita del paziente                                    unsigned intero >= 1, <= 12
    Anno                            Anno di nascita del paziente                                    unsigned intero >= 1900, <= 2200
    Altezza                         Altezza in metri      del paziente                              float >= 0.2, <= 2.60
    Peso                            Peso in chilogrammi del paziente                                float >= 2.00, <= 250.00
    MINPESO                         Minimo peso consentito                                          unsigned intero
    MAXPESO                         Massimo peso consentito                                         unsigned intero
    MINANNO                         Minimo anno consentito                                          unsigned intero
    MAXANNO                         Massimo anno consentito                                         unsigned intero
    MINALTEZZA                      Minima altezza consentita                                       unsigned intero
    MAXALTEZZA                      Massima altezza consentita                                      unsigned intero
    MAXLUNGHEZZANOME                Massima lunghezza del nome                                      unsigned intero
    MAXLUNGHEZZACOGNOME             Massima lunghezza del cognome                                   unsigned intero
    etaAnni                         Eta anni paziente                                               unsigned intero >= 0
    annoAttuale                     Anno d'esercizio attuale                                        unsigned intero

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    HealtProfile                    Struttura composta da Nome, Cognome, Sesso, Altezza, Peso,      Struttura
                                    DataDiNascita
    DataDiNascita                   Struttura composta da Giorno, Mese, Anno                        Struttura

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO
    risultatoScanf                  Variabile utilizzata per controllare se la funzione scanf ha    unsigned intero
                                    svolto il suo lavoro
    valoriCorretti                  Risultato del controllo della data se bisestile o meno          unsigned intero

    1.
    Affinamento:
    Definisci le strutture e le variabili,
    Inserisci i dati del paziente
    avvia Funzione calcoloEta(annoDiNascita, annoAttuale)
    avvia Funzione calcoloBmi(peso, altezza)
    avvia Funzione calcoloFrequenzaMassima(etaAnni)
    avvia Funzione calcoloIntervalloFrequenza(frequenzaMassima)
    stampaDati(HeathProfile, etaAnni, bmi, massimaFrequenzaCardiaca, intervalloMinimo, intervalloMassimo)

    1.1
    Definisci le strutture e le variabili,
        HealthProfile
            Nome
            Cognome
            Sesso
            DataDiNascita
                Giorno
                Mese
                Anno
            Altezza
            Peso
    Inserisci i dati del paziente
    Esegui

        Stampa:"Inserisci l'Anno attuale:"
            inputDati(annoAttuale, "unsigned int")
        Stampa:"Inserisci il Nome del Paziente:"
            inputDati(HealtProfile.Nome, "string")
        Stampa:"Inserisci il Cognome del Paziente:"
            inputDati(HealtProfile.Cognome, "string")
        Stampa:"Inserisci il Sesso del Paziente (M o F):"
            inputDati(HealtProfile.Sesso, "char")
        Stampa:"Inserisci il Giorno di Nascita del Paziente:"
            inputDati(HealtProfile.DataDiNascita.Giorno, "unsigned int")
        Stampa:"Inserisci il Mese di Nascita del Paziente:"
            inputDati(HealtProfile.DataDiNascita.Mese, "unsigned int")
        Stampa:"Inserisci l'Anno di Nascita del Paziente:"
            inputDati(HealtProfile.DataDiNascita.Anno, "unsigned int")

        valoriCorretti = ControlloCorrettezzaData(giorno, mese, anno)

        Stampa:"Inserisci l'Altezza del Paziente in metri:"
            inputDati(HealtProfile.Altezza, "float")
        Stampa:"Inserisci il Peso del Paziente:"
            inputDati(Nome, HealtProfile.Peso, "unsigned int")

    Finche valoriCorretti != 1

    etaAnni = calcoloEta(annoDiNascita, annoAttuale)
    bmi = calcoloBmi(peso, altezza)
    massimaFrequenzaCardiaca = calcoloFrequenzaMassima(etaAnni)
    intervalloMinimo = calcoloIntervalloMinimoFrequenza(frequenzaMassima)
    intervalloMassimo = calcoloIntervalloMassimoFrequenza(frequenzaMassima)
    stampaDati(HeathProfile, etaAnni, bmi, massimaFrequenzaCardiaca, intervalloMinimo, intervalloMassimo)

    ****************************************************************************************************************

    Funzione inputDati(streamOutput, tipodato)

    Funzione calcoloEta(annoDiNascita, annoAttuale)

    calcoloBmi(peso, altezza)

    calcoloFrequenzaMassima(etaAnni)

    calcoloIntervalloMinimoFrequenza(frequenzaMassima)

    calcoloIntervalloMassimoFrequenza(frequenzaMassima)

    stampaDati(HeathProfile, etaAnni, bmi, massimaFrequenzaCardiaca, intervalloMinimo, intervalloMassimo)

    ControlloCorrettezzaData(giorno, mese, anno)

    calcoloEta(annoDiNascita, annoAttuale)

*/

#include "calcoloBmi.h"
#include "calcoloEta.h"
#include "calcoloFrequenzaMassima.h"
#include "calcoloIntervalloMassimoFrequenza.h"
#include "calcoloIntervalloMinimoFrequenza.h"
#include "ControlloCorrettezzaData.h"
#include "inputDati.h"
#include "stampaErrori.h"
#include "globale.h"
#include "stampaDati.h"

int main( void )
{
    HealtProfile paziente;
    unsigned int etaAnni;
    unsigned int annoAttuale;
    unsigned int valoriCorretti;
    float bmi;
    unsigned int massimaFrequenzaCardiaca;
    unsigned int intervalloMinimo;
    unsigned int intervalloMassimo;

    do{

        printf("%s", "Inserisci l'Anno attuale: ");
            inputDatiUnsignedInt(&annoAttuale);

        printf("%s", "Inserisci il Nome del Paziente: ");
            inputDatiString(paziente.Nome);

        printf("%s", "Inserisci il Cognome del Paziente: ");
            inputDatiString(paziente.Cognome);

        printf("%s", "Inserisci il Sesso del Paziente (M o F): ");
            inputDatiString(paziente.Sesso);

        printf("%s", "Inserisci il Giorno di Nascita del Paziente: ");
            inputDatiUnsignedInt(&paziente.DataDiNascita.Giorno);

        printf("%s", "Inserisci il Mese di Nascita del Paziente: ");
            inputDatiUnsignedInt(&paziente.DataDiNascita.Mese);

        printf("%s", "Inserisci l'Anno di Nascita del Paziente: ");
            inputDatiUnsignedInt(&paziente.DataDiNascita.Anno);


        valoriCorretti = ControlloCorrettezzaData(paziente.DataDiNascita.Giorno, paziente.DataDiNascita.Mese, paziente.DataDiNascita.Anno);


        printf("%s", "Inserisci l'Altezza del Paziente in metri: ");
            inputDatiFloat(&paziente.Altezza);

        printf("%s", "Inserisci il Peso del Paziente: ");
            inputDatiUnsignedInt(&paziente.Peso);

    }while( valoriCorretti != 1 );

    etaAnni = calcoloEta(paziente.DataDiNascita.Anno, annoAttuale);
    bmi = calcoloBmi(paziente.Peso, paziente.Altezza);
    massimaFrequenzaCardiaca = calcoloFrequenzaMassima(etaAnni);
    intervalloMinimo = calcoloIntervalloMinimoFrequenza(massimaFrequenzaCardiaca);
    intervalloMassimo = calcoloIntervalloMassimoFrequenza(massimaFrequenzaCardiaca);
    stampaDati(paziente, etaAnni, bmi, massimaFrequenzaCardiaca, intervalloMinimo, intervalloMassimo);

return 0;
}
