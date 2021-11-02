/* Two numbers are input throught the keyboard into two locations C and D. 
Write a program to interchange the contents of C and D */

#include<stdio.h>
int main()
{
    int c,d,temp;
    printf("Enter C and D Numbers: ");
    scanf("%d %d",&c,&d);
    temp = c;
    c = d;
    d = temp;
    printf("C = %d D = %d\n",c,d);
    return 0;
}
