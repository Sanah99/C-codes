#include<stdio.h>
void display(float s){
    printf("\nThe result is %.2f\n",s);
}
float addition(float x, float y){
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
        return x/y;
    else return 0.0;
}
int main(){
float a,b,ans;
char op;
printf("\nEnter the 2 numbers: ");
scanf("%f%f",&a,&b);
printf("\nEnter the operator(+,-,*,/): ");
scanf(" %c",&op);
float (*ptrOperation)(float,float);
void (*ptrDisplay)(float)=display;
switch(op){

case '+':ptrOperation=addition;
        break;
case '-':ptrOperation=subtract;
        break;
case '*':ptrOperation=multiply;
        break;
case '/':ptrOperation=divide;
        break;
default: printf("Invalid operator");
}

ans=ptrOperation(a,b);
printf("\nThe result is %.2f\n",ans);
return 0;
}
