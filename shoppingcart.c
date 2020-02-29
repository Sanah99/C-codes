#include<stdio.h>
#include<stdlib.h>
typedef struct {
int code;
int quantity;
float cost;
} cartItems;


int stock[5][3]={
{0,0,0},
{1,12,100},
{2,15,200},
{3,17,150},
{4,25,250},
};

void addItem(void);
void deleteItem(void);
void updateBill(void);
void displayCart(void);

cartItems c[10];
int itemNum=0;
float totalBill=0.0;

int main(){
    int i,j ,choice;
    while(1){
    printf("\n\nItem Code\tQuantity\tPrice\n");
    for(i=1; i<5; i++){
        for(j=0; j<3; j++)
            printf("%d\t\t",stock[i][j]);
        printf("\n");
    }
    printf("\n Please enter your choice: ");
    printf("1. Add item to cart 2. Delete Item from cart 3.Display Cart Items  4. Exit : ");
    scanf("%d",&choice);
    switch(choice){
    case 1: addItem();
            break;
    case 2: deleteItem();
            break;
    case 3: displayCart();
            break;
    default: exit(0);

    }
    }

    return 0;
}
void addItem(void){
printf("\nEnter the Item Code and quantity: ");

scanf("%d%d",&c[itemNum].code,&c[itemNum].quantity);
c[itemNum].cost = c[itemNum].quantity * stock[c[itemNum].code][2];
stock[c[itemNum].code][1]-=c[itemNum].quantity;

printf("\nThe Item with code %d is added to your cart\n",c[itemNum].code);

updateBill();

itemNum++;
}
void deleteItem(void){
itemNum--;
stock[c[itemNum].code][1]+=c[itemNum].quantity;
c[itemNum].cost*=-1;
updateBill;
printf("\nThe last Item is deleted from your cart\n");
}

void updateBill(void){
totalBill+=c[itemNum].cost;
}
void displayCart(void){
int i;
printf("\nItem Code\tQuantity\t cost\n");
for(i=0; i<itemNum; i++){
        printf("%d\t\t",c[i].code);printf("%d\t\t",c[i].quantity);printf("%.2f",c[i].cost);
        printf("\n");
}
printf("\n\nThe total bill is %.2f\n",totalBill);
}

