#include <stdio.h>

int main()
{
    float s1, s2, s3, s4, s5, sum, per;
    printf("Enter 1st Subject Marks : ");
    scanf("%f", &s1);
    printf("Enter 2nd Subject Marks : ");
    scanf("%f", &s2);
    printf("Enter 3rd Subject Marks : ");
    scanf("%f", &s3);
    printf("Enter 4th Subject Marks : ");
    scanf("%f", &s4);
    printf("Enter 5th Subject Marks : ");
    scanf("%f", &s5);
    sum = s1 + s2 + s3 + s4 + s5;
    per = sum / 5;
    if (per >= 90)
        printf("Grade A");
    else if (per >= 80)
        printf("Grade B");
    else if (per >= 60)
        printf("Grade C");
    else
        printf("Grade D");
    return 0;
}