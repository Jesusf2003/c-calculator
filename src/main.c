#include <stdio.h>

// simple calculator
int main()
{
    // declaring vars
    char opt;
    double first, second;
    
    // asking include operator
    printf("Enter the operator (+, -, *, /) : ");
    scanf("%c", &opt);
    
    printf("Enter the 2 numbers one by one : ");
    scanf("%lf %lf", &first, &second);

    switch(opt)
    {
        case '+':
            printf("%.2lf + %.2lf = %.2lf", first, second, (first + second));
            break;
        case '-':
            printf(".2%lf - %.2lf = %.2lf", first, second, (first - second));
            break;
        case '*':
            printf(".2%lf * %.2lf = %.2lf", first, second, (first * second));
            break;
        case '/':
            if (second != 0.0)
                printf("%.2lf / %.2lf = %.2lf", first, second, (first / second));
            else
                printf("Divide by zero case.");
            break;
        default:
            printf("Invalid operator...");
    }
    return 0;
}