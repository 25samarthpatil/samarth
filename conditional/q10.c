// 1.	Write a program which takes salary from user and accordingly print designation.
/*SALARY	DESIGNATION
25001 to 40000=	Manager
15001 to 25000=	Accountant
8000 to 15000=Clerk*/

#include <stdio.h>
void main()
{
    int salary;
    printf("\n enter salary=");
    scanf("%d", &salary);

    (salary >= 25001 && salary <= 40000) ? printf("\n Manager") : (salary >= 15001 && salary <= 25000) ? printf("\n Accountant")
                                                              : (salary >= 8000 && salary <= 15000)    ? printf("\n clerk")
                                                                                                       : printf("\n no");
}