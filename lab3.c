/*#include<stdio.h>
#include<math.h>
int main()
{
	int n1,n2,i,j,c;
	printf("enter the range of numbers:");
	scanf("%d %d",&n1,&n2);
	for(i=n1;i<=n2;i++)					//prime numbers between given range
	{   c=0;
		for(j=1;j<=i;j++)
		{
		if(i%j==0)	
			c+=1;
		}
			if(c==2)
	printf("%d,",i);
	} 
	int i,j,n1,n2,p;
	printf("enter the range of numbers:");
	scanf("%d %d",&n1,&n2);
	for(i=n1;i<=n2;i++)					//perfect numbers between given range
	{   p=0;
		for(j=1;j<=i;j++)
		{
		if(i%j==0)
			{ 	p+=j;
        if(p==i)   	
           	printf("%d ",i);  }
	}	}
}*/
#include<stdio.h>
int isPrimeNumber(int num) {
   int i, isPrime = 1,c=0;
   for (i = 1; i <= num; i++) {
      if (num % i == 0){
        c++;
      }
   }
   if (c==2)
      return 1;
   else
      return 0;
}  
int main() {
   int i, j, rows;
   int counter = 2;
    
   printf("Enter the number of rows\n");
   scanf("%d", &rows);
     
   for (i = 1; i <=rows; i++) {
   	for(j=1;j<=rows-i;j++)
   	printf("  ");
      for (j = 1; j <= i; j++) {
       // Try to find next prime number by incrementing counter and testing it for primality 
        while(!isPrimeNumber(counter)){
            counter++;
 }
        printf("%3d", counter);				//prime num pattern
        counter++;
      }
      printf("\n");
   }
   return(0);
}
  

/*
#include <stdio.h>  
int main(void) {  
  int n;  
  printf("Enter the number of rows\n");  
  scanf("%d",&n);  
  int spaces=n-1;  
  int stars=1;  
  for(int i=1;i<=n;i++)  
  {  
    for(int j=1;j<=spaces;j++)  
    {  
      printf(" ");  
    }  
    for(int k=1;k<=stars;k++)  
    {  
      printf("*");     							//stars rhombus pattern
    }  
    if(spaces>i)  
    {  
      spaces=spaces-1;  
      stars=stars+2;  
    }  
    if(spaces<i)  
    {  
      spaces=spaces+1;  
      stars=stars-2;  
    }  
    printf("\n");  
  }  
  return 0;} 
#include <stdio.h>
void main()
{
    int no_row,c=1,blk,i,j;
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
        printf("\n");
    }
return 0;
} */
			
