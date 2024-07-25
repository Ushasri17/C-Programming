#include<stdio.h>
int main()
{
	int a[10][10];
//	int  c,maxc=0,maxind;
//	int rowsum,summax=0,index;
//	int max=a[0][0];
	int b[10][10];
	int m[10][10];
	int s[10][10];
	int r1,r2,c1,c2,i,j;
	printf("rows for arr1:");
	scanf("%d",&r1);
	printf("cols for arr1:");
	scanf("%d",&c1);
//	int maxr=r1-1,maxc=c1-1,minr=0,minc=0;
	int count=0,tne=r1*c1;
/*	printf("rows for arr2:");
	scanf("%d",&r2);
	printf("cols for arr2:");
	scanf("%d",&c2); */ 
	printf("\n enter elements for array 1:");
	for(i=0;i<r1;i++)
	{  for(j=0;j<c1;j++)
			scanf("%d",&a[i][j]);
	}
	printf("\nelements of array 1:\n");
	for(i=0;i<r1;i++)
	{  for(j=0;j<c1;j++)
		{	printf("%d   ",a[i][j]);}printf("\n");  }
/*	printf("\n enter elements for array 2:");
	for(i=0;i<r2;i++)
	{  for(j=0;j<c2;j++)
			scanf("%d",&b[i][j]);
	}  
	 printf("\nelements of array 2:\n");
	for(i=0;i<r2;i++)
	{  for(j=0;j<c2;j++)
		{	printf("%d   ",b[i][j]);  }printf("\n");
	}
/*
for(i=0;i<r1;i++)
{  for(j=0;j<c1;j++)
		{   s[i][j]=a[i][j]+b[i][j];
		}
	}
printf("\nthe result of sum of two arrays is:\n")	;
for(i=0;i<r2;i++)
	{  for(j=0;j<c2;j++)
		{	printf("%d  ",s[i][j]);  }printf("\n");
	}  
	for(i=0;i<r1;i++)
	{  for(j=0;j<c1;j++)
		{  if(max<a[i][j])				//to print max element of an array
		   max=a[i][j];	}  }
		printf("the max of the array is %d",max);     //doubt  
//-------------------------------------------------------------------------------------------------------------------------
*/	for(i=0;i<c1;i++)
	{  for(j=0;j<r1;j++)
		{	b[i][j]=a[j][i];  
		}printf("\n");  }							//transpose of a matrix with help of other  matrix
	for(i=0;i<c1;i++)
	{  for(j=0;j<r1;j++)
		{	printf("%d   ",b[i][j]);}printf("\n");  }  
for(i=0;i<c1;i++)
	{  for(j=0;j<r1;j++)
		{	int temp=a[i][j]; 
		a[i][j]=a[j][i];
		a[j][i]=temp;
		}printf("\n");  }							//transpose of a matrix without help of other  matrix
	for(i=0;i<c1;i++)
	{  for(j=0;j<r1;j++)
		{	printf("%d   ",a[i][j]);}printf("\n");  }  
//-------------------------------------------------------------------------------------------------------------------
			for(i=0;i<r1;i++)
	{  for(j=0;j<c1;j++)
		{	printf("%d   ",a[i][j]);}printf("\n");  } 
if(c1==r2){
	int rc=c1;
for(i=0;i<r1;i++)
{ for(j=0;j<c2;j++)
		{   m[i][j]=0;
			for(int k=0;k<rc;k++)
			 m[i][j]+=a[i][k]*b[k][j];
		}
	}
printf("\nthe result of multiplication of two arrays is:\n")	;      	}
}		//multiplication of two arrays
//------------------------------------------------------------------------------------------------------------------------------
//	 to rotate a matrix by 90 degree first transpose the matrix and reverse each row 
/*
for(i=0;i<c1;i++)
	{  for(j=0;j<i;j++)
		{	int temp=a[i][j]; 
		a[i][j]=a[j][i];
		a[j][i]=temp;
		}printf("\n");  }
for(int i=0;i<r1;i++)
{
	int j=0;
	int k=r1-1;
	while(j<k)
	{	int temp=a[i][j]; 
		a[i][j]=a[i][k];
		a[i][k]=temp;
		j++;
		k--;	}
	}
	printf("matrix obtined after rotating by 90 degrees is\n");
//----------------------------------------------------------------------------------------------------------------------------
for(i=0;i<r1;i++)
	{  for(j=0;j<c2;j++)
		{	printf("%d  ",m[i][j]);  }printf("\n");
}
}  	
else
{
	printf("matrix multiplication is not possible cozz c1!=r2");
}  
printf("the wave print of the array is:\n");
for(i=0;i<r1;i++)
{
	if(i%2==0)
	{
		for(j=0;j<c1;j++)
	{	printf("%d  ",a[i][j]);	}printf("\n");}					//wave print
	else
	{
	for(j=c1-1;j>=0;j--)
	{	printf("%d  ",a[i][j]);	} printf("\n");}	
}
	for(i=0;i<r1;i++)
	{ rowsum=0;
	 for(j=0;j<c1;j++)
		{	
		rowsum+=a[i][j];
		
		}if(summax<rowsum)  //for finding the row containing max sum 
		{
			summax=rowsum;
			index=i;	}
	printf("the max sum of row elements is: %d \n",summax);
			printf("the index of the row is :%d \n",index); 
		 }  
//------------------------------------------------------------------------------------------------------------------------
 for(i=0;i<r1;i++)
	{  c=0;
	 for(j=0;j<c1;j++)
		{	
		if(a[i][j]==1)
			c+=1;
		}
		if(maxc<c)  //for finding the row containing max no.of one's of an array of 0's and 1's
		{  maxc=c;
			maxind=i;	}
} 	printf("  max no.of one's is :%d\n",maxc);
	printf("  max no.of one's is in the row :%d\n",maxind);  
 
 //--------------------------------------------------------------------------------------------------------------------------
printf("the spiral form of the array is:\n");
while(count<tne){
for(j=minc;j<=maxc;j++)
{  printf("%d  ",a[minr][j]);}

minr++;															//spiral form of the array
for(i=minr;i<=maxr;i++)
{  printf("%d  ",a[i][maxc]);}
maxc--;
for(j=maxc;j>=minc;j--)
{  printf("%d  ",a[maxr][j]);}
maxr--;
for(i=maxr;i>=minr;i--)
{  printf("%d  ",a[i][minc]);}
minc++;
}  */
