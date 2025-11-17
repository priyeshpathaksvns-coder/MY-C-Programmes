#include <stdio.h>
#include <math.h>

int main()
{
    int i, sum, r, count, temp;
    for (i = 1; i <= 100; i++)
    {
    temp = i;
    sum = 0;
    count = 0;
    while (temp > 0)
    {
        temp /= 10;
        count++;
    }
    temp = i;
    while(temp > 0)
    {
        r = temp % 10;
        sum += pow(r, count);
        temp /= 10;
    }
    if (i == sum)
        printf("%d  ", i);
    }
    return 0;
}