// Find the Sum Until Negative Number (using break)
// Write a program that asks the user for numbers and calculates the sum. 
// If the user enters a negative number, the loop should stop and print the final sum using break.
#include<stdio.h>
int main(){
    int num ,sum=0;

    printf("Enter the Number:");
    scanf("%d",&num);
    for(int i=0;i<=num;i++){
 sum+=i;
break;

    }
    printf("sum are %d",sum);
    

}