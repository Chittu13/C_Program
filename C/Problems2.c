// 1. Take 2D static array and print the elements in the form of matrix

#include <stdio.h>
int main()
{
    int z[2][3]={{1,2,3},{4,5,6}};
    for (int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%d  ",z[i][j]);
        }
        printf("\n");
    }
}








// 2.Take the user input dimestion for n and m and print the elements

#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d",&x,&y);
    int z[x][y];
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {   printf("array[%d][%d]: ",i,j);
            scanf("%d",&z[i][j]);
        }
    }
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            printf("%d  ",z[i][j]);
        }
        printf("\n");
    }
}







// 3. Write a program to add two matrix


#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d",&x,&y);
    int a[x][y],b[x][y],sum[x][y];
    
    
    printf("\nEnter elements of 1st matrix:\n");
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {   printf("array[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    
    
    printf("\nEnter elements of 2st matrix:\n");
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {   printf("array[%d][%d]: ",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    
    
    // adding of two matrix 
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {   
          sum[i][j]=a[i][j]+b[i][j]; 
        }
    }
    printf("\n")
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            printf("%d   ",sum[i][j]);
        }
        printf("\n");
    }
}



// 4. Find the transpose of the matrix

#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d",&x,&y);
    int a[x][y],tran[y][x];
    
    
    printf("\nEnter elements:\n");
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {   printf("array[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered matrix: \n");
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {   
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of the matrix:\n");
    for(int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            tran[j][i]=a[i][j];
        }
    }
    for (int i=0;i<y;i++)
    {
        for (int j=0;j<x;j++)
        {   
            printf("%d  ",tran[i][j]);
        }
        printf("\n");
    }
}


// 5. To create a symmetrix matrix from assymmetric matrix

#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter the number of rows and columns: \n");
    scanf("%d%d",&x,&y);
    int a[x][y],tran[y][x];
    
    
    printf("\nEnter elements:\n");
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {   printf("array[%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nEntered symmetrix matrix: \n");
    for (int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {   
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nassymmetric matrix:\n");
    for(int i=0;i<x;i++)
    {
        for (int j=0;j<y;j++)
        {
            tran[j][i]=a[i][j];
            tran[j][i]=tran[j][i]*-1;
        }
    }
    for (int i=0;i<y;i++)
    {
        for (int j=0;j<x;j++)
        {   
            printf("%d  ",tran[i][j]);
        }
        printf("\n");
    }
}





