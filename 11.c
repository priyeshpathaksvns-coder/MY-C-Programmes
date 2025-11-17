#include <stdio.h>

int main()
{
    float a, b;
    char op;
    printf("Enter 1st Operand : ");
    scanf("%f", &a);
    printf("Enter Second Operand : ");
    scanf("%f", &b);
    printf("Enter Operator (+, -, *, /, %%) : ");
    scanf(" %c", &op);
    switch (op)
    {
    case '+':
        printf("Result = %.2f", a + b);
        break;
    case '-':
        printf("Result = %.2f", a - b);
        break;
    case '*':
        printf("Result = %.2f", a * b);
        break;
    case '/':
        if (b != 0)
            printf("Result = %.2f", a / b);
        else
            printf("Division by zero is not allowed.");
        break;
    case '%':
        printf("Converting float to int for modulus operation.\n");
         if ((int)b != 0)
            printf("Result = %d", (int)a % (int)b);
        else
            printf("Division by zero is not allowed.");
        break;
    default:
        printf("Invalid Operator");
        break;
    }
    return 0;
}