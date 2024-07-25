#include<stdio.h>
int fac(int a){
	if(a==0||a==1)  return 1;
	else return a*fac(a-1);
}
int main(){
	int i,j,n,c;
	printf("enter n :");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		for(j=0;j<=i;j++){
			c=0;
		c=fac(i)/(fac(j)*fac(i-j));
		printf("%d",c);	
		}printf("\n");
	}
}