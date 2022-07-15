#include <stdio.h>
#include <stdlib.h>
int menu(){
    int item;
    int quantity;
    float paid;
    printf("Welcome to Zetech C snack shop! \n");
    printf("\tToday's Menu\n");
    printf("1.Hamburger KES 50\n");
    printf("2.kebab KES 90\n");
    printf("3.fries KES 100\n");
    printf("Enter item no.: ");
    scanf("%d",&item);
    printf("enter item quantity: ");
    scanf("%d",&quantity);
 switch (item)
 {
 case 1:
    printf(" ======  Item added to cart  ========= \n");
    int total = 50 * quantity;
    printf("Sub total: %d \n",total);
    printf("VAT at 16 percent: %.2f \n", total * 0.16);
    printf("Total amount: %.2f \n", total +  total * 0.16);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %.2f\n",paid - total + total * 0.16 );
    printf("THANK TOU AND COME AGAIN");
    break;
 case 2:
    printf(" ======  Item added to cart  ========= \n");
    int total1 = 90 * quantity;
    printf("Sub total: %d \n", total1);
    printf("VAT at 16 percent: %.2f \n", total1 * 0.16);
    printf("Total amount: %.2f \n", total1 +  total1 * 0.16);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %.2f\n",paid - total1 + total1 * 0.16 );
    printf("THANK TOU AND COME AGAIN");
    break;
 case 3:
    printf(" ======  Item added to cart  ========= \n");
    int total2 = 100 * quantity;
    printf("Sub total: %d\n", total2);
    printf("VAT at 16 percent: %.2f \n", total2 * 0.16);
    printf("Total amount: %.2f \n", total2 +  total2 * 0.16);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %.2f\n",paid - total2 + total2 * 0.16 );
    printf("THANK TOU AND COME AGAIN");
    break;

 default:printf("INVALID CHOICE"); menu();
    break;
 }


    return item;

}
int main(){
 menu();
};




