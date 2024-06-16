//	Write a program to swap values of two variables without using third variable.

#include <stdio.h>

int main()
{
    int x, y;
    printf("\n enter value of x and y=");
    scanf("%d%d", &x, &y);
    printf("\n before swap\n x=%d and y=%d", x, y);

    // logic
    x = x + y;
    y = x - y;
    x = x - y;

    printf("\n after swapping\n x=%d and y=%d", x, y);
    return 0;
}