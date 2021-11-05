/* If cost price and selling price of an item are input through the
keyboard, write a program to determine whether the seller has
made profit or incurred loss. Also determine how much profit he
made or loss he incurred. */

#include<stdio.h>
int main()
{
    float profit,loss,cp,sp;
    printf("Enter cost price and selling price: ");
    scanf("%f %f",&cp,&sp);
    profit = sp - cp;
    loss = cp - sp;
    if (profit > 0)
    {
        printf("Seller made profit of RS: %f\n",profit);
    }
    if (loss > 0)
    {
        printf("Seller made loss of RS: %f\n",loss);
    }
    if (profit ==0)
    {
        printf("There is no profit,no loss\n");
    }
    
    return 0;
}