/*
Write a C program that accepts three integers and find the maximum of three.
Test Data :
Input the first integer: 25
Input the second integer: 35
Input the third integer: 15
Expected Output:
Maximum value of three integers: 35
*/

#include<stdio.h>

int main()
{
    int a,b,c,max;

    printf("Type the 3 integers that you wish to compare");
    scanf("%d %d %d",&a,&b,&c);

    if (a>b && a>c)
    {
        max = a;
    }
    else if (b>a && b>c)
    {
        max = b;
    }
    else
    {
        max = c;
    }

    printf("Maximum value of three integers is %d",max);

    return 0;
}

