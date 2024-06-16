#include<stdio.h>
int main()
{
    for (int i = 1; i <= 5; i++)// row
    {
        /* code */
        for (int j = i==2; j <= 3; j++)// space
        {
             printf(" ");
            for (int k = 1; k <= 5; k++)// col
            {
                printf("* ");
            }
            
        }
        printf("\n");
    }
    return 0;
}