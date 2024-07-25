#include<stdio.h>
#include<conio.h>
void main(){
int num1, num2 ;
void addition(int, int) ; // function declaration
//clrscr() ;
num1 = 10 ;
num2 = 20 ;
printf("\nBefore swap: num1 = %d, num2 = %d", num1, num2) ;
addition(num1, num2) ; // calling function
getch();
}
void addition(int a, int b) // called function
{
printf("SUM = %d", a+b) ;}