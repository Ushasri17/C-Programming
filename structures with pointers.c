#include<stdio.h>
struct student{
	char name[20];
	int roll,id;
};
struct student s,*s1;
int main(){
	s1=&s;
	//struct student *s1;
	printf("enter student name roll and id: ");
	scanf("%s %d %d",s1->name,&s1->roll,&s1->id);
	printf("%s %d %d",(*s1).name,(*s1).roll,(*s1).id);
}
/*
// C Program to demonstrate Structure pointer
#include <stdio.h>
#include <string.h>

// Creating Structure Student
struct Student {
	int roll_no;
	char name[30];
	char branch[40];
	int batch;
};

// variable of structure with pointer defined
struct Student s, *ptr;

int main()
{

	ptr = &s;
	// Taking inputs
	printf("Enter the Roll Number of Student\n");
	scanf("%d", &ptr->roll_no);
	printf("Enter Name of Student\n");
	gets(ptr->branch);
	scanf("%s", &ptr->name);
	printf("Enter Branch of Student\n");
	scanf("%s", &ptr->branch);
	printf("Enter batch of Student\n");
	scanf("%d", &ptr->batch);

	// Displaying details of the student
	printf("\nStudent details are: \n");

	printf("Roll No: %d\n", ptr->roll_no);
	printf("Name: %s\n",ptr->name);
	printf("Branch: %s\n", ptr->branch);
	printf("Batch: %d\n", ptr->batch);

	return 0;
}*/
