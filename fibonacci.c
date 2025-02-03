#include<stdio.h>
int main(){
    int n, num1=0, num2=1,i=1, num3=0;
    printf("enter the n value");
scanf("%d",&n);//5
printf("%d %d ",num1,num2);
  while(i<=n-2)//4<=3
  {
    num3=num1+num2;//1+2=3
    printf("%d ",num3);//0 1 1 2 3
    num1=num2; //2
    num2=num3;//3
    i++;
  }
}