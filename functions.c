#include <stdio.h>
float addition(float a, float b)
{
    return a + b;
}
float subtraction(float a, float b)
{
    return a - b;
}
float multiplication(float a, float b)
{
    return a * b;
}
float division(float a, float b)
{
    return a / b;
}
int factorial(int n)
{
    int i, fact = 1;
    for(i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int main()
{
    int choice, num;
    float a, b;

    printf("MENU\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Factorial\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Addition = %.2f", addition(a,b));
            break;

        case 2:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Subtraction = %.2f", subtraction(a,b));
            break;

        case 3:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Multiplication = %.2f", multiplication(a,b));
            break;

        case 4:
            printf("Enter two numbers: ");
            scanf("%f %f", &a, &b);
            printf("Division = %.2f", division(a,b));
            break;

        case 5:
            printf("Enter a number: ");
            scanf("%d", &num);
            printf("Factorial = %d", factorial(num));
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}
