/*
Write a C program to compute the perimeter and area of a circle with a radius of 6 inches.
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches
*/

#include<stdio.h>

int main()
{
    int radius;
    float perimeter;
    float area;

    scanf("%d",&radius);

    perimeter = 2*3.14*radius;
    area = (3.14*radius*radius);

    printf("Perimeter of the Circle = %f inches \nArea of the Circle = %f square inches",perimeter,area);

    return 0;
}