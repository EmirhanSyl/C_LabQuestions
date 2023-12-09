#include <stdio.h>
#include <stdlib.h>

int main() {
    char input[100];
    printf("Please enter a text\n");
    gets(input);
    FILE *file = fopen("Input.txt", "a");
    fprintf(file, "%s", input);
    printf("Text written\n");
    fclose(file);
    return 0;
}