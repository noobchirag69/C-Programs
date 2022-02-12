#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2;
    char op;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    double sum, difference, product, quotient;

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    if(op == '+')
    {
        printf("Sum: %f\n", sum);
    }
    else if(op == '-')
    {
        printf("Difference: %f\n", difference);
    }
    else if(op == '*')
    {
        printf("Product: %f\n", product);
    }
    else if(op == '/')
    {
        printf("Quotient: %f\n", quotient);
    }
    else
    {
        printf("Error: Invalid Operator\n");
    }

    return 0;
}