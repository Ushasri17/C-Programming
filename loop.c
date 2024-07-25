#include<stdio.h>
int main()
{
/*int n,c,i;
	printf("enter range");
	scanf("%d",&n);
	c=0;
	for(i=1;i<=n;i++)
	{ printf("%d ",i);
		c+=i;
	}
	printf("\nthe sum of first %d natural no. is %d",n,c);  
	
	int i,n,d,c=0;
	float a;
	printf("enter range");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  printf(" number-%d :",i);
	scanf("%d",&d);
	c+=d;
		}
	a=c/n	;
	printf("the sum of %d no is %d",n,c);
	printf("\nthe avg is %f",a);   
	
	int i,n,d;
	printf("enter range");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{  printf(" number is : %d",i);
	printf(" and the cube of %d is %d \n",i,i*i*i);  
} 
	int n,c,i;
	printf("enter range");			//q8
	scanf("%d",&n);
	c=0;
	for(i=1;i<=n*2;i+=2)
	{ printf("%d ",i);
		c+=i;
	}
	printf("\nthe sum of first %d odd natural no. is %d",n,c); 
	int j,i,n;
   printf("Input upto the table number starting from 1 : ");
   scanf("%d",&n);
   printf("Multiplication table from 1 to %d \n",n);		//q7
   for(i=1;i<=10;i++)
   {
     for(j=1;j<=n;j++)
     {
	    printf("%dx%d = %d, ",j,i,i*j);
      }
     printf("\n");
    } 
    
   int i,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)			//q9
   {
	for(j=1;j<=i;j++)
	   printf("* ");
	   printf("\n"); 
   } 
   int i,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)		//q10
   {
	for(j=1;j<=i;j++)
	   printf("%d ",j);
	   printf("\n"); 
   }  
   int i,j,rows;
   printf("Input number of rows : ");  //q11
   scanf("%d",&rows);
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d ",i);
	   printf("\n");
   }  
   int i,k=1,j,rows;
   printf("Input number of rows : ");
   scanf("%d",&rows);				//q12
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   printf("%d ",k++);
	   printf("\n"); 
   }  
   int i,n;
   float s=0.0;
   printf("Input the number of terms : ");		//harmonic series sum  q19
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
   	printf("1/%d + ",i);
     s+=1/(float)i;
   }
   printf("\nSum of Series upto %d terms : %f \n",n,s);  
int i,n,sum=0;

   printf("Input number of terms : ");
   scanf("%d",&n);
   printf("\nThe odd numbers are :");
   for(i=1;i<=n;i++)				//Sum of odd Natural Number upto n terms
   {
     printf("%d ",2*i-1);
     sum+=2*i-1;
   }
   printf("\nThe Sum of odd Natural Number upto %d terms : %d \n",n,sum); 
   int i,j,spc,rows,k,t=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(j=1;j<=rows-i;j++)
            {						//number and space pattern
              printf("  ");
            }
	   for(j=1;j<=i;j++)
	   printf("%3d ",t++);
	printf("\n");
   } */  
   
 /*  int i,f=1,num;

  printf("Input the number : ");
  scanf("%d",&num);						//factorial

  for(i=1;i<=num;i++)
      f=f*i;

  printf("The Factorial of %d is: %d\n",num,f); 
  float x,sum,t,d;
	int i,n;
	printf("Input the Value of x :");
	scanf("%f",&x);
	printf("Input the number of terms : ");
	scanf("%d",&n);
	sum =1; t = 1;
	for (i=1;i<n;i++)
	{
	  d = (2*i)*(2*i-1);
	  t = -t*x*x/d;
	  sum =sum+ t;
	}
	printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum,n,x); 
	 
int prv=0,pre=1,trm,i,n;
   printf("Input number of terms to  display : ");
   scanf("%d",&n);
   printf("Here is the Fibonacci series upto  to %d terms : \n",n);
   printf("% 5d % 5d", prv,pre);
  for(i=3;i<=n;i++)				//fibonacci
   {
     trm=prv+pre;
     printf("% 5d",trm);
     prv=pre;
     pre=trm;
   }
   printf("\n");  
   int num,r,sum=0,t;

    printf("Input a number: ");
    scanf("%d",&num);
    t=sum;
    while(num!=0)
    {
    	r=num%10;
    	sum=sum*10+r;
    	num/=10;
	}
if(t==sum)
         printf("%d is a palindrome number.\n",t);
    else
         printf("%d is not a palindrome number.\n",t);  
     int i, n1, n2, j,lcm, hcf=1;  
    printf("Input 1st number for HCF&LCM: ");  
    scanf("%d", &n1);  
    printf("Input 2nd number for HCF&LCM: ");  
    scanf("%d", &n2); 
    j = (n1<n2) ? n1 : n2;  
    for(i=1; i<=j; i++)  //HCF
    {
        if(n1%i==0 && n2%i==0)  
        {  
            hcf = i;  
        }  
    }  								//LCM using HCF
    printf("\nHCF of %d and %d is : %d\n", n1, n2, hcf);
    lcm=(n1*n2)/hcf;
    printf("\nThe LCM of %d and %d is : %d\n", n1, n2, lcm);  

int i, n1, n2, j,lcm=1,max;
	 printf("Input 1st number for LCM: ");  
    scanf("%d", &n1);  
    printf("Input 2nd number for LCM: ");  
    scanf("%d", &n2);  
    max = (n1>n2) ? n1 : n2;
    for(i=max;  ; i+=max)  
    {
        if(i%n1==0 && i%n2==0)  			//LCM
        {  
            lcm = i;  
            break;  
        }  
    }  
    printf("\nLCM of %d and %d = %d\n\n", n1, n2, lcm);  
    int i, n, n1, s1=0,j,k,en,sn;  
    long fact; 
// If sum of factorial of digits is equal to original number then it is Strong number 
    printf("Input starting range of number : ");  
    scanf("%d", &sn);
    printf("Input ending range of number: ");  
    scanf("%d", &en); 
    printf("\nThe Strong numbers are :\n"); 
 for(k=sn;k<=en;k++)
   { n1=k;
     s1=0;  
    for(j=k;j>0;j=j/10) 			//strong numbers
    {  fact = 1;  
          for(i=1; i<=j % 10; i++)  
           {  
            fact = fact * i;  
           }  
            s1 = s1 + fact;  
    }  
    if(s1==n1)  
        printf("%d  ", n1); 
  }   printf("\n"); */
  }