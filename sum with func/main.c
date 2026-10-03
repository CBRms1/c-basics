#include <stdio.h>

double sum(double x, double y)
{
    double sum = 0;

    sum = x + y;

    return sum;
}

int main()
{
    double number1 = 0, number2 = 0;

    printf("Typer number 1: "); 
    scanf("%lf", &number1);
    printf("Typer number 2: ");
    scanf("%lf", &number2);
    
    printf("Sum: %lf\n", sum(number1, number2));

    return 0;
}