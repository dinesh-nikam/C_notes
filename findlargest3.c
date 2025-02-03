#include<stdio.h>
int main()
{
//     1.Find the Largest of Three Numbers
// Use relational and logical operators to compare three numbers.
int num1, num2, num3;
printf("enter the first number:");
scanf("%d", &num1);
printf("enter the second number:");
scanf("%d", &num2);
printf("enter the third number:");
scanf("%d",&num3);
if (num1>num2 && num1>num3){
printf("%d is greater than %d & %d",num1,num2,num3);
}
else if(num2>num1 && num2>num3){
    printf("%d is greater than %d & %d",num2,num1,num3);

}
else if(num3>num1 && num3>num2)
{
    printf("%d is greater than %d & %d",num3,num1,num2);

}

}