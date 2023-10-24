#include <stdio.h>

// Find a given number is polyndrome or not
#include <stdio.h>

int main()
{
    int number = 12321;
    int reverseNum = 0;

    int temp = number;
    while (temp != 0)
    {                                               
        reverseNum = reverseNum * 10 + (temp % 10);
        temp /= 10;
    }

    if (number == reverseNum)
    {
        printf("Palindrome!");
    }
    else
    {
        printf("Not a Palindrome!");
    }

    return 0;
}
