#include<stdio.h>
int main(){
	int n, i =1, a =1;
    //Taking inputs from the user
    printf("Enter a Number : ");
    scanf("%d",&n);
    /*Do While Condition*/
    do
    {
        a = a * n;
        if (i == 2)
        {
            printf("%d square = %d \n",n,a);
        }
        else if (i == 3)
        {
            printf("%d cube = %d \n",n,a);
        }
        i += 1; 
    } while (i <= 3);
}