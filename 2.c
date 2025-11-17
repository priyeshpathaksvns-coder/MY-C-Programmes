#include <stdio.h>
#include <math.h>

int main() 
{
    float principal, rate, time, SI, CI;
    printf("Enter principal amount : ");
    scanf("%f", &principal);
    printf("Enter Rate of Interest (in %% per annum) : ");
    scanf("%f", &rate);
    printf("Enter Time (in Years) : ");
    scanf("%f", &time);
    SI = (principal * rate * time) / 100.0;
    CI = principal * pow((1 + rate / 100.0), time) - principal;
    printf("Simple Interest = %.2f\n", SI);
    printf("Compound Interest = %.2f\n", CI);
    return 0;
}