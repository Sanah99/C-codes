//C program to find pos and neg number using nested if//

#include<stdio.h>
int main()
{
    double num;
    printf("\n Enter the number:\n");
    scanf("%lf",&num);

    if(num<0)
    printf("\n You have entered a negative number.");
    else if (num>0)
    printf("\n You have entered a positive number.");
    else
    printf("\n You have entered 0.");
}
