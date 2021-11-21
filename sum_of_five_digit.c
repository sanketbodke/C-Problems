/* If a five digit number is input through the keyboard, write a program to calculate the sum of its digits. */

#include<stdio.h>
int main()
{
    int d5,d4,d3,d2,d1,enter_num,sum;
    printf("Enter five digit number: ");
    scanf("%d",&enter_num);
    d5 = enter_num % 10;
    enter_num = enter_num / 10;
    d4 = enter_num % 10;
    enter_num = enter_num / 10;
    d3 = enter_num % 10;
    enter_num = enter_num / 10;
    d2 = enter_num % 10;
    enter_num = enter_num / 10;
    d1 = enter_num % 10;
    sum = d5 + d4 + d3 + d2 + d1;
    printf("Sum of five digit: %d\n",sum);
    return 0;
}