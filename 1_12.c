/*
Write a C program that accepts an employee's ID, total worked hours of a month and the amount he received per hour.
Print the employee's ID and salary (with two decimal places) of a particular month.

Test Data :
Input the Employees ID(Max. 10 chars): 0342
Input the working hrs: 8
Salary amount/hr: 15000
Expected Output:
Employees ID = 0342
Salary = U$ 120000.00
*/

#include<stdio.h>

int main()
{
    int id;
    float hrs,pay,salary;

    printf("Please type in your ID : ");
    scanf("%d",&id);
    printf("How many hours did you work :  ");
    scanf("%f",&hrs);
    printf("What is your pay/hour : ");
    scanf("%f",&pay);

    salary = pay*hrs;

    printf("Employees ID = %d\n",id);
    printf("Salary = %.2f $",salary);


    return 0;
}