/*
Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches.
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches
*/

#include<stdio.h>

int main()
{
    int height;
    int width;
    int perimeter;
    int area;

    scanf("%d %d",&height,&width);

    perimeter = 2*(height+width);
    area = height*width;

    printf("Perimeter of the rectangle = %d inches \n Area of the rectangle = %d square inches",perimeter,area);

    return 0;
}