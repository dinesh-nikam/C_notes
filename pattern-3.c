// *****
// *   *
// *   *
// *   *
// *****

#include<stdio.h>
int main(){
    int num ;
    printf("enter the number ");
    scanf("%d", &num);
    // for(int i=1; i<num; i++){
    //     for(int j=1; j<num; j++){
    //         if(i==1 || j==1 || i==num-1 || j==num-1){
    //             printf("*");

    //         }
    //         else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }
    for ( int i=1; i<= num; i++){
        for( int j=1;j<=num; j++){
        if((i==1 || i==num)||(j==1 || j==num) ){
            printf("*");
        }
         else{
            printf(" ");
         }
        }
         printf("\n");
    }
}