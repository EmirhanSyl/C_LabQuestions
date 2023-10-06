#include <stdio.h>

int main()
{
    int highestAscii = -1;
    for (int i = 0; i < 3; i++)
    {
        char c;
        printf("Write a character: ");
        scanf(" %c", &c);

        if (highestAscii < c)
        {
            highestAscii = c;
        }
        
    }

    printf("Highest ASCII: %d", highestAscii);
}

