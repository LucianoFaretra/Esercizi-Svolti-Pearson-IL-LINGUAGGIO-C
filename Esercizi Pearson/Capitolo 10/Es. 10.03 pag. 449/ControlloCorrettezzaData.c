    /*                 Sviluppato da Luciano Faretra 09/01/2015 rilasciato sotto licenza GNUv3
                                Computerizzare cartelle cliniche

    Affinamento Top Down


    ****************************************************************************************************************

    ControlloCorrettezzaData(giorno, mese, anno)

    INPUT                           DESCRIZIONE                                                     DOMINIO
    Giorno                          Giorno di nascta del paziente                                   unsigned intero >= 1, <= 31
    Mese                            Mese di nascita del paziente                                    unsigned intero >= 1, <= 12
    Anno                            Anno di nascita del paziente                                    unsigned intero >= 1900, <= 2200

    OUTPUT                          DESCRIZIONE                                                     DOMIONIO
    esitoControllo                  Esito del controllo, 1 Positivo, 0 Negativo                     unsigned intero 0, 1.

    DATI DI LAVORO                  DESCRIZIONE                                                     DOMINIO

    Inizializza esitoControllo a 1
    Se Mese == 2
        Allora
            Se (Anno % 400 == 0 || (Anno % 100 != 0 && Anno % 4 == 0))
                Allora
                    Se Giorno > 29
                        Allora
                            stampaErrori(3)
                            esitoControllo = 0
                    Fine Se
                Altrimenti
                    Se Giorno > 28
                        Allora
                            stampaErrori(3)
                            esitoControllo = 0
                    Fine Se
    Fine Se

    Altrimenti Se Mese <= 7 && Mese % 2 == 0 || Mese >= 8 && Mese % 2 != 0
        Allora
            Se Giorno > 28
                Allora
                    stampaErrori(3)
                    esitoControllo = 0
            Fine Se
    Fine Se

    return esitoControllo

    ****************************************************************************************************************
    */
