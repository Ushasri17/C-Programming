#include<stdio.h>
#define N 5
int main(){
	int a[N],*p;
	printf("enter elements");
	for(p=a;p<=a+N-1;p++)
	scanf("%d",p);
	printf("printing elements in reverse order\n");
	for(p=a+N-1;p>=a;p--)
	printf("%d",*p);
}