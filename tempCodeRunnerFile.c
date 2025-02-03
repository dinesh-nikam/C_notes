#include<stdio.h>
#include<math.h>

int is_armstrong(int num);

int main()
{
    for(int num = 1; num <= 1000; num++) {
        if(is_armstrong(num)) {
            printf("%d is an Armstrong number\n", num);
        }
    }
    return 0;
}

int is_armstrong(int num)
{
    int temp = num, original = num, no_of_digit = 0, digit = 0, sum = 0;

    // Calculate number of digits
    while(temp != 0) {
        digit = temp % 10;
        no_of_digit++;
        temp = temp / 10;
    }

    // Calculate Armstrong number
    while(original != 0) {
        digit = original % 10;
        sum = sum + pow(digit, no_of_digit);
        original = original / 10;
    }

    if(sum == num) {
        return 1;
    } else {
        return 0;
    }
}
