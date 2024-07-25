#include<stdio.h>
#include<stdlib.h>
int main(){
	int *ptr=NULL,a=3;
	int *ptr2=NULL;
//	printf("%d\n",*ptr);
//	printf("%d\n",*ptr2);
	if(ptr==ptr2){
	printf("both are unintialized\n");
	}
	else {
		printf("%d\n",*ptr);
	}
	printf("%d\n",*ptr2);
}