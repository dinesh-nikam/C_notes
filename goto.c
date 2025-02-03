#include<stdio.h>
int main(){
    int num;
    printf("enter the number");
    scanf("%d",&num);
    

    if(num%2==0){
        goto even;
    }
    else{
        goto odd;
    }
    even:
    printf("its the even number\n");
    return 0;
    odd:
    printf("its odd number");
}