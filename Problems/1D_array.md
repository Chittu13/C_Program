# 1. Write a program to print the elements of an array in (order and in reverse order)


``` c
#include <stdio.h>

int main()
{
   int size,array[50];
   
   printf("Enter the size of the array: ");
   
   scanf("%d",&size);
   
   printf("Please Enter the %d numbers :\n",size);
   
   for (int i=0;i<size;i++)
   {
     scanf("%d",&array[i]);
   }

   printf("\nIn Original order:\n");

   for (int i=0;i<size;i++)
   {
     printf("%d\t",array[i]);
   }

   printf("\nIn reverse order:\n");
   
   for (int i=size-1;i>=0;i--)
   {
       printf("%d\t",array[i]);
   }
   
   return 0;
}
```


# 2. Write a program to search an element in array


```c
#include <stdio.h>
int main()
{
   int size,num,array[50],n=1;

   printf("Enter the size of the array: ");
 
   scanf("%d",&size);
 
   printf("Plese enter %d numbers :\n",size);
 
   for (int i=0;i<size;i++)
   {
     scanf("%d",&array[i]);
   }

   printf("\nEnter the number you want to search in array: ");

   scanf("%d",&num);

    for (int i=0;i<size;i++)
   { 
     if (num==array[i])
     {
        printf("\n[+]Found %d and index = %d",array[i],i);
        n+=1;
        break;
     }
    }

   if (n==1)
   {
       printf("\n[-]The element not found in array :( ");
   }
    
    return 0;
}
```


# 3. Write a program to insert an element in array


```c
#include <stdio.h>

int main()
{
   int size,a[50],num,pos,i;

   printf("Enter the size of the array: ");

   scanf("%d",&size);

   printf("Enter the %d number:\n",size);

   for (i=0;i<size;i++)
   {
     
     scanf("%d",&a[i]);
   }

   printf("Enter the number you want to insert in a array: ");

   scanf("%d",&num);

   printf("Enter the position you want to insert the number: ");

   scanf("%d",&pos);

   for (i=size-1;i>=pos-1;i--)  
	{  
       a[i+1] = a[i];
     }

   a[pos-1] = num;
    
   printf("Resultant array is\n");

   for (i = 0; i <= size; i++)    
     printf("%d\t", a[i]); 

  return 0; 
}
```


# 4. Write a program to delete an element in array


```c
#include <stdio.h>

int main()
{
   int size,array[50],del,i;
   
   printf("Enter the size of the array: ");
   
   scanf("%d",&size);
   
   printf("Please Enter the %d numbers :\n",size);
   
   for (int i=0;i<size;i++)
   {
     
     scanf("%d",&array[i]);
   }
   printf("Enter the element position to delete: ");
   scanf("%d",&del);
   
   if (del>size || del<0)
   {
       printf("[-] Sorry deletion can not be done :( \n");
       printf("[-] Please enter the right postion form 1 to %d\n",size);
   }
   else
   {
       for (i=del-1;i<size-1;i++)
       {
            array[i]=array[i+1];
       }
   }
   size--;

   for (i=0;i<size;i++)
   {
       printf("%d\t",array[i]);
   }

   return 0;
}
```


# 5. Write  a program to merge two arrays into single array



```c
#include <stdio.h>

int main()
{
   int size1,size2,a[50],b[50],i,j,ar[100];
   printf("Enter the size of first array: ");
   scanf("%d",&size1);
   printf("Enter the %d numbers in first array: \n",size1);
   for(i=0;i<size1;i++)
   {
       scanf("%d",&a[i]);
       ar[i]=a[i];
   }
   j=i;
   printf("Enter the size of second array: ");
   scanf("%d",&size2);
   printf("Enter the %d numbers in second array: \n",size2);
   for(i=0;i<size2;i++)
   {
       scanf("%d",&b[i]);
       ar[j]=b[i];
       j++;
   }
   printf("{");
   for (i=0;i<size1+size2;i++)
   {
       printf("%d\t",ar[i]);
   }
   printf("}");
}
```