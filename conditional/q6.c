//1.	Write a program to check whether entered alphabet is lowercase letter or uppercase letter.

#include<stdio.h>
void main()
{
    char alphabet;
    printf("\n enter alphabet=");
    scanf("%c",&alphabet);
    (alphabet>='A'&& alphabet<='Z')?printf("\n upper case alphabet"):printf("\n lower case alphabet");
}