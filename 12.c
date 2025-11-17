#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter a Natural Number : ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        sum += i;
    printf("Sum of all Natural Numbers upto %d is : %d", n, sum);
    return 0;
}