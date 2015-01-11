#include <stdio.h>

struct clientData{
    unsigned int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

unsigned int enterChoice( void );
void textFile( FILE *readPtr );
void updateRecord( FILE *fPtr );
void newRecord( FILE *fPtr );
void deleteRecord( FILE *fPtr );

int main( void )
{
    FILE *cfPtr;//Puntatore a credit.dat
    unsigned int choice; //scelta dell'utente

    if( ( cfPtr = fopen( "credit.dat", "rb+" ) ) == NULL ){
        puts("File could not be opened.");
    }
    else{
        while( ( choice = enterChoice() ) != 5 ){
            switch(choice){
                case 1:
                    textFile(cfPtr);
                    break;
                case 2:
                    updateRecord(cfPtr);
                    break;
                case 3:
                    newRecord(cfPtr);
                    break;
                case 4:
                    deleteRecord(cfPtr);
                    break;
                default:
                    puts("Incorrect choice");
                    break;
            }
        }
        fclose(cfPtr);
    }
return 0;
}

//Crea file di testo formattato per la stampa
void textFile(FILE *readPtr)
{
    FILE *writePtr; //puntatore ad accounts.txt
    int result; //usato per verificare se fread ha letto i byte

    //Crea oggetto data vuoto
    struct clientData client = { 0, "", "", 0.0 };

    //Apri il file di testo per la scrittura
    if((writePtr = fopen("accounts.txt", "w")) == NULL){
        puts("File could not be opened.");
    }
    else{
        rewind(readPtr);//Sposta il puntatore all'inizio del file
        fprintf(writePtr, "%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance" );

        //copia tutti i record sul file di testo
        while( !feof(readPtr)){
            result = fread(&client, sizeof( struct clientData), 1, readPtr);

            //scrivi un singolo record sul file di testo
            if( result != 0 && client.acctNum != 0){
                fprintf(writePtr, "%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance);
            }
        }
        fclose(writePtr);//fclose chiude il file
    }
return;
}

//aggiorna il saldo in un record
void updateRecord(FILE *fPtr)
{
    unsigned int account; //numero del conto
    double transaction; //ammontare della transazione

    //crea un oggetto clientData senza informazioni
    struct clientData client = { 0, "", "", 0.0 };

    //ottieni il numero di conto da aggiornare
    printf("%s", "Enter account to update ( 1 - 100 ): ");
    scanf("%d", &account);

    //sposta il puntatore del file al record corretto nel file
    fseek( fPtr, (account -1 ) * sizeof (struct clientData), SEEK_SET);

    //leggi il record dal file
    fread(&client, sizeof(struct clientData), 1, fPtr);

    if(client.acctNum == 0){
        printf("Account #%d has no information.\n", account );
    }
    else{
        printf("%-6d%-16s%-11s%10.2f\n\n", client.acctNum, client.lastName, client.firstName, client.balance );

        //Richiedi l'ammontare della transazione
        printf("%s", "Enter change ( + ) or payment ( - ); ");
        scanf("%lf", &transaction);
        client.balance += transaction; //aggiorna il saldo del record

        printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance );

        fseek(fPtr, (account - 1) * sizeof(struct clientData), SEEK_SET );

        //scrivi il record aggiornato al posto del vecchio record nel file
        fwrite( &client, sizeof(struct clientData), 1, fPtr);
    }
return;
}

//cancella un record esistente
void deleteRecord(FILE *fPtr)
{
    struct clientData client; //memorizza il record letto dal file
    struct clientData blankClient = { 0, "", "", 0.0 };

    unsigned int accountNum;//numero del conto

    //ottieni il numero del conto da cancellare
    printf("%s", "Enter account number to delete (1 - 100): ");
    scanf("%d", &accountNum);

    //sposta il puntatore del file al record corretto nel file
    fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET);

    //leggi il record del file
    fread(&client, sizeof(struct clientData), 1, fPtr);

    //stampa un messaggio d'errore se il record non esiste
    if(client.acctNum == 0){
        printf("Account %d does not exist.\n", accountNum);
    }
    else{//cancella il record
        //sposta il puntatore del file al record corretto nel file
        fseek(fPtr, (accountNum - 1) * sizeof(struct clientData), SEEK_SET );

        //sostituisci il record esistente con il record vuoto
        fwrite(&blankClient, sizeof(struct clientData), 1, fPtr);
    }
return;
}

//Crea ed inserisci un record
void newRecord(FILE *fPtr)
{
    //crea clientData con informazioni predefinite
    struct clientData client = { 0, "", "", 0.0 };

    unsigned int accountNum;//Numero del conto

    //ottieni il numero del conto da creare
    printf("%s", "Enter new account number ( 1 - 100 ): ");
    scanf("%d", &accountNum);

    //sposta il puntatore del file al record corretto nel file
    fseek(fPtr, (accountNum -1 ) * sizeof(struct clientData), SEEK_SET);

    //leggi il record dal file
    fread(&client, sizeof(struct clientData), 1, fPtr);

    //stampa un messaggio di errore se il conto esiste già
    if(client.acctNum != 0){
        printf("Account #%d already contains information.\n", client.acctNum );
    }
    else{//crea il record
        //l'utente inserisce il nome, cognome e saldo
        printf("%s", "Enter lastname, firstname, balance\n? ");
        scanf("%14s%9s%lf", client.lastName, client.firstName, &client.balance);

        client.acctNum = accountNum;

        //sposta il puntatore del file al record corretto nel file
        fseek(fPtr, (client.acctNum - 1) * sizeof(struct clientData), SEEK_SET);

        //inserisci il record nel file
        fwrite(&client, sizeof(struct clientData), 1, fPtr);
    }
return;
}

//consenti all'utente di inserire la scelta del menu
unsigned int enterChoice( void )
{
    unsigned int menuChoice; //scelta dell'utente

    //stampa le opzioni disponibili
    printf("%s", "\nEnter you choice\n"
           "1 - store a formatted tex file of accounts called\n"
           "    \"accounts.txt\" for printing\n"
           "2 - update an account\n"
           "3 - add a new account\n"
           "4 - delete an account\n"
           "5 - end program\n? ");

    scanf("%u", &menuChoice);//recevi la scelta dell'utente
return menuChoice;
}
