#include<stdio.h>
int main()
{
    int age;
printf(" enter your age");
scanf("%d",&age);
if(age>0){
if (age>=18){
    printf("the person age is positive and eligible for vote ");

}
else{
    printf("the person age is positive but not eligible for vote");
}

}
else{
    printf("the age should be positive");
}
}