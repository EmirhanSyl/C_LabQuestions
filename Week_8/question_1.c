#include <stdio.h>
#include <stdlib.h>

int lengthOfString(char *str){
    int i = 0;
    while (str[i] != '\0')
    {
        i++;
    }
    return i;
}

int main() {
    printf("%d\n", lengthOfString("Emirhan"));
    return 0;
}