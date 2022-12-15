# Pointers with arrays


```c 

#include <stdio.h>
int main()
{

int a[5]={1,2,3,4,5};
int* ptr=a;
for (int i=0; i<5;i++)
{
	printf("\nvalue: %d",*ptr);
	printf("\naddress: %p",ptr);
	ptr++;

}
return 0;

}
```
