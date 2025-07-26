#include <stdio.h>
struct Student
{
    char name[50];
    int age;
    float gpa;
};

void structureData()
{
    struct Student student1;

    // Assigning values to the structure members
    printf("Enter student's name: ");
    fgets(student1.name, sizeof(student1.name), stdin);
    printf("Enter student's age: ");
    scanf("%d", &student1.age);
    printf("Enter student's GPA: ");
    scanf("%f", &student1.gpa);

    // Printing the structure data
    printf("Name: %s\n", student1.name);
    printf("Age: %d\n", student1.age);
    printf("GPA: %.2f\n", student1.gpa);
}

int main()
{
    structureData();
    return 0;
}