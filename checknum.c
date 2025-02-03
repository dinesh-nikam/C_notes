#include<stdio.h>

int main(){
//     2. Check if a Number is Positive, Negative, or Zero
// Use relational operators to determine the category of the number.
int num1;
printf("enter the  number:");
scanf("%d", &num1);
if (num1==0){
    printf("%d is zero number", num1);

}
else if(num1>=0){
    printf("%d is positive number", num1);

}
else{
printf("%d is negative number", num1);
}
}