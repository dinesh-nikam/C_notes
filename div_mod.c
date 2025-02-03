#include<stdio.h>
int main(){
//     .  Check if a Number is Divisible by Both 3 and 5
// Use the modulus operator % and logical &&.
int num;
printf("enter the number:\n");
scanf("%d",&num );
if(num%3 && num%5){
    printf("the %d is divisible by 3&5", num);

}
else{
    printf("the %d is not divisible by 3& 5 ", num);
}
}