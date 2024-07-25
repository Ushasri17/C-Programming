#include<stdio.h>
int main()
{
	 int i,j,n,k,mid,ind,flag=0,st,en,a[100];
	printf("Enter the Value of N: ");
	scanf("%d", &n)	;
	printf("Enter the Value of key: ");
	scanf("%d", &k)	;
	printf("Enter the Elements:");
	for(i=0;i<=n-1;i++){
		scanf("%d", &a[i]);
	}
	st=0;
	en=n-1;	
	while(st<en)										//binary search
	{
		mid=(st+en)/2;
		if(a[mid]==k)
		{
			flag=1;
			break;
		}
		if(a[mid]<k)	st=mid+1;
		else en=mid+1;
	}
	if(flag==1)
	printf("the key is found at the position %d",mid);
	else  printf("the key is not found");	

}