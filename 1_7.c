/*Write a C program to display multiple variables.
Sample Variables :
a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
Declaration :
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;
*/

#include<stdio.h>

int main()
{
    int a,b;
    //int b;
    long ax;
    short s;
    float x;
    double dx;
    char c;
    unsigned long ux;

    scanf("%d %d %li %hd %f %lf %c %lu",&a,&b,&ax,&s,&x,&dx,&c,&ux);

    printf("%d",a+c);

    return 0;
}