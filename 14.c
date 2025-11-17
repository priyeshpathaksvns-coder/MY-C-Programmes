#include <stdio.h>
int main()
{
    int n, SumE = 0, SumO = 0;
    printf("Enter a Natural Number : ");
    scanf("%d", &n);
    for(int i  = 1; i <= n; i++)
        if(i % 2 == 0)
            SumE += i;
        else
            SumO += i;
    printf("Sum of Even Numbers upto %d is : %d\n", n, SumE);
    printf("Sum of Odd Numbers upto %d is : %d", n, SumO);
    return 0;
}