#include <stdio.h>
int main()
{
    int num1, num2;
    printf("\n enter value of num1 and num2=");
    scanf("%d%d", &num1, &num2);

// 1.	Write a program to find maximum of two numbers.

    //num1 > num2 ? printf("\n %d is maximum", num1) : printf("\n %d is maximum", num2);

//-------------------------------------------------------------------------------------------------------------

// 1.	Write a program to find minimum between two numbers.
    
    num1 < num2 ? printf("\n %d is minimum", num1) : printf("\n %d is minimum", num2);

    return 0;
}