#include <stdio.h>

int main() {
    char *p = "Ahmet Ak, Mehmet Kara, Ayşe Yeşil";
    int i = 0;
    while (p[i] != '\0')
    {
        if (p[i] == ',')
        {
            for (int j = 0; j < i; j++)
            {
                printf("%c", p[j]);
            }
            printf("\n");
            p += i+2;
            i=0;
        }
        i++;
    }
    

    return 0;
}