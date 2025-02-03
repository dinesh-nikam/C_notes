#include <stdio.h>
int main()
{
    int num, digit = 0, rev = 0, original_num;
    printf("Enter the number");
    scanf("%d", &num);

    // while(num){
    // digit=num%10;
    // rev=(rev*10)+digit;
    // num=num/10;

    // }
    // printf("the reverse number is :%d",rev);
    // }

    // palindrome
    original_num = num;
    while (num)
    {
        digit = num % 10;
        rev = (rev * 10) + digit;
        num = num / 10;
    
    //printf("the reverse number is :%d", rev);

  
    }
      if (original_num == rev)
    {
        printf("%d is palindrome\n ",original_num);
    }
        else
        {
            printf("%d is not palindrome\n",original_num);
        }
}