


# Types of Linked list.



### Single Linked List    :-->   Navigation is forward only.

### Doubly Linked List    :-->   Forward and backward navigation is possible.

### Circular Linked List  :-->   Last element is linked to the first element.


--------------------------------------------------------------------------------------------------------------------------------------------------------------------------

## 1. Single Linked List


### A single linked list is a list made up of nodes that consists of two parts.



- data  ----- Contains the actual data.


- link  ----- Contains the address of the next node of the list.


```c
#include <stdio.h>
#include <stdlib.h>

struct node{
int data;
struct node *next;
};

int main()
{
struct node *head;
head=(struct node* )malloc(sizeof(struct node));
head->data=45;
head->next=NULL;

printf("%d",head->data);
return 0;
}
```



       
               
