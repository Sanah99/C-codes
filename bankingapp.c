#include<stdio.h>
#include<conio.h>
struct account{
    long int accno;
    char name[20];
    char type;
    float bal;
    int pasw;
}custmer[5]={{101,"Vaibhav",'S',10000,111},
            {102,"_Shri",'S',12000,222},
            {103,"Maya",'S',14000,333},
            {104,"Shrihari",'C',9000,444},
            {105,"Shubham",'C',2000,555}
};
int accin;
float amount;

void balance()
{
    printf("Balance = %f\n",custmer[accin].bal);
}
void deposit()
{
    printf("Enter the amount = ");
    scanf("%f",&amount);
    printf("\n");
    custmer[accin].bal=custmer[accin].bal+amount;
    balance();
}

void withdraw()
{
    printf("Enter the amount = ");
    scanf("%f",&amount);
    if(custmer[accin].bal>amount)
    {
        printf("\n");
        custmer[accin].bal=custmer[accin].bal-amount;
    }
    else
    {
        printf("The balance is inadequate\n");
    }
    balance();
}
void passbook()
{
    FILE *f;
    char bank[50]="*************PASSBOOK***************\n";
    f=fopen("passbook.txt","w+");
    fprintf(f,bank);
    fclose(f);
    f=fopen("passbook.txt","a");
    fprintf(f,"Customer name : ");
    fclose(f);
    f=fopen("passbook.txt","a");
    fprintf(f,custmer[accin].name);
    fclose(f);
    f=fopen("passbook.txt","a");
    fprintf(f,"Account number : ");
    fclose(f);
    f=fopen("passbook.txt","a");
    fprintf(f,"%d",custmer[accin].accno);
    fclose(f);
    f=fopen("passbook.txt","a");
    fprintf(f,"Account type : ");
    fclose(f);
    f=fopen("passbook.txt","a");
    fputc(custmer[accin].type,f);
    fclose(f);
    f=fopen("passbook.txt","a");
    fprintf(f,"Balance : ");
    fclose(f);
    f=fopen("passbook.txt","a");
    fprintf(f,"%f",custmer[accin].bal);
    fclose(f);
}
int main()
{
    int accnum,i,ch,flag=0,j,k=1,att=1;
    int pass;
    printf("Enter the Account number= ");
    scanf("%d",&accnum);
    accin=(accnum%100)-1;
    pass:
    printf("Enter the password\n");
    scanf("%d",&pass);
    if(pass==custmer[accin].pasw)
    {
        flag=1;
    }
    else
    {
        flag=0;
        if(k<3)
        {
            att=3-att;
            printf("Incorrect password\n");
            printf("attempts left %d\n",att);
            k++;
            goto pass;
        }
    }
    if(flag==1)
    {
    printf("Account number= %d\nName : %s\nAccount type=  %c\nBalance = %f\n",custmer[accin].accno,custmer[accin].name,custmer[accin].type,custmer[accin].bal);
        entry:
        printf("\nEnter your choice\n1 : Balance Enquiry\n2 : Deposit Amount \n3 : Withdraw Amount\n4 : passbook\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:balance();break;
            case 2:deposit();break;
            case 3:withdraw();break;
            case 4:passbook();break;
            default:printf("Enter the correct choice");break;
        }
        goto entry;
    }
}
