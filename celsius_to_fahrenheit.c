/* Temperature of a city in Celsius degrees is input through the
keyboard. Write a program to convert this temperature into
Fahrenheit. */

#include <stdio.h>
int main()
{
    float f,c;
    printf("Enter temperature in celsius: ");
    scanf("%f",&c);
    f = (c*5/9)+32;
    printf("Temperature in fahrenheit: %f",f);
    return 0;
}