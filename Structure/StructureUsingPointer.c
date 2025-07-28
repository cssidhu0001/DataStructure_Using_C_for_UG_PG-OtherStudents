#include <stdio.h>
struct Structure
{
    int intValue;
    float floatValue;
    char charValue[20];
};

int main()
{
    struct Structure myStruct;
    struct Structure *ptr = &myStruct;

    // Accessing members using pointer
    ptr->intValue = 10;
    ptr->floatValue = 3.14;
    snprintf(ptr->charValue, sizeof(ptr->charValue), "Hello");

    // Printing values
    printf("Integer: %d\n", ptr->intValue);
    printf("Float: %.2f\n", ptr->floatValue);
    printf("String: %s\n", ptr->charValue);

    return 0;
}