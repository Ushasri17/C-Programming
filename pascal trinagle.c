#include<stdio.h>
#include<stdlib.h>
int fac(int a){
	if(a==0||a==1)   return 1;
	else return a*fac(a-1);
}
int main(){
	int i,j,n,coef;
	printf("enter rows");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=0;j<=n-i;j++){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			if(j==0||i==0)
			coef=1;
			else
			coef=fac(i)/(fac(j)*fac(i-j));
		printf("%d ",coef);
		}printf("\n");
	}
}
