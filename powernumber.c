// #include<stdio.h>
// #include<math.h>
// void pow_number(int, int);
// void pow_number(int base, int expo  ){
//     int result =1;
//     for(int i=0;i<=expo; i++){
//         result*=i;
//     }
//     result;


// }
// int main() {
//     int base, expo;
//     printf("enter the base value");
//     scanf("%d",&base);
//     printf("enter the exponent value");
//     scanf("%d",&expo);
// int result=pow(base,expo);
// pow_number(base,  expo );
// printf("result is %d",result); 


// }

#include <stdio.h>

void pow_number(int base, int expo) {
    int result = 1;
    for (int i = 0; i < expo; i++) {
        result *= base;
    }
    printf("Result is %d\n", result);
}

int main() {
    int base, expo;
    printf("Enter the base value: ");
    scanf("%d", &base);
    printf("Enter the exponent value: ");
    scanf("%d", &expo);
    pow_number(base, expo);
    return 0;
}