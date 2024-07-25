/*#include<stdio.h>
#include<stdlib.h>
int fac(int a){
	if(a==0||a==1)   return 1;
	else return a*fac(a-1);

}
int main(){
	int n,x;
	printf("enter n ,x values");
	scanf("%d %d",&n,&x);
	printf("C(%d, %d)is :d",n,x,fac(n)/(fac(x)*fac(n-x)));
}*/
//method 2
//C(n,x) = n!/x!(n-x)!

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,x;
    int result;

    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%d", &x);

    int factorial_n = 1;
    int factorial_x = 1;
    int factorial_n_x = 1;

    for(int i=1; i<=n; i++)
    {
        factorial_n = factorial_n * i;
        if(i<=x)
        {
            factorial_x = factorial_x * i;
        }
        if(i<=(n-x))
        {
            factorial_n_x = factorial_n_x * i;
        }
    }

    result = factorial_n/(factorial_x * factorial_n_x);
    printf("C(%d, %d) is: %d", n,x, result);
    return 0;
}
