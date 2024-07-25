/*
I)
1.C Program to demonstrate, handling of pointers in C.
2.C Program to access array elements using pointers.
3. C Program to find the sum of n numbers with arrays and
pointers.
4. C Program to swap two numbers using pointers and function
5. C Program to find sum of n elements using
A)malloc() function.
B) calloc() function
---------------------------------------------------------------------------------------------------------------------------------------------
II)
1. C Program to check whether given number is prime or not using
user-defined function.
2. C Program to swap two integer values using call by value and
call by reference.
3. C Program to find the sum of 1st ten numbers using recursion.
4. C Program to find the factorial of a given number using
recursion.
5. C Program to find Fibonacci series using recursion.
6. C Program using structures to read and display the information
about a student (student name, ID, percentage).
7. C Program using structures to read and display the Employee
details of an organization ( EName, EID, Age ,Salary) using
pointer to a structure.
8. C Program to read, display, add and subtract two complex
numbers.
9. C Program to read and display the information of a student
using nested structure.
10. C Program, using an array of pointers to a structure, to
read and display the data of students.
11. C Program to demonstrate arrays of Union variables.
12. C Program using structures to maintain a book library
(Book is a structure) which has following operations print
various types of books along with their count, author details,
search a book by author name or book name or publisher.*/
#include<stdio.h>
void isprime(int a){
	int c,i;
	for(i=2;i<a/2;i++){
		if(a%i==0)
		c++;
	}
	if(c==0)
	printf("the number is prime");
	else
	printf("the number is not prime");
}
void value(int a,int b){
	int tem ;
	tem=a;
	a=b;
	b=tem;	
}
void ref(int *x,int *y){
	int tem ;
	tem=*x;
	*x=*y;
	*y=tem;	
}
int sum(){
static	int a=0;
	while(a<=10)
	{a++;
	return a+sum();
	}
}
int fib(int n){
	if(n==0) return 0;
	else if (n==1) return 1;
	else return fib(n-1)+fib(n-2);
}
struct st{
	char n[20];
	char id[7];
	int p;
};
struct em{
	char name[20];
	int age,id;
	int salary;
};
union ref{
	char name[20];
	int ph;
};
int main(){
	int a,b;
/*	int *x,*y;
	printf("enter a number");
	scanf("%d",&a);
	printf("enter a number");
	scanf("%d",&b);
	isprime(a);
	value(a,b);
	printf("values after swap by value are %d %d",a,b);
	x=&a;y=&b;
	ref(x,y);
	printf("\nvalues after swap by reference are %d %d",*x,*y);*/
//	printf("%d",sum());
//printf("%d",fib(a));
	printf("enter n value");
scanf("%d",&a);
/*	printf("enter student name id and percentage");
	struct st s[5];
	for(int i=0;i<a;i++){
		scanf("%s %s %d",s[i].n,s[i].id,&s[i].p);
	}
	for(int i=0;i<a;i++){
		printf("%s %s %d%%\n",s[i].n,s[i].id,s[i].p);
	}  */
/*	struct em e1,*s1;
	s1=&e1;
	printf("enter employ name age  id and salary: ");
	scanf("%s %d %d %d",s1->name,&s1->age,&s1->id,&s1->salary);
	printf("%s %d %d %d",(*s1).name,(*s1).age,(*s1).id,s1->salary);  */
	union ref p[10];
	for(int i=0;i<a;i++){
		scanf("%s  %d",p[i].name,&p[i].ph);
	}
	for(int i=0;i<a;i++){
		printf("%s  %d%\n",p[i].name,p[i].ph);
	} 
}
