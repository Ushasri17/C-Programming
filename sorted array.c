#include<stdio.h>
int main(){
	int n,i,m,j,p;
	int a[m],b[n];
	int c[p];
	printf("enter no of elements in 1st array:");
	scanf("%d",&m);
	printf("enter no of elements in 2nd array:");
	scanf("%d",&n);
	printf("Enter elemnts in sorted order:");
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter elements in sorted order");
		for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++){
		c[i]=a[i];
	}
	for(i=0,j=m;i<n && j<m+n;i++,j++){
		c[j]=b[i];
	}
	printf("merged array:");
	for(i=0;i<m+n;i++){
		printf("%d ",c[i]);
	}
	for(i=0;i<m+n;i++){
		for(j=i+1;j<m+n;j++){
			if(c[i]>c[j]) {
				int temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
		}
	}
	printf("\nsorted array:");
	for(i=0;i<m+n;i++){
		printf("%d ",c[i]);
	}
	return 0;
}