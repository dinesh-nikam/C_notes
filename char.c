#include<stdio.h>
int main(void)
{
    char ch='A';
    printf("\n sizeof(ch)= %d",sizeof(ch));  //1
    printf("\n sizeof(char)= %d",sizeof(char));  //1

    printf("\n sizeof(11)= %d",sizeof(11));  //4 
    printf("\n sizeof(int)= %d",sizeof(int)); //4
    printf("\n sizeof(11.2)= %d",sizeof(11.2)); //8
    printf("\n sizeof(double)= %d",sizeof(double));//8
    printf("\n sizeof(11.2f)= %d",sizeof(11.2f));  //4
    printf("\n sizeof(11.2F)= %d",sizeof(11.2F)); //4
    printf("\n sizeof(float)= %d",sizeof(float));//4

    
    return 0;
}