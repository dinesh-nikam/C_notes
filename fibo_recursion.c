#include<stdio.h>


int fibonacci_num(int );
int main(){
    int num;
    printf("enter the num");
    scanf("%d", &num);
    // int fibo_num=fibonacci_num(num);
    // printf("%d",num);
   

  for(int i=0;i<=num;i++)
  {
    int fibo_term_val=fibonacci_num(i);
    printf("%d ",fibo_term_val);
  }


}
int fibonacci_num(int num){
    //base condition
    if(num==0|| num ==1){
 return num;
    }
    return fibonacci_num(num-1)+ fibonacci_num(num-2);

       

    
}