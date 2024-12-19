#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("\nFirst Number: %d\n", num1);
    printf("Second Number: %d\n", num2);
    printf("Sum of 2 Numbers: %d\n", num1+num2);
    printf("Product of 2 Numbers: %d\n", num1*num2);
    printf("Difference of 2 Numbers: %d\n", num1-num2);
    printf("Average of 2 Numbers : %d\n", (num1+num2)/2);

    return 0;
}
