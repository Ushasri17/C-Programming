#include<stdio.h>
int main()
{
/*int i,j;

for(i=1;i<=5;i++)
{
	for(j=1;j<=i;j++)
	{
		printf("* ");
	} printf("\n");
	}*
int i,j;
for(i=1;i<=5;i++)
{
	for(j=5;j>=i;j--)
	{
		printf("* ");
	} printf("\n");
	}	
/*int i,j;
for(i=5;i>=1;i--)
{
	for(j=1;j<=i;j++)
	{
		printf("* ");
	} printf("\n");
	} 
int i,j;
for(i=1;i<=5;i++)
{
	for(j=1;j<=5;j++)
	{ if(i+j<=5)
		printf(" ");
	else
	 printf("* ");
	} printf("\n");
	} 	
int i,j;
for(i=1;i<=5;i++)
{
	for(j=1;j<=5;j++)
	{ if(i+j<=5)
		printf(" ");
	else
	 printf("*");
	} printf("\n");
	} 
	int i,j,space;
for(i=1;i<=5;i++)
	{
		for(space=1;space<=(5-i);space++)           
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");        // star and space
		}
	printf("\n");
} 
int i,j,k=1,n;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=n;j++)						//number pyramid
	{ if(i+j<=n)
		printf("  ");
	else
	 printf(" %d ",k++);
	} printf("\n");
	} 	
int i,j,k=1,n;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
	 printf("%d",k++);
	 printf("  ");	
	}printf("\n");
}  
int i,j,k=1,n;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
	 printf("%d",i);
	 printf("  ");	
	}printf("\n");
} 
	int i,j,space,k=1;
	int n;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
		for(space=1;space<=(n-i);space++)           
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);        // number and space
		}
	printf("\n");
} 
 int i,j,k=1,n;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	for(j=1;j<=i;j++)
	{
	 printf("%d",j);
	 printf("  ");	
	}printf("\n");
} 
 int i,n,sum=0,t=9;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)		//	series of 9
{
	sum+=t;
	printf("%ld   ",t);
	t=t*10+9;
}
printf("\nThe sum of the series = %d \n",sum);  
 int i,j,n,p,q;
   printf("Input number of rows : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
     if(i%2==0)		    //	pattern of 0&1
     { p=1;q=0;}
     else
     { p=0;q=1;}
      for(j=1;j<=i;j++)
	 if(j%2==0)
	    printf("%d",p);
	 else
	    printf("%d",q);
     printf("\n");
   }  
   int i,j,r;
   printf("Input number of rows (half of the diamond) :");
   scanf("%d",&r);
   for(i=0;i<=r;i++)
   {
     for(j=1;j<=r-i;j++)
     printf(" ");
     for(j=1;j<=2*i-1;j++)			//diamod pattern
       printf("*");
     printf("\n");
}
   for(i=r-1;i>=1;i--)
   {
     for(j=1;j<=r-i;j++)
     printf(" ");
     for(j=1;j<=2*i-1;j++)
       printf("*");
     printf("\n");
 }  
/*  int no_row,c=1,blk,i,j;
    printf("Input number of rows: ");
    scanf("%d",&no_row);
    for(i=0;i<no_row;i++)
    {
        for(blk=1;blk<=no_row-i;blk++)
        printf("  ");
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            printf("% 4d",c);
        }
        printf("\n");}  
        
   	int i,j,space,k=1;
	int n;
printf("enter n value");
scanf("%d",&n);
for(i=1;i<=n;i++)
	{
		for(space=1;space<=(n-i);space++)           
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);        // number and space
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d ",j);       
		}
	printf("\n");
}  */
int i, j;
   char alph = 'A';
   int n,blk;
   int ctr = 1;
 
   printf("Input the number of Letters (less than 26) in the Pyramid : ");
   scanf("%d", &n);
 
   for (i = 1; i <= n; i++) 
	{
	for(blk=1;blk<=n-i;blk++)        
	printf("  ");
      for (j = 0; j <= (ctr / 2); j++) 
         printf("%c ", alph++);
     alph = alph - 2;			//alphabet pattern
      for (j = 0; j < (ctr / 2); j++) 
         printf("%c ", alph--);
      ctr = ctr + 2;
      alph = 'A';
      printf("\n"); 
  }  
  
}