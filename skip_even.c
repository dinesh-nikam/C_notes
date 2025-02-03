#include<stdio.h>
int main(){
//     Skip Even Numbers (using continue)
// Write a program that prints only the odd numbers from a list, 
// skipping the even numbers using the continue statement.

for( int list=1; list<=10; list++){
    if(list%2==0){
continue;
    }
   

    
printf("odd number are %d\n",list);
}

}