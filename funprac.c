#include<stdio.h>
int main()
{
	int arr[100];
	int i,n,mul,sum,mean;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",arr[i]);
		sum+=i;
		mul*=i;
	}
	printf("sum and multiplication are %d %d \n",sum,mul);
	printf("mean is %d",sum/n);
}