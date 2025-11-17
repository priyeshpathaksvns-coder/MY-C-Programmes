#include <stdio.h>

int main()
{
    int i, j = 0, n, key;
    printf("Enter Total no. of Elements : ");
    scanf("%d", &n);
    int a[n], keyIndex[n];
    for (i = 0; i < n; i++)
    {
        printf("Enter Element %d : ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter the Element to Search : ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
        if (a[i] == key)
        {
            keyIndex[j] = i;
            j++;
        }
    if (j == 0)
        printf("Element not Found.");
    else
        for (i = 0; i < j; i++)
            printf("%d Found at index %d.\n", key, keyIndex[i]);
    return 0;
}