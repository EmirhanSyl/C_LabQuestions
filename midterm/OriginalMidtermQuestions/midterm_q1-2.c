#include <stdio.h>
#include <stdlib.h>

struct course
{
    char *course_name;
};

struct student
{
    char *name;
    struct course *courses[10];
};

struct department
{
    char *name;
    struct student *students;
    // question-2
    void (*displayStudents)(struct department *self);
};

// Question - 1
void displayNames(struct department dept, char *courseName)
{
    int i = 0;
    while (dept.students[i] == NULL) // The error about the question. Don't mind it...
    {
        for (int j = 0; j < 10; j++)
        {
            if (dept.students[i].courses[j]->course_name == courseName)
            {
                printf("%s", dept.students[i].name);
            }
        }
    }
}

// Question - 2
void displayStudents(struct department *self)
{
    int i = 0;
    while (self->students[i] == NULL) // The error about the question. Don't mind it...
    {
        printf("%s", self->students[i].name);
    }
}

int main()
{
    //Question - 2 test
    struct student s1 = {.name="s1"};
    struct student s2 = {.name="s2"};
    struct student s3 = {.name="s3"};

    struct department dept1;
    dept1.displayStudents = displayStudents;
    dept1.name = "ab1";
    dept1.students[0] = s1;
    dept1.students[1] = s2;
    dept1.students[2] = s3;
    dept1.students[3] = NULL; // The error about the question. Don't mind it...

    dept1.displayStudents(&dept1);

    printf("Hello, World!\n");
    return 0;
}