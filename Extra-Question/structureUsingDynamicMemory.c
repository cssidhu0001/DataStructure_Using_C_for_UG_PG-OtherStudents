#include <stdio.h>
#include <stdlib.h>
struct emp
{
    char name[30];
    int age;
    double salary;
};

void memoryAllocate()
{
    struct emp *memoryAlloc;
    char empname[30];
    int empage;
    double empsalary;

    memoryAlloc = (struct emp *)calloc(3, sizeof(struct emp));
    printf("\nEnter the Details of the Employee: ");
    printf("\nEnter Name of Employee: ");
    gets(memoryAlloc->name);
    printf("\nEnter Age of Employee: ");
    scanf("%d", &empage);
    memoryAlloc->age = empage;
    printf("\nEnter Salary of Employee: ");
    scanf("%lf", &empsalary);
    memoryAlloc->salary = empsalary;

    printf("\nDetails of the employee are:\n");
    printf("\nEmployee Name :");
    puts(memoryAlloc->name);
    printf("Employee Age: %d", memoryAlloc->age);
    printf("\nEmployee Salary: %lf", memoryAlloc->salary);
}

int main()
{
    memoryAllocate();
}