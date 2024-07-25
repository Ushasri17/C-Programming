#include<stdio.h>
void sum(int a,int b){
	printf("%d\n",a+b);
}
void sub(int a,int b){
	printf("%d\n",a-b);					//function as an argument  to other function is callback function
}
void display(void(*fptr)(int,int)){
	fptr(10,7);
}
void main(){
	display(sum);
	display(sub);
}