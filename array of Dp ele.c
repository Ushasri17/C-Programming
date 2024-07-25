#include<stdio.h>
int main(){
	int a[50],n,i,j,count;
	printf("enter n value");
	scanf("%d",&n);
	printf("enter elements");
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]==a[j])
			count++;
	
		}
	}
	if(count>0)
	printf("the aray contain duplicate elements");
	else 
	printf("the array does notcontain duplicate elements");
	}