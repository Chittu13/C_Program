# Returning Structure Variable From A Function

### Returning a structure variable form a function is similar to returning a variable from a function.

```c
#include <stdio.h>

struct student{
    char name[50];
    int roll_no,age;
    float marks;
};
struct student input(struct student p)
{
    printf("Enter the Name: ");
    scanf("%s",p.name);
    printf("Enter the Age: ");
    scanf("%d",&p.age);
    printf("Enter the Roll_no: ");
    scanf("%d",&p.roll_no);
    printf("Enter the marks: ");
    scanf("%f",&p.marks);
    return p;
}

void print(struct student s)
{
    printf("\n-------------Students Details-----------\n");
    printf("Name: %s\nAge: %d\nRoll_No: %d\nMarks: %.2f",s.name,s.age,s.roll_no,s.marks);
}

int main() {
    struct student st;
    st=input(st);
    print(st);
    // printf("\n%d",st.age);

    return 0;
}

```