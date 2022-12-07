#  Memory Allocation

> malloc()

> calloc()

> free()

> realloc()


## Using Malloc
```c
#include <stdio.h>
#include <stdlib.h>

int main() 
{
int x,*p,num,re;
printf("Enter the number of elements: ");
scanf("%d",&x);
p=(int*)malloc(x*sizeof(int));

for(int i=0;i<x;i++)
{
    printf("\nEnter the number: ");
    scanf("%d",p+i);
}
    for(int i=0;i<x;i++)
      {
          printf("%d ",*(p+i));
      }
    
    return 0;
}
```

## Using Malloc
```c
#include <stdio.h>
#include <stdlib.h>

int main() 
{
int x,*p,num,re;
printf("Enter the number of elements: ");
scanf("%d",&x);
p=(int*)calloc(x,sizeof(int));

for(int i=0;i<x;i++)
{
    printf("\nEnter the number: ");
    scanf("%d",p+i);
}
    for(int i=0;i<x;i++)
      {
          printf("%d ",*(p+i));
      }
    
    return 0;
}
```

## Using Malloc and Realloc function

```c
#include <stdio.h>
#include <stdlib.h>

int main() 
{
int x,*p,num,re;
printf("Enter the number of elements: ");
scanf("%d",&x);
p=(int*)malloc(x*sizeof(int));

for(int i=0;i<x;i++)
{
    printf("\nEnter the number: ");
    scanf("%d",p+i);
}
    printf("\nYou want to sill add the number if yes type'1' or no'0': ");
    scanf("%d",&re);
    if(re==1)
    {
    printf("\nEnter the number of elements: ");
    scanf("%d",&num);
    p=(int*)realloc(p,x+num*sizeof(int));
    for(int i=x;i<x+num;i++)
    {
        printf("\nEnter the number: ");
        scanf("%d",p+i);
    }
      for(int i=0;i<x+num;i++)
      {
          printf("%d ",*(p+i));
      }
    }
    else{
    for(int i=0;i<x;i++)
      {
          printf("%d ",*(p+i));
      }
    }
    

    return 0;
}
```

