# Implement a double – ended queue where insertion and deletion operations are possible at both ends.

```c
#include <stdio.h>
#include <stdlib.h>

#define size 5

int main()
{
    
    int arr[size],R=-1,F=0,te=0,ch,n,i,x;
    while (ch!=6)
    {
        
        printf("F=%d R=%d\n\n",F,R);
        printf("1. Add Rear \n");
        printf("2. Delete Rear \n");
        printf("3. Add Front \n");
        printf("4. Delete Front \n");
        printf("5. Display \n");
        printf("6. Exit \n");
        printf("Enter Choice: \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                if (te==size)
                {
                    printf("Queue is full");
                    
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                    R=(R+1)%size;
                    arr[R]=n;
                    te=te+1;
                }
                break;
                
            case 2:
                if (te==0)
                {
                    printf("Queue is Empty");
                    
                }
                else
                {
                    if(R==-1)
                    {
                        R=size-1;
                    }
                    printf("Number Deleted from rear end= %d ",arr[R]);
                    R=R-1;
                    te=te-1;
                    
                }
                break;
                
            case 3:
                if (te==size)
                {
                    printf("Queue is full");
                    
                }
                else
                {
                    printf("Enter a number ");
                    scanf("%d",&n);
                   if(F=0)
                   {
                       F=size-1;
                   }
                   else
                   {
                       F=F-1;
                   }
                   arr[F]=n;
                   te=te+1;
                }
                break;
                
            case 4:
                if (te==size)
                {
                    printf("Queue is Empty");
                    
                }
                else
                {
                    printf("Number Deleted From Front End = %d ",arr[F]);
                    F=(F-1)%size;
                   te=te-1;
                   
                }
                break;
                
            case 5:
                if (te==0)
                {
                    printf("Queue is Empty");
                    
                }
                else
                {
                    x=F;
                    for(i=1;i<te;i++)
                    {
                        printf("%d",arr[x]);
                        x=(x+1)%size;
                    }
                    
                }
                break;
                
                case 6:
                    exit(0);
                    break;
                default:
                    printf("Wrong Choice");
                    
            
                }
            
        }
        return 0;
        
    }



```
