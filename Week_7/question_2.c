#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

    char *dynamicString = calloc(21, sizeof(char));
    dynamicString = "Fatih Sultan Mehmet";

    int wordCount = 0;
    int position = 0;
    char *words[3];
    char *word = malloc(sizeof(char) * 21);
    for (int i = 0; i < strlen(dynamicString); i++)
    {
        word = dynamicString[i];
        if (dynamicString[i] == ' ')
        {
            words[wordCount] = word;
            char word = realloc(sizeof(char) * 21);
        }
        
    }
    
    printf("%s\n", dynamicString);

    return 0;
}