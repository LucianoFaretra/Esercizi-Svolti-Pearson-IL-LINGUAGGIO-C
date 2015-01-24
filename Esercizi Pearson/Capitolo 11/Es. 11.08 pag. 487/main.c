#include <stdlib.h>
#include <stdio.h>
void tipo1(void);
void tipo2(void);

int main(void)
{

    tipo1();
    tipo2();

return 0;
}

void tipo1(void)
{
FILE *filePtr;

    unsigned int numeroConto;
    char nome[20];
    char cognome[20];
    double saldo;
    unsigned int esitoScanf;

    if((filePtr = fopen("FileTransazioni.dat", "w")) == NULL){
        puts("Errore nell'apertura del file esami.dat");
    }
    else{
        printf("File delle transazioni:\n");
        printf("%-18s%-19s%s\n", "Numero di conto", "Nome", "Saldo");

        do{
            if(((esitoScanf = scanf("%d", &numeroConto))) == 0) {
                scanf("%*[^\n]");
                puts("Input non valido");
            }
        }while(esitoScanf == 0);

        do{
            if(((esitoScanf = scanf("%s", nome))) == 0) {
                scanf("%*[^\n]");
                puts("Input non valido");
            }
        }while(esitoScanf == 0);

         do{
            if(((esitoScanf = scanf("%s", cognome))) == 0) {
                scanf("%*[^\n]");
                puts("Input non valido");
            }
        }while(esitoScanf == 0);

         do{
            if(((esitoScanf = scanf("%lf", &saldo))) == 0) {
                scanf("%*[^\n]");
                puts("Input non valido");
            }
        }while(esitoScanf == 0);

        while(!feof(stdin)){
            fprintf(filePtr, "%d %s %s %.2lf\n", numeroConto, nome, cognome, saldo);
            do{
            if(((esitoScanf = scanf("%d", &numeroConto))) == 0) {
                scanf("%*[^\n]");
                puts("Input non valido");
            }
        }while(esitoScanf == 0);

        do{
            if(((esitoScanf = scanf("%s", nome))) == 0) {
                scanf("%*[^\n]");
                puts("Input non valido");
            }
        }while(esitoScanf == 0);

         do{
            if(((esitoScanf = scanf("%s", cognome))) == 0) {
                scanf("%*[^\n]");
                puts("Input non valido");
            }
        }while(esitoScanf == 0);

         do{
            if(((esitoScanf = scanf("%lf", &saldo))) == 0) {
                scanf("%*[^\n]");
                puts("Input non valido");
            }
        }while(esitoScanf == 0);
        }
    }
    fclose(filePtr);
return;
}

void tipo2(void)
{
FILE *file2Ptr;

    unsigned int numeroConto;
    double saldo;
    unsigned int esitoScanf;

    if((file2Ptr = fopen("FileDelleTransazioni.dat", "w")) == NULL){
        puts("Non e' stato possibile creare il file2.dat");
    }
    else{
        printf("File Delle Transazioni:\n");
        printf("%-20s%-20s\n", "Numerdo di conto", "Ammontare in dollari");
        do{
            if(( esitoScanf = scanf("%d %lf", &numeroConto, &saldo)) == 0){
                scanf("%*[^\n]");
                puts("input non valido");
            }
        }while(esitoScanf == 0);


        while(!feof(stdin)){
            fprintf(file2Ptr, "%d %.2lf\n", numeroConto, saldo);
            do{
                if(( esitoScanf = scanf("%d %lf", &numeroConto, &saldo)) == 0){
                    scanf("%*[^\n]");
                    puts("input non valido");
            }
        }while(esitoScanf == 0);

        }
    }
    fclose(file2Ptr);
return;
}
