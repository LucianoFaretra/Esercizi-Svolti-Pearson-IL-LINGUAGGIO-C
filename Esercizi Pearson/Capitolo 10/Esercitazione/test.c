
#include <stdlib.h>
#include <stdio.h>


typedef struct{
    char Nome[30];
    char Cognome[30];
    struct{
        int giorno;
        int mese;
        int anno;
    }Data;
}Agenda;

void inserimentoDati(Agenda *agendaStudentiPtr);
void stampa(Agenda agendaStudentiStampa);


int main( void )
{
    Agenda agendaStudenti; //Crea un'agenda studenti
    /*printf("%s", "inserisci nome: ");
    scanf("%s", AgendaStudenti.Nome);
    printf("%s", "inserisci cognome: ");
    scanf("%s", AgendaStudenti.Cognome);
    printf("%s", "inserisci giorno: ");
    scanf("%d", &AgendaStudenti.giorno);
    printf("%s", "inserisci mese: ");
    scanf("%d", &AgendaStudenti.mese);
    printf("%s", "inserisci anno: ");
    scanf("%d", &AgendaStudenti.anno);

    printf("%s %s %d-%d-%d.", AgendaStudenti.Nome, AgendaStudenti.Cognome, AgendaStudenti.giorno, AgendaStudenti.mese, AgendaStudenti.anno);
*/
    inserimentoDati(&agendaStudenti);
    stampa(agendaStudenti);


return 0;
}

void inserimentoDati(Agenda *agendaStudentiPtr)
{
    printf("%s", "inserisci nome: ");
    scanf("%s", agendaStudentiPtr->Nome);
    printf("%s", "inserisci cognome: ");
    scanf("%s", agendaStudentiPtr->Cognome);
    printf("%s", "inserisci giorno: ");
    scanf("%d", &agendaStudentiPtr->Data.giorno);
    printf("%s", "inserisci mese: ");
    scanf("%d", &agendaStudentiPtr->Data.mese);
    printf("%s", "inserisci anno: ");
    scanf("%d", &agendaStudentiPtr->Data.anno);
return;
}

void stampa(Agenda agendaStudentiStampa)
{
    printf("%s", "Alunno:\n");
    printf("%s %s %d-%d-%d\n", agendaStudentiStampa.Nome, agendaStudentiStampa.Cognome, agendaStudentiStampa.Data.giorno, agendaStudentiStampa.Data.mese, agendaStudentiStampa.Data.anno);

return;
}

