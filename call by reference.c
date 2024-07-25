#include<stdio.h>
void swap(int *a,int *b){
	*a+=*b;
	*b=*a-*b;
	*a=*a-*b;
	printf("\nthe values of a and b after swapping in the function are %d,%d",*a,*b);
	
}
int main(){
	int a,b;
	printf("enter a ,b values");
	scanf("%d %d",&a ,&b);
	swap(&a,&b);
	printf("\nthe values of a and b after function call are %d,%d",a,b);
}