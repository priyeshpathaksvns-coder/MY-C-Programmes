#include <stdio.h>

int main()
{
    int num, rev = 0, r;
    printf("Enter a +ve Integer : ");
    scanf("%d", &num);
    if (num < 0)
        num *= -1;
    while(num > 0)
    {
        r = num % 10;
        rev = rev*10 + r;
        num -= r;
        num /= 10;
    }
    printf("Reverse No. = %d", rev);
    return 0;
}