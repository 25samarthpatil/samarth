// 	Write a program to read character from user. Print its next and previous character.

#include<stdio.h>
int main()
{
    char ch;
    printf("\n enter character=");
    scanf("%c",&ch);
    printf("\n%c",ch);

    // logic
    printf("\n after=%c",ch+1);
    printf("\nbefore=%c",ch-1);
    return 0;
}