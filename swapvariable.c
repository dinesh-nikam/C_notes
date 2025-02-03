//wap to swap the two number without using third variable(function)
#include<stdio.h>
 void swap_without_third_variable(int, int);
int main(){

int a, b;
printf("enter number a and b");
scanf("%d %d ", &a ,&b);
printf("before swapping a=%d ,b=%d" , a,b);
swap_without_third_variable(a,b);

}
void swap_without_third_variable(int a, int b)
{
    a= a+b;
    b=a-b;
    a=a-b;
    printf("after swapping a=%d,b=%d ",a,b);

}