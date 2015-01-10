    /*                 Sviluppato da Luciano Faretra 09/01/2015 rilasciato sotto licenza GNUv3
                                Computerizzare cartelle cliniche

    Affinamento Top Down


    ****************************************************************************************************************

    stampaDati(HeathProfile, etaAnni, bmi, massimaFrequenzaCardiaca, intervalloMinimo, intervalloMassimo)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    HeathProfile                    Struttura contenente i dati anagrafici del paziente             struttura
    DataDiNascita                   Struttura contenente i dati di nascita del paziente             struttura
    etaAnni                         ta in anni del paziente                                         intero
    bmi                             Indice bmi pari a Peso/altezza^2                                float > 0
    intervalloMinimo                pari al INTERVALLOMINIMO della massimaFrequenzaCardiaca         intero > 0
    intervalloMassimo               pari al INTERVALLOMASSIMO della massimaFrequenzaCardiaca        intero > 0

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

    Stampa:"Il paziente 'HeathProfile.Nome' 'HeathProfile.Cognome' di sesso 'HeathProfile.Sesso' Nato il 'DataDiNascita.Giorno'-'DataDiNascita.Mese'-'DataDiNascita.Anno'
    di anni 'etaAnni' con peso corporeo di 'HeathProfile.Peso' ed altezza di 'HeathProfile.Altezza'.

    Stampa:"Presenta ha una massima frequenza cardiaca di: 'massimaFrequenzaCardiaca'."
    Stampa:"Una frequenza cardiaca normale di 'intervalloMinimo' ~ 'intervalloMassimo'
    Stampa:"Un indice BMI pari a 'bmi', vedi tabella sottostante per confronto:"

    Stampa:"VALORI del BMI"
    Stampa:"Sottopeso:  medo di 18.8"
    Stampa:"Normale:    tra 18.8 e 24.9"
    Stampa:"Sovrappeso: tra 25 e 29.9"
    Stampa:"Obeso:  30 o oltre"

    ****************************************************************************************************************
    */
