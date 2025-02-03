#include<stdio.h>
int main(void)
{
    int no1,no2;
    char ch;
    printf("\n Enter no1:");
    scanf("%d",&no1);
    printf("\n Enter no2:");
    scanf("%d",&no2);
    printf("\n Eter Char::");
    getchar();
    scanf("%c ", &ch);

    printf("\n no1=%d no1=%u", no1,&no1);
    printf("\n no2=%d no2=%u", no2,&no2);
    printf("\n ch=%c ch=%d ch=%u",ch, ch,&ch);
    return 0;
    
}