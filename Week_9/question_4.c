#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    int no;
    char *name;
}Student;


int main() {
    Student s1 = {.no=0, .name="Emirhan"};
    Student s2 = {.no=1, .name="Zahid"};
    Student s3 = {.no=2, .name="Sare"};


    FILE *file = fopen("Students.bin", "wb");
    fwrite(&s1, sizeof(Student), 1, file);
    fwrite(&s2, sizeof(Student), 1, file);
    fwrite(&s3, sizeof(Student), 1, file);

    printf("Students Written to the file!\n");
    fclose(file);

    FILE *readFile = fopen("Students.bin", "rb");

    Student *sp1 = malloc(sizeof(Student));
    Student *sp2 = malloc(sizeof(Student));
    Student *sp3 = malloc(sizeof(Student));

    fread(sp1, sizeof(Student), 1, readFile);
    fread(sp2, sizeof(Student), 1, readFile);
    fread(sp3, sizeof(Student), 1, readFile);

    printf("Students: %s, %s, %s", sp1->name, sp2->name, sp3->name);
    fclose(readFile);
    return 0;
}