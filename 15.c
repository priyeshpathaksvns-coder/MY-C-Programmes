#include <stdio.h>
int main()
{
    int n, i, a = 0, b = 1, term;
    printf("Enter the Total Number of terms of Fibonacci Series : ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        {
            if (i <= 2)
                printf("%d  ", i - 1);
            else
            {
                term = a + b;
                printf("%d  ",term);
                a = b;
                b = term;
            }
        }
    printf("\n");
    return 0;
}