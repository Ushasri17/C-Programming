#include<stdio.h>
int main(){
	int x,*p;
	p=&x;
	x=0x17;	//x=23
	*p+=4;	//x=27
	x=*p+4;	//x=31
	printf("%d %x",x,p);	
}