#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *copyStr(char *str){
    int length = strlen(str);
    char *copy = calloc(length, sizeof(char));

    for (int i = 0; i < length; i++)
    {
        copy[i] = str[i];
    }
    copy[length] = '\0';
    return copy;
}

int main() {
    char *newChar = copyStr("Eeee");
    printf("%s\n", newChar);
    return 0;
}