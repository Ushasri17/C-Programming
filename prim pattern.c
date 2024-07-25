#include<stdio.h>
int prime(int a){
	int i,j,count;
	for(i=2;i<a;i++){
		count=0;
		for(j=2;j<=i;j++){
			if(i%j==0)
				count+=1;
		}
	}
	if(count==1)
		return i;
}
int main(){
	int i,j,k,l,row;
	printf("enter  no.of rows");
	scanf("%d",&row);
	for(i=0;i<row;i++)
	{
		for(l=row;l>=i;l--){
			printf(" ");
		}
		for(j=0;j<=i;j++){
			printf("%5d",prime(i));
		}
		printf("\n");
	}
}