// 	Write a program to read a lowercase letter and a uppercase letter from user. Print their corresponding opposite cases.

#include<stdio.h>
int main()
{
    int ascii;
    char upper,lower,ch;

// print lower case    
    // printf("\n enter upper charater=");
    // scanf("%c",&upper);
    // ascii=upper+32;
    // printf("\n lower char of %c=%c",upper,ascii);

// print upper case
    // printf("\n enter lower charater=");
    // scanf("%c",&lower);
    // ascii=lower-32;
    // printf("\n lower char of %c=%c",lower,ascii);


//----------------------------------------------  OR  -------------------------------------------------//


printf("\n enter character=");
scanf("%c",&ch);

    if(ch>=65 && ch<=91)
    {
        printf("\n %c character lower case is=%c",ch,ch+32);// print lower case
    }
    else
    {
        printf("\n %c character upper case is=%c",ch,ch-32);// print upper case
    }
     
     return 0;
}