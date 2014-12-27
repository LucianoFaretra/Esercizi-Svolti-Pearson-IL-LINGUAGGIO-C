/*                 Sviluppato da Luciano Faretra 24/12/2014 rilasciato sotto licenza GNUv3
                                    Privacy e crittografia

    Affinamento Top Down

    INPUT                       DESCRIZIONE                                              DOMINIO
    numeroIniziale              Numero iniziale inserito dall'utente                     unsigned int >= 0
    SOMMA                       Numero da sommare ad ogni                                unsigned int >= 0
    DIVISORE                    Numero con cui dividere numeroIniziale                   unsigned int >= 0

    OUTPUT                      DESCRIZIONE                                              DOMIONIO
    numeroCriptato              Stampa del numero criptato                               char

    DATI DI LAVORO              DESCRIZIONE                                              DOMINIO
    primaCifra                  Prima cifra di numeroIniziale                            unsigned int >= 0
    secondaCifra                Seconda cifra di numeroIniziale                          unsigned int >= 0
    terzaCifra                  Terza cifra di numeroIniziale                            unsigned int >= 0
    quartaCifra                 Quarta cifra di numeroIniziale                           unsigned int >= 0
    variabileTermporanea        Variabile temporanea                                     unsigned int >= 0
    valoreSentinella            Valore sentinella utilizzato per il controllo iterattivo unsigned int >= 0


    1. Il softare cripta i numero interi di 4 cifre inseriti dall'utente

    ----------------------------------------------------------------------

    1.1 Leggi numeroIniziale

        Scomponi numeroIniziale in:
            primaCifra,
            secondaCifra,
            terzaCifra,
            quartaCifra

        aggiungi SOMMA a:
            primaCifra,
            secondaCifra,
            terzaCifra,
            quartaCifra

        calcola il resto di una divisione per 10 per:
            primaCifra,
            secondaCifra,
            terzaCifra,
            quartaCifra

        scambia primaCifra con terzaCifra e secondaCifra con quartaCifra

        Riassembla la cifra e stampala

    -----------------------------------------------------------------------------

    1.2
        //Scomposione numero in 4 cifre

        Esegui
        Stampa: "Inserire numero da criptare (4 cifre >= 1000): "
        Leggi numeroIniziale
            Se numeroIniziale e' composto da quattro cifre
                Allora
                    (float)primaCifra = numeroIniziale / 1000
                    (float)secondaCifra = ( (float)primaCifra - (int)primaCifra ) * 10
                    (float)terzaCifra = ( (float)secondaCifra - (int)secondaCifra ) * 10
                    (float)quartaCifra = ( (float)terzaCifra - (int)terzaCifra ) * 10
                    valoreSentinella = 1
                Altrimenti
                    Stampa: "Attenzione non e' stato inserito un intero di 4 cifre >= 1000 Ripetere inserimento"
        Finche' valoreSentinella = 0

        //Aggiungi SOMMA ad ogni numero

        primaCifra = primaCifra + SOMMA
        secondaCifra = secondaCifra + SOMMA
        terzaCifra = terzaCifra + SOMMA
        quartaCifra = quartaCifra + SOMMA

        //Calcola il resto per DIVISIONE di ogni cifra

        primaCifra = primaCifra % DIVISIONE
        secondaCifra = secondaCifra % DIVISIONE
        terzaCifra = terzaCifra % DIVISIONE
        quartaCifra = quartaCifra % DIVISIONE

        // Scambia Cifre
            //Scambia primaCifra con la terzaCifra
                variabileTermporanea = primaCifra
                primaCifra = terzaCifra
                terzaCifra = variabileTermporanea

            //Scambia secondaCifra con la quartaCifra
                variabileTermporanea = secondaCifra
                secondaCifra = quartaCifra
                quartaCifra = variabileTermporanea

        // Stampa del numero criptato

        Se primaCifra == 0
            Allora
                Se secondaCifra == 0
                    Allora
                        Se terzaCifra == 0
                            Allora
                                Se quartaCifra == 0
                                    Allora
                                        Stampa: "Il numero criptato e': 0000"
                                    Altrimenti
                                        Stampa: "Il numero criptato e': 000'quaartaCifra'"
                                Fine Se
                            Altrimenti
                                Stampa: "Il numero criptato e': 00'terzaCifra''quaartaCifra'"
                        Fine Se
                    Altrimenti
                        Stampa: "Il numero criptato e': 0'secondaCifra''terzaCifra''quaartaCifra'"
                Fine Se
            Altrimenti
                Stampa: "Il numero criptato e': 'primaCifra''secondaCifra''terzaCifra''quaartaCifra'"
        Fine Se


   */
#include <stdlib.h>
#include <stdio.h>
#define SOMMA 7
#define DIVISORE 10

int main(void)
{//inizio funzione main

    unsigned int numeroIniziale;
    float primaCifra = 0;
    float secondaCifra = 0;
    float terzaCifra = 0;
    float quartaCifra = 0;
    unsigned int variabileTermporanea;
    unsigned int valoreSentinella = 0;
    unsigned int sceltaEffettuata = 0;

    //Scomposione numero in 4 cifre
    printf("%s", "Selezionare la modalita' di utilizzo inserendo il relativo numero e premendo invio:\n1. Criptazione.\n2. Decriptazione.\nScelta effettuata: ");
    scanf("%u", &sceltaEffettuata);

    if( sceltaEffettuata == 1 ){
        do{
            printf( "%s", "Inserire numero da criptare (4 cifre >= 1000): " );
            scanf( "%u", &numeroIniziale );
            if( ( (float)numeroIniziale / 1000 ) > 0 ){
                primaCifra = ((float)numeroIniziale / 1000 );
                secondaCifra = ((((float)numeroIniziale / 1000 ) - (int)primaCifra )) * 10;
                terzaCifra = (((((float)numeroIniziale / 1000 ) - (int)primaCifra )) - (int)secondaCifra ) * 10;
                quartaCifra = ((((( (float)numeroIniziale / 1000 ) - (int)primaCifra )) - (int)secondaCifra ) - (int)terzaCifra ) * 10;
                valoreSentinella = 1;
            }
            else{
                puts( "Attenzione non e' stato inserito un intero di 4 cifre >= 1000.\n Ripetere inserimento." );
            }
        }while( valoreSentinella == 0  );

        //Aggiungi SOMMA ad ogni numero

        primaCifra += (unsigned int)SOMMA;
        secondaCifra += (unsigned int)SOMMA;
        terzaCifra += (unsigned int)SOMMA;
        quartaCifra += (unsigned int)SOMMA;

        //Calcola il resto per DIVISORE di ogni cifra

        primaCifra = ( (unsigned int)primaCifra % (unsigned int)DIVISORE );
        secondaCifra = ( (unsigned int)secondaCifra % (unsigned int)DIVISORE );
        terzaCifra = ( (unsigned int)terzaCifra % (unsigned int)DIVISORE );
        quartaCifra =  ( (unsigned int)quartaCifra % (unsigned int)DIVISORE );

        // Scambia Cifre
            //Scambia primaCifra con la terzaCifra
                variabileTermporanea = primaCifra;
                primaCifra = terzaCifra;
                terzaCifra = variabileTermporanea;

            //Scambia secondaCifra con la quartaCifra
                variabileTermporanea = secondaCifra;
                secondaCifra = quartaCifra;
                quartaCifra = variabileTermporanea;

        // Stampa del numero criptato

        if( primaCifra == 0 ){
            if( secondaCifra == 0 ){
                if( terzaCifra == 0 ){
                    if( quartaCifra == 0 ){
                        puts( "\nIl numero criptato e': 0000" );
                    }
                    else{
                         printf( "\nIl numero criptato e': 000%u\n", (unsigned int)quartaCifra );
                    }
                }
                else{
                    printf( "\nIl numero criptato e': 00%u%u\n", (unsigned int)terzaCifra, (unsigned int)quartaCifra );
                }
            }
            else{
                printf( "\nIl numero criptato e': 0%u%u%u\n", (unsigned int)secondaCifra, (unsigned int)terzaCifra, (unsigned int)quartaCifra );
            }
        }
        else{
            printf( "\nIl numero criptato e': %u%u%u%u\n", (unsigned int)primaCifra, (unsigned int)secondaCifra, (unsigned int)terzaCifra, (unsigned int)quartaCifra );
        }
    }
////////////////////////////////////////////////////////////////////////////////
    //DECRIPT
////////////////////////////////////////////////////////////////////////////////
    else if( sceltaEffettuata == 2 ){
            do{
            printf( "%s", "Inserire numero da decriptare (4 cifre compresi gli zeri): " );
            scanf( "%u", &numeroIniziale );
            if( numeroIniziale <= 9999 ){
                if( numeroIniziale <= 9 ){
                    primaCifra = 0;
                    secondaCifra = 0;
                    terzaCifra = 0;
                    quartaCifra = ( numeroIniziale );
                    valoreSentinella = 1;
                }
                else if( numeroIniziale <= 99 ){
                        primaCifra = 0;
                        secondaCifra = 0;
                        terzaCifra = ( numeroIniziale / 10);
                        quartaCifra = (((float)numeroIniziale / 10 ) - terzaCifra ) * 10;
                        valoreSentinella = 1;

                        printf("\n%f\n%f\n%f\n%f\n", primaCifra, secondaCifra, terzaCifra, quartaCifra);

                }
                else if( numeroIniziale <= 999 ){
                        primaCifra = 0;
                        secondaCifra = ( numeroIniziale / 100 );
                        terzaCifra = (((float)numeroIniziale / 100 ) - terzaCifra ) * 10;
                        quartaCifra = ((((float)numeroIniziale / 100 ) - terzaCifra ) - quartaCifra) * 10;
                        valoreSentinella = 1;
                }

                else if( numeroIniziale <= 9999 ){
                        primaCifra = ((float)numeroIniziale / 1000 );
                        secondaCifra = (((float)numeroIniziale / 1000 ) - primaCifra) * 10;
                        terzaCifra = ((((float)numeroIniziale / 1000 ) - primaCifra ) - secondaCifra ) * 10;
                        quartaCifra = (((((float)numeroIniziale / 1000 ) - primaCifra) - secondaCifra) - terzaCifra) * 10;
                        valoreSentinella = 1;
                }
            }
            else{
                puts( "Attenzione non e' stato inserito un numero valido.\n Ripetere inserimento." );
            }
        }while( valoreSentinella == 0  );

        // Scambia Cifre
            //Scambia primaCifra con la terzaCifra
                variabileTermporanea = primaCifra;
                primaCifra = terzaCifra;
                terzaCifra = variabileTermporanea;

            //Scambia secondaCifra con la quartaCifra
                variabileTermporanea = secondaCifra;
                secondaCifra = quartaCifra;
                quartaCifra = variabileTermporanea;


        //Calcola il resto per DIVISORE di ogni cifra

        if ( primaCifra == 0){
            primaCifra = (int)DIVISORE;
        }
        if ( secondaCifra == 0){
            secondaCifra = (int)DIVISORE;
        }
        if ( terzaCifra == 0){
            terzaCifra = (int)DIVISORE;
        }
        if ( quartaCifra == 0){
            quartaCifra = (int)DIVISORE;
        }

        //Aggiungi SOMMA ad ogni numero

        primaCifra -= (unsigned int)SOMMA;
        secondaCifra -= (unsigned int)SOMMA;
        terzaCifra -= (unsigned int)SOMMA;
        quartaCifra -= (unsigned int)SOMMA;


        // Stampa del numero criptato

        if( primaCifra == 0 ){
            if( secondaCifra == 0 ){
                if( terzaCifra == 0 ){
                    if( quartaCifra == 0 ){
                        puts( "\nIl numero criptato e': 0000" );
                    }
                    else{
                         printf( "\nIl numero criptato e': 000%u\n", (unsigned int)quartaCifra );
                    }
                }
                else{
                    printf( "\nIl numero criptato e': 00%u%u\n", (unsigned int)terzaCifra, (unsigned int)quartaCifra );
                }
            }
            else{
                printf( "\nIl numero criptato e': 0%u%u%u\n", (unsigned int)secondaCifra, (unsigned int)terzaCifra, (unsigned int)quartaCifra );
            }
        }
        else{
            printf( "\nIl numero criptato e': %u%u%u%u\n", (unsigned int)primaCifra, (unsigned int)secondaCifra, (unsigned int)terzaCifra, (unsigned int)quartaCifra );
        }

    }
    else{
        puts("E' stato inserito un valore non valido (la scelta era 1 o 2) il programma verra' terminato");
    }
return 0;
}//Fine funzione main
