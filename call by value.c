#include<stdio.h>
int num(int a,int b){
	a=a+b;
	return a;
}
void swap(int u,int v){
	u=u+v;
	v=u-v;
	u=u-v;
	printf(" the values of a & b after function swap are %d ,%d",u,v);
	
}
int main(){
	int a,b;
	printf("enter a ,b values");
	scanf("%d %d",&a ,&b);
	int res=num(a,b);
	printf("the value of a in the function is %d",res);
	printf("\nthe value of a in the main fun is:%d",a);
	swap(a,b);
	printf("\n the value of a & b after function call are %d,%d",a,b);
}