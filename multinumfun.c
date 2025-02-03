#include<stdio.h>
void multiplication(int num);
int main(){
    int num;

    printf("enter the table number ou want to print");
    scanf("%d", &num);
    multiplication( num);
}
void multiplication(int num){
    for (int i=1; i<=10; i++){
     printf("multiplication of %d is :   %d\n",num, num*i);
    }
   

}