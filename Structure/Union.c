#include <stdio.h>
union Union
{
    int intValue;
    float floatValue;
    char charValue[20];
};

int main()
{
    union Union myUnion;

    // Assigning an integer value
    myUnion.intValue = 10;
    printf("Integer Value: %d\n", myUnion.intValue);

    // Assigning a float value
    myUnion.floatValue = 3.14f;
    printf("Float Value: %.2f\n", myUnion.floatValue);

    // Assigning a string value
    snprintf(myUnion.charValue, sizeof(myUnion.charValue), "Hello");
    printf("String Value: %s\n", myUnion.charValue);

    // Note: The last assigned value will be the one that is valid
    return 0;
}