//     *
//    ***
// 22*****22
// 1*******1
// *********
//  *******
//   *****
//    ***
//     *

#include<stdio.h>
int main(){
     int num ;
    printf("enter the number ");
    scanf("%d", &num);
    
    for (int i=1;i<=num;i++)//2<=4
    {
       //print space  
        for(int j=1;j<=num-i;j++)//1<=2      
        {
            printf(" ");
        }
    
        //print star
        for(int k=1;k<=(2*i-1);k++)//1<=3      i=1    *
        {
            printf("*");
        }
        printf("\n");
    }
    for (int i = num; i >= 1; i--) { 
        for (int j = 1; j <= num - i; j++) {
            printf(" ");
        }

    
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}




