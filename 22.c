#include <stdio.h>

int main()
{
    int i, n, sum = 0;
    printf("Enter Total no. of Elements : ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum of all Elements = %d", sum);
    return 0;
}