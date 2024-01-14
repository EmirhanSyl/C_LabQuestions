#include <stdio.h>
#include <stdlib.h>

float *shift_right(float *arr, int arrSize, int left, int right, int distance)
{
    for (int i = right; i >= left; i--)
    {
        int newLoc = (i + distance) % arrSize;
        arr[newLoc] = arr[i];
    }
    
    return arr;
}

void shift_with_extend(float *arr, int arrSize, int left, int right, int distance)
{
    if (arrSize < right + distance)
    {
        arr = realloc(arr, sizeof(float) * (right + distance + 1));
    }
    
    for (int i = right; i >= left; i--)
    {   
        int newLoc = i + distance;
        arr[newLoc] = arr[i];
    }
}

int main() {
    float numbers[] = {1, 2, 3, 4, 5, 6};

    float *newArr = shift_right(numbers, 6, 2, 4, 2);

    for (size_t i = 0; i < 6; i++)
    {
        printf("%.0f ", newArr[i]);
    }
    return 0;
}