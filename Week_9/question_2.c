#include <stdio.h>
#include <stdlib.h>

int main() {
    char fileName[100];
    char chunk[500];
    printf("Please enter a file name to read\n");
    scanf("%s", fileName);
    FILE *file = fopen(fileName, "r");
    fscanf(file, "%s", chunk);
    fclose(file);
    printf("Text read: %s\n", chunk);
    return 0;
}