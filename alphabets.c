#include<stdio.h>
int main(){
    printf("Alphabets from A-Z(UPPERCASE) :\n ");
    for (char ch ='A'; ch<='Z'; ++ch){
        printf("%c\n",ch);
    }
     for (char ch =97; ch<=122; ++ch){
        printf("%c ",ch);
    }
    // for (char ch =65; ch<=90; ++ch){
    //     printf("%c ",ch);
    // }
}
