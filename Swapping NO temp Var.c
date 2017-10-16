#include <stdio.h>

int main()
{
    double firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf_s("%lf", &firstNumber);

    printf("Enter second number: ");
    scanf_s("%lf",&secondNumber);

    // Swapping process

    firstNumber = firstNumber - secondNumber;
    secondNumber = firstNumber + secondNumber;
    firstNumber = secondNumber - firstNumber;

    printf("\nAfter swapping, firstNumber = %.2lf\n", firstNumber);
    printf("After swapping, secondNumber = %.2lf", secondNumber);

    return 0;
}
