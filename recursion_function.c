#include<stdio.h>

// parameters
// 1.base condition
// 2. recurssion equation
// 3. stack memory
int fact(int);
int main(){
    int num;
    printf("enter the num");
    scanf("%d", &num);
    int result=fact(num);
printf("factorial =%d",result);

}
int fact(int num){
    //base condition
    if(num==1){
 return 1;
    }
    return num*fact(num-1);

       

    
}