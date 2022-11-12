# 1. Write a program to find Mean,Median,Mode form a user input array


``` c
#include <stdio.h>
int main()
{
    int n,arr[50],total=0;
    float mean=0,median=0;
    printf("Enter the number of elements: \n");
    scanf("%d",&n);
    printf("\nEnter the %d numbers: \n",n);
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        total+=arr[i];
    }
    
    //Finding Mean: 
    
    float sum=total;
    mean=(sum)/n;
    
    //sorting the array;
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]<arr[j])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    //Finding the median
    
    if(n%2==0)
    {
        median=(n/2+((n/2)+1))/2;
    }
    else
    {
      median=(n+1)/2;
    }
    float fmedian=0;
    fmedian=(float)arr[(int)median];
    
    // Finding the mode
    
    int maxValue = 0, maxCount = 0;
   for (int i = 0; i < n; ++i) 
   {
      int count = 0;
      
      for (int j = 0; j < n; ++j) 
      {
         if (arr[j] == arr[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = arr[i];
      }
   }
    printf("Mean: %f\n",mean);
    printf("median: %f\n",fmedian);
    printf("Mode: %d\n",maxValue);
}
```
