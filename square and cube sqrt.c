#include<stdio.h>
int main(){
/*	int n, i =1, a =1;
    //Taking inputs from the user
    printf("Enter a Number : ");
    scanf("%d",&n);
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
    } while (i <= 3);  */
    float num,root, i =1;
start:
    //Taking inputs from the user
    printf("Enter the number : ");
    scanf("%f",&num);
    /*Calculation to print the square number*/
    root = sqrt(num);
    printf("Square of %.2f number is %.2f \n",num,root);
    i = i + 1;
    if (i <= 3)
    {
        goto start;
    }
    getch();
}