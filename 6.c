#include <stdio.h>

int main() {
    float num1, num2;
    printf("Enter First Number : ");
    scanf("%f", &num1);
    printf("Enter Second Number: ");
    scanf("%f", &num2);

    if (num1 == num2)
        printf("The numbers are Equal.\n");
    else
        printf("The Numbers are not Equal.\n");
    return 0;
}