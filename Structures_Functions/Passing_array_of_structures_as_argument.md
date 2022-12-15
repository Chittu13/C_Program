


# Passing array of structures as argument.




```c
#include <stdio.h>

struct num{
int x,y;
};

void print(struct num n[])
{
  for (int i=0;i<3;i++)
  {
  printf("{%d %d}\n",n[i].x,n[i].y);
  }
}
int main()
{
struct num n[3]={{1,2},{4,6},{73,5}};
print(n);
return 0;
}
  ```
