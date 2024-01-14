#include <stdio.h>
#include <stdlib.h>

struct course
{
    char *course_name;
};

struct student
{
    char *name;
    struct course courses[10];
};

struct department
{
    char *name;
    struct student *students;
    void (*displayStudents)(struct department *dept);
};

void displayStudentsByCourse(struct department dept, char *course_name)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (dept.students[i].courses[j].course_name == course_name)
            {
                printf("%s\n", dept.students[i].name);
            }
        }
    }
}

void displayStudents(struct department *dept){
    for (int i = 0; i < 5; i++)
    {
        printf("%s\n ", dept->students[i].name);
    }
    
}

/*
    A : {1, 2, 3, 4, 5, 6, 7, 8}

    B :
    {
        {1, 2},
        {3, 4},
        {5, 6},
        {7, 8},
    }
*/
int **convertArrToMatrix(int *A, int n, int m){
    int **b;
    b = calloc(n, sizeof(int*));

    int index = 0;
    for (int i = 0; i < n; i++)
    {
        b[i] = calloc(m, sizeof(int));
        for (int j = 0; j < m; j++)
        {
            b[i][j] = A[index++];
        }
    }

    return b;
}

/* Yazılım Müh.
    1 - Enes Bayraker - {CP2, CP3, Diferansiyel Denklemler, Discrete}
    2 - Murat Keskin - {CP3, Diferansiyel Denklemler, Discrete}
    3 - Muhammet Enes Tikit - {CP2, Diferansiyel Denklemler, Discrete}
*/

int main()
{
    struct department *d1 = malloc(sizeof(struct department));
    struct student s1 = {.name="Emirhan"};
    struct student s2 = {.name="Zahid"};
    struct student s3 = {.name="Asim"};
    struct student s4 = {.name="Rana"};
    struct student s5 = {.name="Sare"};

    d1->students = calloc(5, sizeof(struct student));
    d1->students[0] = s1;
    d1->students[1] = s2;
    d1->students[2] = s3;
    d1->students[3] = s4;
    d1->students[4] = s5;

    d1->displayStudents = displayStudents;
    d1->displayStudents(d1);

    int arr[8] = {1,2,3,4,5,6,7,8};
    int **b = convertArrToMatrix(arr, 4, 2);
    for (int i = 0; i < 4; i++)
    {
        printf("{");
        for (int j = 0; j < 2; j++)
        {
            printf("%d, ", b[i][j]);
        }
        printf("}\n");
    }
    
    return 0;
}
