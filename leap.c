// 4. Determine Leap Year
//         o Write a program to check if a given year is a leap year.5. Grade Calculation
//             o Create a program to assign
//             grades(A, B, C, etc.) based on the marks using if -
//     else conditions.
#include<stdio.h>
int main(void)
{
    int year;
    printf("enter the year :\n");
    scanf("%d", &year);
    if ((year%4==0 && year%100 != 0 )|| year%400==0) {
        printf("%d is leap year\n", year);

    }
    else{
        printf("%d is not leap year",year);
    }
}
