#include<stdio.h>
void display(float);
float add(float,float);
float subtract(float,float);
float multiply(float,float);
float divide(float,float);

int main(){
    float a,b,ans;
    char op;
    printf("\n\nEnter the 2 numbers: ");
    scanf("%f%f",&a,&b);

    printf("Enter the arithmetic operator(+,-,*,/): ");
    getchar();
    scanf("%c",&op);


    switch(op){
    case '+':ans=add(a,b);
            break;

    case '-':ans=subtract(a,b);
            break;

    case '*':ans=multiply(a,b);
            break;

    case '/':ans=divide(a,b);
            break;
    default: printf("Invalid operator");
    }
    display(ans);

    return 0;
}

void display(float result){
printf("\nThe result is %.2f",result);
}
float add(float x, float y){
return x+y;
}
float subtract(float x, float y){
return x-y;
}
float multiply(float x, float y){
return x*y;
}
float divide(float x, float y){
if(y!=0)
    return (float)x/y;
else
    return 0.0;
}
