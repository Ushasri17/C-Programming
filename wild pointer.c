#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr=(int *)malloc(5*sizeof(int));			//pointer which is unintialized or pointing any random values is wild pointer
	printf("%d",*ptr);
}