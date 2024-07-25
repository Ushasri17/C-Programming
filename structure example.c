#include<stdio.h>
	struct {
		int age;
		int salary;
		char *name;
	}e1,e2,manager;
	int mana(){
		/*struct employ{
		int age;
		int salary;
		char *name;
	}manager;*/
	manager.age=27;
	if(manager.age>=30)
	manager.salary=30000;
	else
	manager.salary=25000;
	return manager.salary;
	}
int main(){
	printf("enter emp1 &emp2 salaries");
	scanf("%d %d",&e1.salary,&e2.salary);
	printf("manager salary is %d",mana());
}