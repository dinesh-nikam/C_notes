#include<stdio.h>
int power(int base , int exp);
int main(){
    int base, exp;
    printf("enter he base value and exponent value");
    scanf("%d %d", &base, &exp);

int result= power(base,exp);
printf("power=%d",result);


}
int power(int base,int exp)
{
if(exp==0){
    return 1;

}
return base *power(base,exp-1);
}