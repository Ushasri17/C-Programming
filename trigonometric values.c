#include<stdio.h>
#include<math.h>
int fac(int a){
	if(a==0||a==1)  return 1;
	else return a*fac(a-1);
}
float sinx(float x){
	float sign=1,sum=0;
	int count;
	for(int i=1,count=1;count<=10;i+=2,count++){
		sum+=sign*(pow(x,i))/fac(i);
		sign*=-1;
	}
	return sum;
}
float cosx(float x){
	float sign=1,sum=0;
	int count;
	for(int i=1,count=1;count<=10;i+=2,count++){
		sum+=sign*((pow(x,i))/fac(i));
		sign*=-1;
	}
	return sum;
}
int main(){
	float x,radian;
	printf("enter x in degrees=");
	scanf("%f",&x);
	radian=x*(3.14/180);
	printf("\nsin%.2f=%2.f",x,sinx(radian));
	printf("\nsin%.2f=%2.f",x,cosx(radian));
}