// Write a program to check whether year is leap year or not

#include <stdio.h>
void main()
{
    int year;
    printf("\n enter year=");
    scanf("%d", &year);
    (year % 4 == 0) ? printf("\n year is leap year") : printf("\n not leap year");
}