#include <stdlib.h>
#include <stdio.h>

void a(void);
void b(void);
void c(void);
void d(void);
void e(void);
void f(void);

int main(void)
{

    a();
    b();
    c();
    d();
    e();
    f();

return 0;
}

void a( void )
{

FILE *ofPtr;

    if((ofPtr = fopen( "oldmast.dat", "r" )) == NULL){
        puts("File oldmast.dat non trovato");
    }
    else{
        puts("File oldmast.dat letto");
    }
    fclose(ofPtr);
return;
}

void b(void)
{
FILE *tfPtr;

    if((tfPtr = fopen("trans.dat", "r")) == NULL){
        puts("File trans.dat non trovato");
    }
    else{
        puts("file trans.dat letto");
    }
    fclose(tfPtr);
return;
}

void c(void)
{
FILE *nfPtr;

    if((nfPtr = fopen("newmast.dat", "w")) == NULL){
        puts("Non e' stato possibile scrivere il file");
    }
    else{
        puts("File non presente, e' stato creato");
    }
    fclose(nfPtr);
return;
}

void d(void)
{
FILE *filePtr;
    unsigned int accountNumber;
    char name[20];
    double currentBalance;

    if((filePtr = fopen("oldmast.dat", "r")) == NULL){
        puts("Attenzione, non e' possibile leggere il file");
    }
    else{
        printf("%-10s%-13s%s\n", "Account", "Nome", "Bilancio");
        fscanf(filePtr, "%d%19s%lf", &accountNumber, name, &currentBalance);

        while( !feof(filePtr)){
        printf("%-10d%-13s%7.2f\n", accountNumber, name, currentBalance);
        fscanf(filePtr, "%d%19s%lf", &accountNumber, name, &currentBalance);
        }
    }

    fclose(filePtr);
return;
}

void e(void)
{
FILE *filePtr;
    int accountNum;
    double dollarAmount;

    if((filePtr = fopen("trans.dat", "r")) == NULL ){
        puts("File trans.dat non trovato");
    }
    else{
        printf("%-14s%-8s\n", "Numero Account", "Bilancio");
        fscanf(filePtr, "%d %lf", &accountNum, &dollarAmount);

        while(!feof(filePtr)){
        printf("%-14d%-8.2lf\n", accountNum, dollarAmount);
        fscanf(filePtr, "%d%lf", &accountNum, &dollarAmount);
        }
    }
    fclose(filePtr);

return;
}

void f(void)
{
FILE *filePtr;

    int accountNum;
    char name[25];
    double currentBalance;

    if((filePtr = fopen("newmast.dat", "a")) == NULL ){
        puts("file newmast.dat non trovato");
    }
    else{
        printf("%-10s%-25s%s\n", "Account", "Nome", "Bilancio");
        printf("%s", "EOF per uscire\n? ");
        scanf("%d%24s%lf", &accountNum, name, &currentBalance);

        while(!feof(stdin)){
            fprintf(filePtr, "%d %s %.2lf\n", accountNum, name, currentBalance);
            printf("%-10d%-25s%.2lf\n", accountNum, name, currentBalance);
            scanf("%d%24s%lf", &accountNum, name, &currentBalance);
        }
    }
    fclose(filePtr);

return;
}
