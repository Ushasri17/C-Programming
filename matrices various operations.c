#include<stdlib.h>
#include<math.h>
void main()
{
	int a[10][10],b[10][10],c[10][10],i,j,k,m,n,p,q,r,s,t,u,v,w,x,y,z,ch;
	float det,adj[10][10],inv[10][10];
	printf("enter the order of matrix A\n");
	scanf("%d%d",&m,&n);
	printf("enter the order of matrix B\n");
	scanf("%d%d",&p,&q);
	printf("enter the elements of matrix A\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("enter the elements of matrix B\n");
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("enter your choice\n");
	printf("1.addition\n2.multiplication\n3.transpose\n4.inverse\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			if(m==p&&n==q)
			{
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						c[i][j]=a[i][j]+b[i][j];
					}
				}
				printf("the sum of matrix A and B is\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						printf("%d\t",c[i][j]);
					}
					printf("\n");
				}
			}
			else
			{
				printf("addition is not possible\n");
			}
			break;
		case 2:
			if(n==p)
			{
				for(i=0;i<m;i++)
				{
					for(j=0;j<q;j++)
					{
						c[i][j]=0;
						for(k=0;k<n;k++)
						{
							c[i][j]=c[i][j]+a[i][k]*b[k][j];
						}
					}
				}
				printf("the product of matrix A and B is\n");
				for(i=0;i<m;i++)
				{
					for(j=0;j<q;j++)
					{
						printf("%d\t",c[i][j]);
					}
					printf("\n");
				}
			}
			else
			{
				printf("multiplication is not possible\n");
			}
			break;
		case 3:
			printf("the transpose of matrix A is\n");
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					printf("%d\t",a[j][i]);
				}
				printf("\n");
			}
			printf("the transpose of matrix B is\n");
			for(i=0;i<p;i++)
			{
				for(j=0;j<q;j++)
				{
					printf("%d\t",b[j][i]);
				}
				printf("\n");
			}
			break;
		case 4:
			if(m==n)
			{
				det=a[0][0]*(a[1][1]*a[2][2]-a[1][2]*a[2][1])-a[0][1]*(a[1][0]*a[2][2]-a[1][2]*a[2][0])+a[0][2]*(a[1][0]*a[2][1]-a[1][1]*a[2][0]);
				if(det==0)
				{
					printf("inverse is not possible\n");
				}
				else
				{
					adj[0][0]=a[1][1]*a[2][2]-a[1][2]*a[2][1];
					adj[0][1]=-(a[1][0]*a[2][2]-a[1][2]*a[2][0]);
					adj[0][2]=a[1][0]*a[2][1]-a[1][1]*a[2][0];
					adj[1][0]=-(a[0][1]*a[2][2]-a[0][2]*a[2][1]);
					adj[1][1]=a[0][0]*a[2][2]-a[0][2]*a[2][0];
					adj[1][2]=-(a[0][0]*a[2][1]-a[0][1]*a[2][0]);
					adj[2][0]=a[0][1]*a[1][2]-a[0][2]*a[1][1];
					adj[2][1]=-(a[0][0]*a[1][2]-a[0][2]*a[1][0]);
					adj[2][2]=a[0][0]*a[1][1]-a[0][1]*a[1][0];
					for(i=0;i<m;i++)
					{
						for(j=0;j<n;j++)
						{
							inv[i][j]=adj[i][j]/det;
						}
					}
					printf("the inverse of matrix A is\n");
					for(i=0;i<m;i++)
					{
						for(j=0;j<n;j++)
						{
							printf("%f\t",inv[i][j]);
						}
						printf("\n");
					}
				}
			}
			else
			{
				printf("inverse is not possible\n");
			}
			break;
		default:
			printf("invalid choice\n");
	}
	getch();
}