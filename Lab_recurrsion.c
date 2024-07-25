#include<stdio.h>
//numbers from 1 to n & n to 1  function
int num(int x){
	if(x==0) return 1;
	printf("%d  ",x);
	num(x-1);
//	if(x==1) printf("\n  1 to n is : \n");
	//printf("%d  ",x);
}
//a power  b  function
int power(int a,int b){
	if(b==1)  return a;
	 if(b%2==0){
	return power(a,b/2) *power(a,b/2);
	}
	else{
			return power(a,b/2) *power(a,b/2)*a;
}
	}
int main(){
	int n,a,b;
	printf("enter n value");
	scanf("%d",&n);
		printf("  n to 1 is :\n");
	num(n);
	printf("\nenter a, b values");
	scanf("%d  %d",&a,&b);
printf("%d",power(a,b));
}