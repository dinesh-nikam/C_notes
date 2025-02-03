#include <stdio.h>
int main()
{
    int i = 0;
    char str1[100];
    char str2[] = "dinesh doesnt share food";

    for (i = 0; str2[i] != '\0'; i++)
    {
        str1[i] = str2[i];
    }
    str1[i] = '\0';
    printf("str1:%s\n", str1);
}
