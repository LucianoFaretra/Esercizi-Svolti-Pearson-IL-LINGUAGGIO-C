    /*                 Sviluppato da Luciano Faretra 09/01/2015 rilasciato sotto licenza GNUv3
                                Computerizzare cartelle cliniche

    Affinamento Top Down


    ****************************************************************************************************************

    Funzione inputDati(streamOutput, tipodato)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    streamInput                     Dati in input                                                   intero/float/char
    tipodato                        Tipo di dato da leggere                                         Stringa contenente il tipo di dato da leggere
    streamOutput                    Dove salvare lo streamInput                                     intero/float/char

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    streamOutput                    Dove salvare lo streamInput                                     intero/float/char

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

    Se tipodato == "int"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutput
            Finchè la lettura non ha successo
    Altrimenti Se tipodato == "unsigned int"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutput
                    Fine Se
            Finchè la lettura non ha successo
    Altrimenti Se tipodato == "float"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutput
                    Fine Se
            Finchè la lettura non ha successo
    Altrimenti Se tipodato == "char"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutput

                    Fine Se
            Finchè la lettura non ha successo
    Altrimenti Se tipodato == "strig"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutput
                    Fine Se
            Finchè la lettura non ha successo
    Altrimenti Se tipodato == "double"
        Allora
            Esegui
                Leggi streamInput
                    Se la lettura non ha avuto successo
                        Allora
                            stampaErrori(1)
                        Altrimenti scrivi streamInput in streamOutput
                    Fine Se
            Finchè la lettura non ha successo
    Altrimenti
        stampaErrori(2)

                                    *****************************

    stampaErrori(numeroErrore)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    numeroErrore                    Numero Errore riscontrato                                       intero >= 1

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    ErroreN                         Stampa il messaggio d'errore relativo                           Stringa di caratteri

                                    ******************************

    Se numeroErrore == 1
        Allora
            Stampa:"Attenzione, input non valido"
    Altrimenti Se numeroErrore == 2
        Allora
            Stampa:"Dato inserito non supportato"
    Altrimenti
        Stampa:"Numero errore non valido"


    ****************************************************************************************************************
    */
