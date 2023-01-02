/* This project is a calculator for working with two numbers*/
#include<stdio.h>
int main()
{
    char operator;
    printf("Please select operator['+','*','/','-']\n");
    scanf("%c", &operator);

    double num1, num2;
    printf("Please enter first number\n");
    scanf("%lf", &num1);
    
    printf("Please enter second number\n");
    scanf("%lf", &num2);

    double result;
    switch (operator)
    {
        case '+':
            result = num1 + num2;
            break;
    
        case '-':
            result = num1 - num2;
            break;

        case '*':
            result = num1 * num2;
            break;

        case '/':
            result = num1 / num2;
            break;

        default:
            printf("Invalid argument");
            break;
    }

    printf("%.2lf", result);
    return 0;
}