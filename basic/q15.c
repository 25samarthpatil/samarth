// Write a program to swap values of two variables using third variable.

#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("\n enter value of x and y=");
    scanf("%d%d",&x,&y);
    printf("before swap\n x=%d and y=%d",x,y);

    //logic
    temp=x;
    x=y;
    y=temp;

   printf("\n after swap\n x=%d and y=%d",x,y);

    return 0;

}