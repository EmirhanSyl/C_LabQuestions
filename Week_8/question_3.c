#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char **copyToAnywhere(int length, char **arr){
    char **result = calloc(length, sizeof(char));
    
    for (int i = 0; i < length; i++)
    {
        memcpy(result[i], arr[i], sizeof(length));
    }
    return result;
}

int main() {
    char **arr;
    arr[0] = "adad";
    arr[1] = "dada";
    char **copy = copyToAnywhere(2,arr);
    

    printf("%s\n", copy[0]);
    return 0;
}