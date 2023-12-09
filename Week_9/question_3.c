#include <stdio.h>
#include <stdlib.h>

void removeLineWithTemp(char *filename, int lineNumber){
    FILE *file = fopen(filename, "r");
    FILE *temp = fopen("Temp.txt", "w");

    int line = 0;
    char chunk[50];
    while (fgets(chunk, sizeof(chunk),file) != NULL)
    {
        line++;
        if (line == lineNumber)
        {
            continue;
        }
        fprintf(temp, "%s", chunk);
    }

    fclose(file);
    fclose(temp);

    remove(filename);
    rename("temp.txt", filename);
}

void removeLineWithoutTemp(char *filename, int lineNumber)
{
    FILE *file = fopen(filename, "r");
    
}

int main() {
    removeLineWithTemp("Input.txt", 2);
    printf("File Removed!\n");
    return 0;
}