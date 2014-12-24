/*                 Sviluppato da Luciano Faretra 24/12/2014 rilasciato sotto licenza GNUv3
                                    Calcolare al frequenza cardiaca normale

    Affinamento Top Down

    INPUT                           DESCRIZIONE                                              DOMINIO
    FREQUENZAMASSIMACARDIACA        Frequenza massima cariaca per un essere umano            unsigned int 220
    FREQUENZANORMALEMIN             Frequenza normale cardiaca gange minimo                  unsigned int 50
    FREQUENZANORMALEMAX             Frequenza normale cardiaca gange massimo                 unsigned int 80
    etaGiorno                       Età atleta giorni                                        unsigned int >= 1, <= 31
    etaMese                         Età atleta mesi                                          unsigned int >= 1, <= 12
    etaAnno                         Età atleti anni                                          unsigned int >= 1900, <= 2100

    OUTPUT                          DESCRIZIONE                                              DOMIONIO
    frequenzaCariacaNormaleMinima   Range minimo di frequenza normale                        unsigned int > 0
    frequenzaCariacaNormaleMassima  Range massimo di frequenza normale                       unsigned int > 0
    FrequenzaMassimaCardiaca        Frequenza Massima cardiaca atleta preso in esame         unsigned int > 0
    etaAtleta                       Età atleta espressa in anni                              unsigned int > 0

    DATI DI LAVORO                  DESCRIZIONE                                              DOMINIO

    1. Calcola la frequenza massima cardiaca possibile per un atleta, sottraendo alla FREQUENZAMASSIMACARDIACA l'età dell'atleta e calcolando il range

    1.1
        Esegui
            Esegui
                Inserire etaAnno di nascita
                    Se etaAnno >= 1900
                        Allora
                            Se etaAnno <= 2100
                                Allora
                                    Esegui
                                        Esegui
                                            Inserire etaMese di nascita
                                                Se eraMese >= 1
                                                    Allora
                                                        Se etaMese <= 12
                                                            Allora
                                                                Se etaMese =< 7
                                                                    Allora
                                                                        Se etaMese % 2 != 0
                                                                            Allora
                                                                                Se etaMese != 2
                                                                                    Allora
                                                                                        Esegui
                                                                                            Esegui
                                                                                                Inserire etaGiorno di nascita
                                                                                            Finchè etaGiorno <= 30
                                                                                        Finchè etaGiorno => 1
                                                                                    Altrimenti
                                                                                        Se (etaAnno % 400 == 0 || (etaAnno % 100 != 0 && etaAnno % 4 == 0))
                                                                                            Allora
                                                                                                Esegui
                                                                                                    Esegui
                                                                                                        Inserire etaGiorno di nascita
                                                                                                    Finchè etaGiorno <= 29
                                                                                                Finchè etaGiorno => 1
                                                                                            Altrimenti
                                                                                                Esegui
                                                                                                    Esegui
                                                                                                        Inserire etaGiorno di nascita
                                                                                                    Finchè etaGiorno <= 28
                                                                                                Finchè etaGiorno => 1
                                                                                        Fine Se
                                                                                Fine Se
                                                                            Altrimenti
                                                                                Esegui
                                                                                    Esegui
                                                                                        Inserire etaGiorno di nascita
                                                                                    Finchè etaGiorno <= 31
                                                                                Finchè etaGiorno => 1
                                                                        Fine Se
                                                                Fine Se
                                                                Altrimenti Se etaMese <= 12
                                                                    Allora
                                                                        Se etaMese % 2 != 0
                                                                            Allora
                                                                                Esegui
                                                                                    Esegui
                                                                                        Inserire etaGiorno di nascita
                                                                                    Finchè etaGiorno <= 31
                                                                                Finchè etaGiorno => 1
                                                                            Altrimenti
                                                                                Esegui
                                                                                    Esegui
                                                                                        Inserire etaGiorno di nascita
                                                                                    Finchè etaGiorno <= 30
                                                                                Finchè etaGiorno => 1
                                                                        FineSe
                                                                    Altrimenti
                                                                        Stanpa: "Attenzione e' stato inserito un mese invalido"
                                                                Fine Altrimenti Se
                                                            Altrimenti
                                                                Stanpa: "Attenzione e' stato inserito un mese invalido"
                                                        Fine Se
                                                    Altrimenti
                                                        Stanpa: "Attenzione e' stato inserito un mese invalido"
                                                Fine Se
                                            Finchè etaMese <= 12
                                        Finchè etaMese => 1
                                Altrimenti
                                    Stanpa: "Attenzione e' stato inserito un anno invalido"
                            Fine Se
                        Altrimenti
                            Stanpa: "Attenzione e' stato inserito un anno invalido"
                    Fine Se
            Finchè etaAnno <= 2100
        Finchè etaAnno => 1900


        Esegui
            Esegui
                Inserire annoAttuale
                    Se annoAttuale >= 1900
                        Allora
                            Se annoAttuale <= 2100
                                Allora
                                    Se annoAttuale > etaAnno
                                        Allora
                                            Stampa "E' stato inserito un anno corrente sicuramente errato"
                                    Fine Se
                                Altrimenti
                                    Stampa "E' stato inserito un anno corrente sicuramente errato"
                            Fine Se
                        Altrimenti
                            Stampa "E' stato inserito un anno corrente sicuramente errato"
                    Fine Se
            Finchè etaAnno <= 2100
        Finchè etaAnno => 1900

        etaAtleta = ( annoAttuale - etaAnno )
        FrequenzaMassimaCardiaca = ( FREQUENZAMASSIMACARDIACA - etaAtleta)
        frequenzaCariacaNormaleMinima = ( (float)FrequenzaMassimaCardiaca * 0.5 )
        frequenzaCariacaNormaleMassima = ( (float)FrequenzaMassimaCardiaca * 0.8 )

        Stampa: "L'eta' dell'atleta e' di 'etaAtleta' anni."
        Stampa: "La sua Massima Frequenza Cardiaca e' pari a: 'FrequenzaMassimaCardiaca'
        Stampa: "Il suo Intervallo di Frequenza Normale e' tra i 'frequenzaCariacaNormaleMinima' e i 'frequenzaCariacaNormaleMassima'

   */
#include <stdlib.h>
#include <stdio.h>
#define FREQUENZAMASSIMACARDIACA 220
#define FREQUENZANORMALEMIN 50
#define FREQUENZANORMALEMAX 80

int main(void)
{//inizio funzione main

    unsigned int etaGiorno;
    unsigned int etaMese;
    unsigned int etaAnno;
    unsigned int frequenzaCariacaNormaleMinima;
    unsigned int frequenzaCariacaNormaleMassima;
    unsigned int FrequenzaMassimaCardiaca;
    unsigned int etaAtleta;
    unsigned int annoAttuale;


    do{
        do{
            printf("%s", "Prego inserire l'anno di nascita dell'altleta: ");
            scanf("%u", &etaAnno );
                if( etaAnno >= 1900 ){
                    if( etaAnno <= 2100 ){
                        do{
                            do{
                                printf("%s", "Prego inserire il mese di nascita dell'altleta: ");
                                scanf("%u", &etaMese);
                                    if( etaMese >= 1 ){
                                        if( etaMese <= 12 ){
                                            if( etaMese <= 7 ){
                                                if( etaMese % 2 != 0 ){
                                                    if( etaMese != 2 ){
                                                        do{
                                                            do{
                                                                printf("%s", "Prego inserire il giorno di nascita dell'altleta: ");
                                                                scanf("%u", &etaGiorno);
                                                            }while( etaGiorno <= 30 );
                                                        }while( etaGiorno >= 1 );
                                                    }
                                                    else{
                                                        if( etaAnno % 400 == 0 || (etaAnno % 100 != 0 && etaAnno % 4 == 0) ){
                                                            do{
                                                                do{
                                                                    printf("%s", "Prego inserire il giorno di nascita dell'altleta: ");
                                                                    scanf("%u", &etaGiorno );
                                                                }while( etaGiorno <= 29 );
                                                            }while( etaGiorno >= 1 );
                                                        }
                                                        else{
                                                            do{
                                                                do{
                                                                    printf("%s", "Prego inserire il giorno di nascita dell'altleta: ");
                                                                    scanf("%u", &etaGiorno );
                                                                }while( etaGiorno <= 28 );
                                                            }while( etaGiorno >= 1 );
                                                        }
                                                    }
                                                }
                                                else{
                                                    do{
                                                        do{
                                                            printf("%s", "Prego inserire il giorno di nascita dell'altleta: ");
                                                            scanf("%u", &etaGiorno );
                                                        }while( etaGiorno <= 31 );
                                                    }while( etaGiorno >= 1 );
                                                }
                                            }
                                            else if( etaMese <= 12 ){
                                                if( etaMese % 2 != 0 ){
                                                    do{
                                                        do{
                                                            printf("%s", "Prego inserire il giorno di nascita dell'altleta: ");
                                                            scanf("%u", &etaGiorno );
                                                        }while( etaGiorno <= 31 );
                                                    }while( etaGiorno >= 1 );
                                                }
                                                else{
                                                    do{
                                                        do{
                                                            printf("%s", "Prego inserire il giorno di nascita dell'altleta: ");
                                                            scanf("%u", &etaGiorno );
                                                        }while( etaGiorno <= 30 );
                                                    }while( etaGiorno >= 1 );
                                                }
                                            }
                                            else{
                                                printf("%s", "Attenzione e' stato inserito un mese invalido");
                                            }
                                        }
                                        else{
                                            printf("%s", "Attenzione e' stato inserito un mese invalido");
                                        }
                                    }
                                    else{
                                        printf("%s", "Attenzione e' stato inserito un mese invalido");
                                    }
                            }while( etaMese <= 12 );
                        }while( etaMese >= 1 );
                    }
                    else{
                        printf("%s", "Attenzione e' stato inserito un anno invalido");
                    }
                }
                else{
                    printf("%s", "Attenzione e' stato inserito un anno invalido");
                }
            }while( etaAnno <= 2100 );
        }while( etaAnno >= 1900 );


        do{
            do{
                printf("%s", "Prego inserire l'anno attuale (valori errati falsano misurazioni): ");
                scanf( "%u", &annoAttuale );
                    if( annoAttuale >= 1900 ){
                        if( annoAttuale <= 2100 ){
                            if( annoAttuale > etaAnno ){
                                printf("E' stato inserito un anno corrente sicuramente errato.");
                            }
                        }
                        else{
                            printf("E' stato inserito un anno corrente sicuramente errato.");
                        }
                    }
                    else{
                    printf("E' stato inserito un anno corrente sicuramente errato.");
                    }
            }while( etaAnno <= 2100 );
        }while( etaAnno >= 1900 );

        etaAtleta = ( annoAttuale - etaAnno );
        FrequenzaMassimaCardiaca = ( FREQUENZAMASSIMACARDIACA - etaAtleta);
        frequenzaCariacaNormaleMinima = ( (float)FrequenzaMassimaCardiaca * 0.5 );
        frequenzaCariacaNormaleMassima = ( (float)FrequenzaMassimaCardiaca * 0.8 );

        printf( "L'eta' dell'atleta e' di %u anni.", etaAtleta);
        printf( "La sua Massima Frequenza Cardiaca e' pari a: %u", FrequenzaMassimaCardiaca );
        printf( "Il suo Intervallo di Frequenza Normale e' tra i %u e i %u", frequenzaCariacaNormaleMinima, frequenzaCariacaNormaleMassima);

return 0;
}//Fine funzione main
