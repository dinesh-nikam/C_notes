#include<stdio.h>
int sum_of_digit();
int main(){
    int num;

    printf("enter the sum value");
    scanf("%d", &num);
    int result = sum_of_digit(num);
    printf("sum of digit in %d is  %d", num, result);



}
int sum_of_digit(int num)
{
if(num==0){
    return 0;

}
return(num%10+sum_of_digit(num/10));
}