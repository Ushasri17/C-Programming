#include<stdio.h>
 struct student{
	char name[50];
	int roll;
	int mobile;
}s1,s2,s3;
int main(){
	 s1.name[50]="Usha";
	 s1.roll=8;
	 s1.mobile=12345;
struct	student s2={ "sruj",03,6789};				//direct intialization
	printf("enter student 3 name,roll,id");
	scanf("%s %d %d",& s3.name,&s3.roll,&s3.mobile);
}