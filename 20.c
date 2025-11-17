#include <stdio.h>
#include <math.h>

int main()
{
    int bin, dec, fun, i = 0, r;
    printf("Choose :\n1.For Binary No. to Decimal No.\n2.For Decimal No. to Binary No.\nInput : ");
    scanf("%d", &fun);
    switch (fun)
    {
        case 1 : 
                printf("Enter the Binary Number : ");
                scanf("%d", &bin);
                dec = 0;
                while (bin > 0)
                {
                    r = bin %  10;
                    dec += r * pow(2, i);
                    i++;
                    bin /= 10;
                }
                printf("Decimal Number : %d", dec);
                break;
        case 2 : 
                printf("Enter the Decimal Number : ");
                scanf("%d", &dec);
                bin = 0;
                while (dec > 0)
                {
                    r = dec %  2;
                    bin += r * pow(10, i);
                    i++;
                    dec /= 2;
                }
                printf("Binary Number : %d", bin);
                break;
        default :
                printf("Wrong Input");
    }
    return 0;
}