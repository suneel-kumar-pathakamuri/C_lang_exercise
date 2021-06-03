/*
 Write a C program to convert specified days into years, weeks and days.
Note: Ignore leap year.

Test Data :
Number of days : 1329
Expected Output :
Years: 3
Weeks: 33
Days: 3
*/

#include<stdio.h>

int main()
{
    int n;
    int years;
    int weeks;
    int days;

    printf("what are the number of days   : ");
    scanf("%d",&n);

    years = n/365;
    printf("Years : %d\n",years);

    weeks = (n%365)/7;
    printf("Weeks : %d\n",weeks);

    days = n-((years*365)+(weeks*7));
    printf("Days : %d\n",days);

    return 0;
}