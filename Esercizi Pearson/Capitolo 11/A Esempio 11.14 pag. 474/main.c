#include <stdio.h>

struct clientData{
    unsigned int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
};

int main( void )
{
    FILE *filePtr;

    int result;
    struct clientData client = { 0, "", "", 0.0 };

    if( (filePtr = fopen("credit.dat", "rb") ) == NULL ){
        puts("File could not be opened.");
    }
    else{
        printf( "%-6s%-16s%-11s%10s\n", "Acct", "Last Name", "First Name", "Balance" );

        while( !feof(filePtr)){
            result = fread( &client, sizeof(struct clientData), 1, filePtr);

            if(result != 0 && client.acctNum != 0 ){
                printf("%-6d%-16s%-11s%10.2f\n", client.acctNum, client.lastName, client.firstName, client.balance );
            }
        }
    fclose(filePtr);
    }
return 0;
}
