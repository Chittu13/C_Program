### if you use printf in printf if will print


```c
#include <stdio.h>

int main()
{
printf("%d",printf("hello"));

return 0;
}
```
output:
```hello5```



## 2.Write a program to add two numbers without using '+'

```c
#include <stdio.h>

int main()
{
int a=4,b=3;
printf("%d",a-(-b));

return 0;
}
```
output:
```7```


## 3. Write a program to sub two numbers without using '-'

```c
#include <stdio.h>

int main()
{
int a=4,b=3;
printf("%d",a+(~b)+1);

return 0;
}
```
output:
```1```





```c
#include <stdio.h>

int main()
{

float x=0.4;
if (x==0.4)
printf("hello");
else
printf("bye");


return 0;
}
```

output:
```bye```








```c
#include <stdio.h>

int main()
{

float x=0.5;
if (x==0.5)
printf("hello");
else
printf("bye");


return 0;
}
```

output:
```hello```





## 3.write a program without using the main funcion


```c
#include <stdio.h>

#define hello main
int hello()
{
    printf("hello");
    
}

```
