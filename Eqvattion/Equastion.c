#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float result = 0.0;
void Equation(char eq[], int opIndex, char op)
{
    float num1 = (float)(eq[opIndex - 1] - '0');
    float num2 = (float)(eq[opIndex + 1] - '0');

    if (op == '/')
    {
        result = num1 / num2;
    }
    else if (op == '*')
    {
        result = num1 * num2;
    }
    else if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    printf("ye hai: %.3f\n\n", result);

    char chResult = (result) + '0';

    eq[opIndex - 1] = chResult;

    for (int j = opIndex; eq[j] != '\0'; j++)
    {
        eq[j] = eq[j + 2];
    }

    fflush(stdin);
}

int main()
{

    char eq[20];
    printf("Enter Equation: ");
    gets(eq);

    eq[-1] = '0';
    for (int i = 0; i < strlen(eq); i++)
    {
        if (eq[i] == '/')
        {
            Equation(eq, i, '/');
            i -= 2;
        }
        else if (eq[i] == '*')
        {
            Equation(eq, i, '*');
            i -= 2;
        }
    }
    for (int i = 0; i < strlen(eq); i++)
    {
        if (eq[i] == '+')
        {
            Equation(eq, i, '+');
            i -= 2;
        }
        else if (eq[i] == '-')
        {
            Equation(eq, i, '-');
            i -= 2;
        }
    }
    printf("Result is: %.3f", result);
    return 0;
}
