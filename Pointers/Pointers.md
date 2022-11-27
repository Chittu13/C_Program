


# Pointers



```c
#include <stdio.h>
int main()
{
int value=5;

int* pt;

// & operator before x is used to get address

// of x. The address of x is assigned to ptr.pt=&v

// note that data type of pt and value must be same

pt = &value;
  
    // assign the address of a valueiable to a pointer

    printf("Value at pt = %p \n", pt);          //address at ptr = 0x7ffd15b5deec 
    printf("Value at value = %d \n", value);    //value  at value = 20
    printf("Value at *pt = %d \n", *pt);        //Value at *ptr = 20 
}
```

#### Output

> - Value at ptr = 0x7ffd15b5deec


>- Value at var = 20 


>- Value at *ptr = 20 
