
#include <stdio.h>
int main()
{
    int a[2][2],b[2][2],sum[2][2],i,j;
    
    printf("\nEnter elements of 1st matrix:\n");
    for ( i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {   printf("arra1[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEnter elements of 2st matrix:\n");
    for ( i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {   printf("arra2[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    // adding of two matri2 

    for (i=0;i<2;i++)
    {
        for (j=0;j<2;j++)
        {   
          sum[i][j]=a[i][j]+b[i][j]; 
        }
    }
    printf("\n");
    printf("Addition of two matrix: \n");
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<2;j++)
        {
            printf("%d   ",sum[i][j]);
        }
        printf("\n");
    }
}
