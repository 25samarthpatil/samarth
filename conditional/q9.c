//1.	Write a program to find greatest of the three numbers entered through keyboard.

#include<stdio.h>
void main()
{
    int num1,num2,num3;
    printf("\n enter value of num=");
    scanf("%d%d%d",&num1,&num2,&num3);
    (num1>num2)?printf("\n num1=%d is greatest",num1):(num2>num3)?printf("\n num2=%d is greatest",num2):printf("\n num3=%d is greatest",num3);
}