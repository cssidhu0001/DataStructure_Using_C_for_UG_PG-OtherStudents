#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c)
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow\n");
        return;
    }
    stack[++top] = c;
}

char pop()
{
    if (top == -1)
        return -1;
    else
        return stack[top--];
}

int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}

void infixToPostfix(char *exp)
{
    int i, j = 0;
    char result[strlen(exp) + 1];
    for (i = 0; exp[i] != '\0'; i++)
    {
        char c = exp[i];
        if (isalnum(c))
        {
            result[j++] = c;
        }
        else if (c == '(')
        {
            push(c);
        }
        else if (c == ')')
        {
            while (top != -1 && stack[top] != '(')
            {
                result[j++] = pop();
            }
            pop();
        }
        else
        {
            while (top != -1 && precedence(c) <= precedence(stack[top]))
            {
                result[j++] = pop();
            }
            push(c);
        }
    }

    while (top != -1)
    {
        result[j++] = pop();
    }
    result[j] = '\0';
    printf("Postfix Expression: %s\n", result);
}

int main()
{
    char exp[MAX];
    printf("Enter an infix expression: ");
    scanf("%s", exp);
    infixToPostfix(exp);
    return 0;
}