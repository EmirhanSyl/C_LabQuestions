#include <stdio.h>
#include <stdlib.h>



// char *strings[] => harf sayısını bul!
void sare(){
    char *strings[3] = {"Ahmet", "Mehmet", "Ak"};
    //{Ahmet}, {Mehmet}, {Ak}

    int total = 0;
    for (int i = 0; i < 3; i++)
    {
        int j = 0;
        while (strings[i][j] != '\0')
        {
            total += 1;
            j++;
        }
    }
    printf("%d", total);
}
void asim(){
    int a[] = {1,2,3,4,-1};
    int *p[] = {a, a, a, a, a};
    // p
    //{1,2,3,4,-1},
    //{1,2,3,4,-1},
    //{1,2,3,4,-1},
    //{1,2,3,4,-1},
    //{1,2,3,4,-1},
    int total = 0;
    for (int i = 0; i < 5; i++)
    {
        int j = 0;
        while (p[i][j] != -1)
        {
            total += p[i][j];
            j++;
        }
    }
    printf("%d", total);
    
}
void zahid()
{
    char *s = "Sare,Zahid,Rana,Asim";
    char *ss[] = {s, s + 5, s + 11, s + 16};
    // ss
    //"Sare,Zahid,Rana,Asim"
    //"Zahid,Rana,Asim"
    //"Rana,Asim"
    //"Asim"

    ss[1] = *(ss+3)+2;
    // ss
    //"Sare,Zahid,Rana,Asim"
    //"im"
    //"Rana,Asim"
    //"Asim"

    int count = 0;
    printf("%s\n", *(ss+1));
    //im

    for (int i = 0; i < 20; i++)
    {
        if ((*ss)[i] == ',')
        {
            count++;
        }
    }
    printf("%d", count);
    //0
}
void rana()
{
    char *s = "Sare,Zahid,Rana,Asim";
    char *ss[] = {s, s + 5, s + 11, s + 16};
    // ss
    //"Sare,Zahid,Rana,Asim"
    //"Zahid,Rana,Asim"
    //"Rana,Asim"
    //"Asim"

    *ss += 2;
    // *ss+=2
    //"re,Zahid,Rana,Asim"
    //"Zahid,Rana,Asim"
    //"Rana,Asim"
    //"Asim"
    printf("%s\n", *ss);
    for (int i = 0; i < 5; i++)
    {
        printf("%c", (*ss)[i]);
    }
    // re,Za
}
void example()
{
    int var;
    int *ptr;
    int **pptr;
    var = 3000;
    /* take the address of var */
    ptr = &var;
    /* take the address of ptr using address of operator & */
    pptr = &ptr;
    /* take the value using pptr */
    printf("Value of var = %d\n", var);
    printf("Value available at *ptr = %d\n", *ptr);
    printf("Value available at **pptr = %d\n", **pptr);
}
void ex2()
{
    int a[10] = {100, 206, 300, 409, 509, 601};        // Line 1
    int *p[] = {a, a + 1, a + 2, a + 3, a + 4, a + 5}; // Line 2
    int **pp = p;                                      // Line 3

    // pp array:
    //{100, 206, 300, 409, 509, 601},
    //{206, 300, 409, 509, 601},
    //{300, 409, 509, 601},
    //{409, 509, 601},
    //{509, 601},
    //{601};

    pp++;
    // pp++ array:
    //{206, 300, 409, 509, 601},
    //{300, 409, 509, 601},
    //{409, 509, 601},
    //{509, 601},
    //{601};
    printf("%d\n", pp[2][2]);

    *pp++;
    // *pp++ array:
    //{300, 409, 509, 601},
    //{300, 409, 509, 601},
    //{409, 509, 601},
    //{509, 601},
    //{601};
    printf("%d\n", **pp);

    ++*pp;
    // ++*pp array:
    //{409, 509, 601},
    //{300, 409, 509, 601},
    //{409, 509, 601},
    //{509, 601},
    //{601};
    printf("%d\n", **pp);
}

void main()
{
    //rana();
    //zahid();
    //asim();
    sare();
}
