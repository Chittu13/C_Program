# Size Of Data Types


> char - 1

> int - 4

> float - 4

> double - 8

> void - 1
 


```c
#include <stdio.h>
int main()
{
    printf("size of void %ld\n",sizeof(void));
    printf("size of int %ld\n",sizeof(int));
    printf("size of char %ld\n",sizeof(char));
    printf("size of float %ld\n",sizeof(float));
    printf("size of double %ld\n",sizeof(double));

}
```