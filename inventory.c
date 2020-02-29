#include<stdio.h>
FILE *fp;
struct inv{
    int ano;
    char name[10];
    float price;
};
int n=0;
int ch;
void addasset()
{
    struct inv i[n+1];
    fp=fopen("inventory.txt","a");
    printf("Enter the asset number");
    scanf("%d",&i[n].ano);
    fprintf(fp,"Asset number : %d\n",i[n].ano);
    printf("Enter the asset name");
    getchar();
    gets(i[n].name);
    fprintf(fp,"Asset name : %s\n",i[n].name);
    printf("Enter the asset price");
    scanf("%f",&i[n].price);
    fprintf(fp,"Asset price : %f\n",i[n].price);
    fclose(fp);
}
void clear()
{
    fp=fopen("Inventory.txt","w+");
    fprintf(fp,"\n");
    fclose(fp);
}
void info()
{
    char n;
    fp=fopen("Inventory.txt","r");
    while(!feof(fp))
    {
        fscanf(fp,"%c",&n);
        printf("%c",n);
    }
    fclose(fp);
}
void copy()
{
    FILE *p;
    char n;
    fp=fopen("Inventory.txt","r");
    p=fopen("subinventory.txt","w");
    while(!feof(fp))
    {
        fscanf(fp,"%c",&n);
        fprintf(p,"%c",n);
    }
    fclose(p);
    fclose(fp);
}
int main()
{
    fp=fopen("inventory.txt","w+");
    fprintf(fp,"#########INVENTORY###########\n");
    fclose(fp);
    while(1)
    {

    printf("Enter your choice\n1. Add item\n2.Info\n3.Clear\n4.Exit\n");
    scanf("%d",&ch);

    switch(ch)
    {
    case 1 :
        addasset();
        break;
    case 2:
        info();
        break;
    case 3:
        clear();
        break;
    case 4:
        copy();
        break;
    default:
        printf("Incorrect choice\n");
        break;
    }
    }
}
