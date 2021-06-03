/*
Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.
Test Data :
Weight - Item1: 15
No. of item1: 5
Weight - Item2: 25
No. of item2: 4
Expected Output:
Average Value = 19.444444
*/

#include<stdio.h>

int main()
{
    float w1,n1;
    float w2,n2;
    float sum,n;
    float avg;

    printf("Type in the weight and no.on Item-1  :     ");
    scanf("%f",&w1);
    scanf("%f",&n1);
    printf("Type in the weight and no.on Item-2  :     ");
    scanf("%f",&w2);
    scanf("%f",&n2);

    //sum = (w1*n1)+(w2*n2);
    //n = n1 + n2;
    avg = ((w1*n1)+(w2*n2))/(n1+n2);

    printf("Average Value = %f",avg);

    return 0;
}