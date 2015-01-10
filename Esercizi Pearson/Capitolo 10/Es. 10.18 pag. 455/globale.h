#include <stdlib.h>
#include <stdio.h>

#define MAXLUNGHEZZANOME 20
#define MAXLUNGHEZZACOGNOME 20
#define MINALTEZZA 0.20
#define MAXALTEZZA  2.60
#define MINANNO 1900
#define MAXANNO 2200
#define MINPESO 4
#define MAXPESO 260

typedef struct{
    char Nome[MAXLUNGHEZZANOME];
    char Cognome[MAXLUNGHEZZACOGNOME];
    char Sesso[1];
    struct{
        unsigned int Giorno;
        unsigned int Mese;
        unsigned int Anno;
    }DataDiNascita;
    float Altezza;
    unsigned int Peso;
}HealtProfile;
