


# Pointer to structure as an argument




### If the size of the structure is very large then passsing the copy of the whole sturcture is not efficient.



#### Better Choice: Pass the address of the structure 




#### Use the arrow operator (->) to access the structure members inside the called function




```c
#include<stdio.h>


struct student{
	char name[50];
	int age;
	int roll_no;
	float marks;
};

void print(struct student *p)
{
printf("Name: %s\nAge: %d\nRoll_No: %d\nMarks Obtained: %.2f",p->name,p->age,p->roll_no,p->marks);
}

int main()
{
struct student st={"Chittu",20,108,90};
print(&st);
return 0;
}
