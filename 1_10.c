/*
Write a C program that accepts two integers from the user and calculate the product of the two integers.
Test Data :
Input the first integer: 25
Input the second integer: 15
Expected Output:
Product of the above two integers = 375
*/

#include<stdio.h>

int main()
{
    int a,b,c;

    printf("type the two integers ......");
    scanf("%d %d",&a,&b);

    printf("Product of the above two integers = %d",a*b);

    return 0;
}