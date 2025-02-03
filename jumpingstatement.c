#include <stdio.h>
int main()
{
    int num;

    for (int i = 1; i <= 10; i++)
    {
        if (i == 5)
        {
            continue;
        }
        else
        {
            printf("%d ", i);
            i++;
        }
    }
}