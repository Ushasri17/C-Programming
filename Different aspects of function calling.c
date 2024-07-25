#include<stdio.h>
//1.function without arguments and without return value
void sum(){
	int a,b; 
 printf("\nEnter two numbers"); 
 scanf("%d %d",&a,&b); 
 printf("The sum is %d",a+b);
}
//2.Example for Function without argument and with return value
int square() 
 { 
 float side; 
 printf("Enter the length of the side in meters: "); 
 scanf("%f",&side); 
 return side * side; 
 }
 //3.Example for Function with argument and without return value
 void average(int a, int b, int c, int d, int e) 
 { 
 float avg; 
 avg = (a+b+c+d+e)/5; 
 printf("The average of given five numbers : %f",avg); 
 }
 //4.Example for Function with argument and with return value
 int even_odd(int n) 
 { 
 if(n%2 == 0) 
	 return 1; 
 else
 return 0;  
}
int main(){
	printf("\nGoing to calculate the sum of two numbers:");
	sum();
	printf("\nGoing to calculate the area of the square\n"); 
	float area = square(); 
    printf("The area of the square: %f",area);
	int a,b,c,d,e; 
	printf("\nGoing to calculate the average of five numbers:"); 
	printf("\nEnter five numbers:"); 
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e); 
	average(a,b,c,d,e);
	int n,flag=0; 
	printf("\nGoing to check whether a number is even or odd"); 
	printf("\nEnter the number: "); 
	scanf("%d",&n); 
	flag = even_odd(n); 
	if(flag == 0)  
	printf("The number is odd"); 
	else  
	printf("The number is even"); 
}