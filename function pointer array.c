#include<stdio.h>
void sum(int a,int b){
	printf("%d\n",a+b);
}
void sub(int a,int b){
	printf("%d\n",a-b);					//function as an argument  to other function is callback function
}
void mul(int a,int b){
	printf("%d\n",a*b);
}
void div(int a,int b){
	printf("%d\n",a/b);
}
int main(){
	int ch,a,b;
	void (*fptr[10])(int,int)={sum,sub,mul,div};
	printf("enter choice 0-3 and 2 numbers");
	scanf("%d %d %d",&ch,&a,&b);
/*	switch(ch){
		case 1:sum(a,b);
		case 2:sub(a,b);
		case 3:mul(a,b);
		case 4:div(a,b);
	}*/
	(*fptr[ch])(a,b);	
}