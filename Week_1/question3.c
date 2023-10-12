#include <stdio.h>

// a) Take characters from console and store in an array until user enters 'x' character. When x entered, print the array as string.
// b) When user enters 'c' character, print the array characters as string
int main(){
    char array[10];
    char c;
    int i = 0;
    do
    {
        printf("Write a character: ");
        scanf(" %c", &c);
        if (c == 'c')
        {
            printf("%s \n", array);
        }else{
            array[i] = c;
            i++;
        }
        
    } while (c != 'x');
    
    printf("%s \n", array);
    return 0;
}
