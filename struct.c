#include <stdio.h>
#include <stdlib.h>



struct client
{
    char name[30];
    char address[30];;
    int nationalID;
    int age ;
    int bank_accountID;
    int Guardian;
    int Guardian_NationalID;
    char AccountStatus[30];
    int balance;
    int Password;
};



struct client client_scan(void)
{
    struct client x;


    printf("enter the name : ");
    fflush(stdin);
    string_scan(x.name);
    fflush(stdin);
    printf("enter the address : ");
    fflush(stdin);
    string_scan(x.address);
    fflush(stdin);
    printf("enter the age : ");
    fflush(stdin);
    scanf("%d",&(x.age));
    fflush(stdin);
    printf("enter the national id : ");
    fflush(stdin);
    scanf("%d",&(x.nationalID));
    if(x.age<21)
    {
        printf("enter the Guardian National ID : ");
        scanf("%d",&(x.Guardian_NationalID));

    }

    printf("enter the balance : ");
    fflush(stdin);
    scanf("%d",&(x.balance));
    fflush(stdin);
    printf("\n");

     x.AccountStatus[0]='a';
     x.AccountStatus[1]='c';
     x.AccountStatus[2]='t';
     x.AccountStatus[3]='i';
     x.AccountStatus[4]='v';
     x.AccountStatus[5]='e';


    return x;
}


