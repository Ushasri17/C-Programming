#include<stdio.h>
void hello( int a){
	printf("hello world %d",a);
}
float num(int);
int numb(int );
int main(){
	int x=17;
	hello(x);
int res=	numb(x);
printf("\ninteger function result %d",res);
float r=	num(x);
printf("%f",r);
}
 int numb(int a){
	return a;
}
float num(int a){
	printf("\nfloat function result %d\n",a);
	return a+0.5;
}