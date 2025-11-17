//WAP to add and multiply two matrices of ordern*n
 
# include <stdio.h>

int main()
{   
    int a[25][25],b[25][25],i,j,k,c[25][25];
    int r1,c1,r2,c2,sum=0;
    printf("Enter the row and coloumn of first matrix\n");
    scanf("%d%d",&r1,&c1);
    printf("Enter the row and coloumn of  second matrix\n");
    scanf("%d%d",&r2,&c2);
   
        if (c1!=r2)
        {
            printf("Multiplication is not possible");
        }
        else{

    printf ("Enter value of first matrix : ") ;
    for (i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++) 
        { 
            scanf("%d",&a[i][j]);
        } 
    }
   printf("Enter the elements of second matrix\n");
   
    for (i=0;i<r2;i++)
{
        for(j=0;j<c2;j++) 
    { 
    scanf("%d",&b[i][j]);
    } 
}



    for (i=0;i<r1;i++)
{
    for (j=0;j<c2;j++)
        {
     for (k=0;k<c1;k++)
     {
        sum= sum + a[i][j]*b[i][j];
     }   
     c[i][j]=sum;
     sum=0;
        }
}
printf("Resultant matrix\n");
for(i=0;i<r1;i++)
{
  for(j=0;j<c2;j++)
    {
  printf("%d",c[i][j]);
  printf("\n");
    }
}
    return 0;
}
}
    