//Write a program to check whether entered character is special symbol or not.

#include<stdio.h>
void main()
{
    char ch;
    printf("\n enter character=");
    scanf("%c",&ch);
    (((ch>='A'&& ch<='Z')|| (ch>='a'&& ch<='z')||(ch>='0'&& ch<='9'))!=0)?printf("\n not special symbol"):printf("\n  special symbol");
}