#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter total no. of Elements : ");
    scanf("%d", &n);
    int a[n], b[n], c[n];
    printf("Enter 1st Array\n");
    for(i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter 2nd Array");
    for(i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &b[i]);
    }
    printf("Third Array : ");
    for(i = 0; i < n; i++)
    {
        c[i] = a[i] + b[i];
        printf("%d\t", c[i]);
    }
    return 0;
}