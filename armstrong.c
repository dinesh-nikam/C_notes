#include<stdio.h>
#include<math.h>
int check_armstrong(int);


int main()
{
  int num;
  printf("Enter the num value\n");
  scanf("%d",&num);
  int result=check_armstrong(num);
  if(result==1)
  {
    printf("its armstrong number\n");
  }
  else{
    printf("its not armstrong number\n");
  }
}


int check_armstrong(int num)//356
{
  int temp=num,original=num,no_of_digit=0,digit=0,sum=0;//356


  //1.calculate no of digits
  while(temp!=0)//0!=0
  {
    digit=temp%10;//3%10=3
    no_of_digit++;//3
    temp=temp/10;//0
  }
  //calculate armstrong number
  while(original!=0)//15!=0
  {
    digit=original%10;//
    sum=sum+pow(digit,no_of_digit);//27
    original=original/10;//15
  }


  if(sum==num)
  {
    return 1;
  }
  else{
    return 0;
  }
}
