/* If the marks obtained by a student in five different subjects are
input through the keyboard, write a program to find out the
aggregate marks and percentage marks obtained by the student */

#include<stdio.h>
int main()
{
    int m1,m2,m3,m4,m5,aggregate;
    float percentage;
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);
    aggregate = m1+m2+m3+m4+m5;
    percentage = aggregate / 5;
    printf("Percentage: %f\n", percentage);
    return 0;
}