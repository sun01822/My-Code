#include<stdio.h>
int main()
{
    double a, b, divide = 0.0;

    printf("Enter the first integer: ");
    scanf("%lf",&a);

    printf("Enter the second integer: ");
    scanf("%lf",&b);

    divide = a / b;

    printf("Sum of these two integer: %.2lf\n",divide);

    return 0;
}