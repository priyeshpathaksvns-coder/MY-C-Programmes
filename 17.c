#include <stdio.h>

int main()
{
    int n, i, r, sum = 0;
    printf("Enter an Integer : ");
    scanf("%d", &n);
    while (n > 0)
    {
        r = n % 10;
        n /= 10;
        sum += r;
    }
    printf("Sum of All Digits = %d\n", sum);
    return 0;
}