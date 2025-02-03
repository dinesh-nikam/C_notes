#include<stdio.h>
int main(){
    int a, b, no;
    printf("enter the value for a");
    scanf("%d" ,&a);

printf("enter the value for b");
    scanf("%d" ,&b);
printf("**********************Calculator Menu*************************\n");
printf("enter the number 1. additon ,2. substractin 3. multiplication 4. division");
scanf("%d", &no);
switch (no)
{
case 1:
    /* code */
    printf("addtion of two number a &b is%d" , a+b);
    
    break;

    
    case 2:
    /* code */
    printf("substraction of two number a &b is%d" , a-b);
    
    break;

    case 3:
    /* code */
    printf("multiplication of two number a &b is%d" , a*b);
    
    break;
    case 4:
    /* code */
    printf("division of two number a &b is%d" , a/b);
    
    break;

default:
printf("you have entered wrong input");
    break;
}


    
}