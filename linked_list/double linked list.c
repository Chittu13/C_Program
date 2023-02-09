#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* next;
    struct node* prev;
};
void insert(struct node** head,int data)
{
    struct node* cnode=(struct node*)malloc(sizeof(struct node));
    cnode->data=data;
    cnode->next=*head;
    cnode->prev=NULL;
    if(*head!=NULL)
    {
        (*head)->prev=cnode;
    }
    *head=cnode;
}
void display(struct node* p)
{
    struct node* last;
    while (p != NULL) {
        printf("%d->", p->data);
        last = p;
        p = p->next;
    }
    printf("NULL");
    printf("\n");
    printf("NULL");
    while (last != NULL) {
        printf("<-%d", last->data);
        last = last->prev;
    }
    
}
void main()
{   int a,b,c,d;
  scanf("%d%d%d%d",&a,&b,&c,&d);
   struct node* head=NULL;
   insert(&head,a);
   insert(&head,b);
   insert(&head,c);
   insert(&head,d);
   display(head);
}