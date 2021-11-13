/* If a five-digit number is input through the keyboard, write a
program to reverse the number */

#include<stdio.h>
int main()
{
    int enter_num,d5,d4,d3,d2,d1;
    long int reverse_number;
    printf("\nEnter five digit number: ");
    scanf("%d",&enter_num);
    d5 = enter_num % 10;  //5th digit
    enter_num = enter_num / 10; // remaining digits
    d4 = enter_num % 10; //4th digit
    enter_num = enter_num / 10;  // remaining digits
    d3 = enter_num % 10;  //3rd digit
    enter_num = enter_num / 10; //remaining digits
    d2 = enter_num % 10; //second digit
    enter_num = enter_num / 10; //remaining digits
    d1 = enter_num % 10; //1st digit
    reverse_number = d5 * 10000 + d4 * 1000 + d3 * 100 + d2 * 10 + d1;
    printf("\nReverse numbers: %ld",reverse_number);
    // specifier %ld is used for printing a long integer
    return 0;
}