#include <stdio.h> 
 
int main() 
{ 
    int a,b,temp,neg_pos; 
     
    scanf("%d%d",&a,&b); 
    //This neg_pos will be negative only if any of the numbers are negative. 
    neg_pos = ((a < 0) || (b < 0)) ? -1 : 1; 
	//Converting them to positive 
    a = abs(a); 
    b = abs(b); 
 
    while(a>=b) 
    { 
        a-=b; 
        temp+=1; 
    } 
    printf("Remainder: --> %d\nQuotient: --> %d",a,(neg_pos*temp)); 
    return 0; 
     
}/*
#include <stdio.h>
int division(int, int);
int main()
{
int num1, num2;
printf("\nEnter any two integers : ");
scanf("%d %d ", &num1, &num2);
printf("Result is %d ", division(num1, num2));
return 0;
}
int division(int num1, int num2)
{
int temp = 1, quotient = 0;
while (num2 <= num1)
{
num2 <<= 1;
temp <<= 1;
}
while (temp > 1)
{
num2 >>= 1;
temp >>= 1;
if(num1 >= num2)
{
num1 -= num2;
quotient += temp;
}
}
return quotient;
}*/