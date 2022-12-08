# Data Structures: Passing the Structure Member as an Argument.



```c
#include <stdio.h>

struct student{
	char name[50];
	int age;
	int roll_no;
	float marks;
};

void print(char name[], int age,int roll,float marks)
{
  printf("Name: %s\nAge: %d\nRoll_No: %d\nMarks: %.2f",name,age,roll,marks);
}

int main()
{
    struct student s1={"Chittu",20,108,99.9};
    print(s1.name,s1.age,s1.roll_no,s1.marks);
    return 0;
}


```
