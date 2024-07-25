#include<stdio.h>
#include<stdlib.h>
int *f(){
	int a=7;
	return &a;
}
int main(){
	int *ptr=(int *)malloc(5*sizeof(int));
	*ptr=10;
	printf("%d\n",*ptr);
	free(ptr);			//pointer pointing to free-ed memory location is callled dangling pointer
	printf("%d\n",*ptr);
	{
		int a=17;
		int *ptr=&a;
		printf("%d\n",*ptr);
	}
	printf("%d\n",*ptr);
	int *ptr2= f();
	printf("%d\n",*ptr2);
}