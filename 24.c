#include <stdio.h>

int main()
{
    int i, n, min, max;
    printf("Enter Total no. of Elements : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    min = a[0];
    max = a[0];
    for (i = 1; i < n; i++)
    {
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    printf("Minimum Number = %d", min);
    printf("\nMaximum Number = %d", max);
    return 0;
}