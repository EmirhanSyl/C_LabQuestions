#include <stdio.h>
#include <stdlib.h>

int **convertArr(int *arr, int n, int m){
    int **newArr = calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        newArr[i] = calloc(m, sizeof(int));
        for (int j = 0; j < m; j++)
        {
            newArr[i][j] = arr[(i*m)+j];
        }
    }
    return newArr;
}

int **convertArr2(int *arr, int n, int m)
{
    int **newArr = calloc(n, sizeof(int));
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        newArr[i] = calloc(m, sizeof(int));
        for (int j = 0; j < m; j++)
        {
            newArr[i][j] = arr[index];
            index++;
        }
    }
    return newArr;
}