#include<stdio.h>
int main(){
    char str[50];
    int length=0;

    printf("enter the string:\n");
    scanf("%s", &str);
    while(str[length]!= '\0'){
        length++;
    }
printf("the length of the string is :%d",length);


}