#include<stdio.h>
struct comp{
	int real;
	float imag;
}n1;
struct real{
	struct comp com;
	int i;
}num;
int main(){
	num.com.real=17;
	num.com.imag=18.7;
	num.i=07;
	n1.real=77;
	n1.imag=33.3;
	printf("%d %.1f \n",num.com.real,num.com.imag);
	printf("%d %.1f",n1.real,n1.imag);
}  /*
#include <stdio.h>
struct complex {
  int imag;
  float real;
};
struct number {
  struct complex comp;
  int integer;
} num1;
int main() {
  num1.comp.imag = 11;
  num1.comp.real = 5.25;
  num1.integer = 6;
  printf("Imaginary Part: %d\n", num1.comp.imag);
  printf("Real Part: %.2f\n", num1.comp.real);
  printf("Integer: %d", num1.integer);
  return 0;
}*/