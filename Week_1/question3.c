#include <stdio.h>

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
