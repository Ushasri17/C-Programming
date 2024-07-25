#include<stdio.h>
int main()
{
	int a[100],i,j,n,sum=0,mul=1,secmin,secmax;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		sum+=a[i];
		mul*=a[i];
	}
	printf("sum,mul and mean are %d  %d  %d\n",sum,mul,sum/n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i+1]<a[j])
			{
				int tem=a[i+1];
				a[i+1]=a[j];
				a[j]=tem;
			}
		}
	}
	printf("second min and max are: %d %d",a[1],a[n-2]);
}