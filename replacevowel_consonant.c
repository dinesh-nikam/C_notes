#include <stdio.h>
int main()
{
    char s1[15];

    printf("enter any string");
    scanf("%s", s1);

    for (int i = 0; s1[i] != '\0'; i++)
    {
        if ((s1[i] == 'A' || s1[i] == 'a') || (s1[i] == 'E' || s1[i] == 'e') || (s1[i] == 'I' || s1[i] == 'i') || (s1[i] == 'O' || s1[i] == 'o') || (s1[i] == 'U' || s1[i] == 'u')){
s1[i]='*';
        }
    }

    printf("modified vowel is %s",s1);
}