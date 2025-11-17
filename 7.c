#include <stdio.h>

int main()
{
    float a, b, c, greatest;
    printf("Enter 1st Number : ");
    scanf("%f", &a);
    printf("Enter 2nd Number : ");
    scanf("%f", &b);
    printf("Enter 3rd Number : ");
    scanf("%f", &c);
    if (a == b && b == c)
        greatest = a;
    else if (b == c)
            if (b > a)
                greatest = b;
            else
                greatest = a;
    else if (c == a)
            if (c > b)      
                greatest = c;
            else
                greatest = b;
    else if (a == b)
            if (a > c)
                greatest = a;
            else
                greatest = c;
    else if (a > b)
    {
        if (a > c)
            greatest = a;
        else
            greatest = c;
    } else if (b > c)
        greatest = b;
    else
        greatest = c;
    printf("Greatest number is : %f\n", greatest);
    return 0;
}