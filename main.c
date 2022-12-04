#include<stdio.h>
#include<stdlib.h>
//#include "stack.h"
//#include "list.h"
struct client
{
    char name[30];
    char address[30];
    int nationalID;
    int age ;
    int bank_accountID;
    int Guardian;
    int Guardian_NationalID;
    char AccountStatus[30];
    int balance;
    int Password;
};
struct client client_scan(void);


int main()
{
    struct client s[10];
//*************** inter string active *******************
    char states[30]="active";


    //**************************************

    int num_c=0,flag=0;
    int out=0,u=0,y=0,q=0;

    int random_pass=123456;
    int random_account=45;
    int input1;
    char adminname[30];
    char adminusername[30]="Mostafa";
    char adminpass[30];
    char adminpassword[30]="123456";

    while(1)
    {
        printf("\n\n\t ************<<WELLCOME>>*********** \n\n");

        printf("1-Admin window\n2-Client window\n");
        printf("Enter num:");
        scanf("%d",&input1);

        /************************************** admin window *************************/

        if(input1 == 1)
        {

            printf("Enter username: ");
            fflush(stdin);
            string_scan(adminname);
            printf("Enter password: ");
            fflush(stdin);
            string_scan(adminpass);
            out=0;
            if(string_compare(adminpassword,adminpass)&& string_compare(adminusername,adminname))
            {

                while(out==0)
                {
                    printf("\n1-create new acount\t2-open existing acount\t3-Exit system\n");
                    printf("Enter num:");
                    fflush(stdin);
                    scanf("%d",&input1);

                    if(input1==1)
                    {
                        s[num_c]=client_scan();
                        s[num_c].Password=random_pass;
                        s[num_c].bank_accountID=random_account;


                        num_c++;
                        random_account++;
                        random_pass++;

                    }

                    else if(input1==2)
                    {
                        printf("Enter Bank Account ID :");
                        fflush(stdin);
                        scanf("%d",&input1);
                        fflush(stdin);

                        for( y=0; y<num_c; y++)
                        {
                            if(input1 == s[y].bank_accountID)
                            {
                                out=0;
                                while(out==0)
                                {
                                    printf("\n\n1-Make Transaction\n2-Change Account Status\n3-Get Cash\n4-Deposit in Account\n5- Return to main menu\n");
                                    printf("Enter num :");
                                    fflush(stdin);
                                    scanf("%d",&input1);
                                    fflush(stdin);
                                    if(input1==1)
                                    {
                                        printf("Enter another Bank Account ID :");
                                        fflush(stdin);
                                        scanf("%d",&input1);
                                        fflush(stdin);
                                        for( u=0; u<num_c; u++)
                                        {
                                            if(input1 == s[u].bank_accountID  && s[u].AccountStatus=="active" && s[y].AccountStatus=="active")
                                            {
                                                flag=1;
                                                printf("Enter mount transfer :");
                                                fflush(stdin);
                                                scanf("%d",&input1);
                                                fflush(stdin);
                                                if(input1<s[y].balance)
                                                {
                                                    s[u].balance=s[u].balance+input1;
                                                    s[y].balance=s[y].balance-input1;
                                                    printf("\n *********tranfer succesfully *******");
                                                    u=100;

                                                }
                                                else
                                                {
                                                    printf("\n *********tranfer faild try again later *******");
                                                    u=100;


                                                }

                                            }
                                        }
                                        if(flag==0)
                                        {
                                            printf("\n *********tranfer faild try again later *******");
                                            u=100;


                                        }



                                    }
                                    else if(input1==2)
                                    {
                                        printf("\nEnter State to want :");
                                        fflush(stdin);
                                        string_scan( s[y].AccountStatus);
                                        fflush(stdin);

                                        printf("\nchange State succesfully \n");


                                    }


                                    else if(input1==3)
                                    {
                                        printf("\nEnter mount Get cash :");
                                        fflush(stdin);
                                        scanf("%d",&input1);
                                        fflush(stdin);
                                        if(input1<s[y].balance)
                                        {
                                            s[y].balance=s[y].balance-input1;
                                            printf("\n *********Get cash succesfully *******");

                                        }
                                        else
                                        {
                                            printf("\n *********get cash faild try again later *******");


                                        }


                                    }

                                    else if(input1==4)
                                    {
                                        printf("\nEnter mount Deposit in Account :");
                                        fflush(stdin);
                                        scanf("%d",&input1);
                                        fflush(stdin);

                                        s[y].balance=s[y].balance+input1;
                                        printf("\n *********Deposit in Account succesfully *******");



                                    }

                                    else if (input1==5)
                                    {
                                        printf("\n *********Return to main menu *******\n\n");
                                    }
                                }
                                y=100;
                            }
                        }
                    }
                    else if(input1==3)
                    {
                        out=1;

                    }
                    else
                    {
                        printf("\n\n <incorrect choose ,please try again>\n\n");

                    }



                }
            }//***********************************

            else
            {
                printf("\n\n <incorrect username or password ,please try again>\n\n");
            }


        }

        /************************************* client window ********************/
        else if(input1== 2)
        {
            printf("\nEnter Bank Account ID :");
            fflush(stdin);
            scanf("%d",&input1);
            fflush(stdin);

            for( y=0; y<num_c; y++)
            {
                if(input1 == s[y].bank_accountID)
                {
                    printf("Enter your password :");
                    fflush(stdin);
                    scanf("%d",&input1);
                    fflush(stdin);

                    if(input1== s[y].Password)
                    {
                        out=0;
                        while(out==0)
                        {
                            printf("\n\n1-Make Transaction\n2-Change Account password\n3-Get Cash\n4-Deposit in Account\n5- Return to main menu\n");
                            printf("Enter num :");
                            fflush(stdin);
                            scanf("%d",&input1);
                            fflush(stdin);
                            if(input1==1)
                            {
                                printf("Enter another Bank Account ID :");
                                fflush(stdin);
                                scanf("%d",&input1);
                                fflush(stdin);
                                for( u=0; u<num_c; u++)
                                {
                                    if(input1 == s[u].bank_accountID && s[u].AccountStatus=="active" && s[y].AccountStatus=="active")
                                    {
                                        flag=1;
                                        printf("Enter mount transfer :");
                                        fflush(stdin);
                                        scanf("%d",&input1);
                                        fflush(stdin);
                                        if(input1<s[y].balance)
                                        {
                                            s[u].balance=s[u].balance+input1;
                                            s[y].balance=s[y].balance-input1;
                                            printf("\n *********tranfer succesfully *******");
                                            u=100;

                                        }
                                        else
                                        {
                                            printf("\n *********tranfer faild try again later *******");
                                            u=100;


                                        }

                                    }
                                }
                                if(flag==0)
                                {
                                    printf("\n *********tranfer faild try again later *******");
                                    u=100;


                                }



                            }
                            else if(input1==2)
                            {
                                q=0;
                                while(q==0)
                                {

                                    printf("\nEnter your old password :");
                                    fflush(stdin);
                                    scanf("%d",&input1);
                                    fflush(stdin);

                                    if(input1==s[y].Password)
                                    {
                                        printf("\nEnter your new password :");
                                        fflush(stdin);
                                        scanf("%d",&input1);
                                        fflush(stdin);

                                        s[y].Password=input1;
                                        printf("\n change password succesfully");
                                        q=1;

                                    }
                                    else
                                    {
                                        printf("\n incorrect password try again");

                                    }
                                }

                            }

                            else if(input1==3)
                            {
                                printf("\nEnter mount Get cash :");
                                fflush(stdin);
                                scanf("%d",&input1);
                                fflush(stdin);
                                if(input1<s[y].balance)
                                {
                                    s[y].balance=s[y].balance-input1;
                                    printf("\n *********Get cash succesfully *******");

                                }
                                else
                                {
                                    printf("\n *********get cash faild try again later *******");


                                }


                            }

                            else if(input1==4)
                            {
                                printf("\nEnter mount Deposit in Account :");
                                fflush(stdin);
                                scanf("%d",&input1);
                                fflush(stdin);

                                s[y].balance=s[y].balance+input1;
                                printf("\n *********Deposit in Account succesfully *******");



                            }

                            else if (input1==5)
                            {
                                printf("\n *********Return to main menu *******\n\n");
                                out=1;
                            }
                        }

                        y=100;
                    }
                    else
                    {
                        printf("\n *********password incorrect please try again *******\n\n");

                    }
                }

                else
                {
                    printf("\n *********Acount id incorrect please try again *******\n\n");
                }
            }







        }






        /********************************** in corret choose *****************/

        else
        {
            printf("\n\n <incorrect choose ,please try again>\n\n");
        }







    }






}
