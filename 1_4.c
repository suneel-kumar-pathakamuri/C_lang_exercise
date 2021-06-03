/*
Write a C program to print the following characters in a reverse way.
Test Characters: 'X', 'M', 'L'

Expected Output:
The reverse of XML is LMX
*/

#include<stdio.h>

int main()
{
    char ch_1;
    char ch_2;
    char ch_3;

    scanf("%c %c %c",&ch_1,&ch_2,&ch_3);   // **space between %c is given to ensure there is no bugs between the operators**

    printf("The reverse of %c%c%c is %c%c%c",ch_1,ch_2,ch_3,ch_3,ch_2,ch_1);

    return 0;
}