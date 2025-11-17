#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("Enter a Natural Number : ");
    scanf("%d", &n);
    if (n <= 1)
    {
        printf("Neither Prime nor Composite.\n");
        return 0;
    }
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
        {
            printf("%d is a Composite Number.\n", n);
            return 0;
        }
    printf("%d is a Prime Number.\n", n);
    return 0;
}