#include <stdio.h>

int main() 
{
    int num;
    printf("Enter a Natural no. : ");
    scanf("%d", &num);
    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);
    return 0;   
}