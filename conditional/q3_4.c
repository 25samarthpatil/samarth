#include <stdio.h>
void main()
{
    int num;
    printf("\n enter value of num=");
    scanf("%d", &num);
 // 1.	Write a program to check whether number is even or odd.
    // num%2==0?printf("\n even"):printf("\n odd");

 // 1.	Write a program to check whether number is positive or negative
    num > 0 ? printf("\n entered number is positive") : printf("\n entered num is negative");
}