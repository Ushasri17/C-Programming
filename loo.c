
/*#include<stdio.h>
int main( )
{
int n,i,fact=0;
printf("Enter a number:");
scanf("%d",&n);
for (i=2;i<=n/2;i++)
{
if(n%i == 0)
fact++;
}
if(fact == 0)
printf("%d is Prime\n",n);
else
printf("%d is not a Prime\n",n);
return 0; }*/
//Ex 14: Write a C program to print the Floyd‟s triangle.
#include<stdio.h>
int main()
{
int n, i, j,k=1; //i and j represents rows and columns respectively
printf("Enter number of rows:" );
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
printf("%d ",k++);
}
printf("\n");
}
return 0;
}
