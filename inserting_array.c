/*
#include <conio.h>
#include<stdio.h>
int main()
{
int i, n, num, pos, arr[10];
printf("\n Enter the number of elements in the array : ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
printf("\n arr[%d] = ", i);
scanf("%d", &arr[i]);
}
printf("\n Enter the number to be inserted : ");
scanf("%d", &num);
printf("\n Enter the position at which the number has to be added :");
scanf("%d", &pos);
for(i=n-1;i>=pos-1;i++){
arr[i+1] = arr[i];}
arr[pos] = num;
n = n+1;
printf("\n The array after insertion of %d is : ", num);
for(i=0;i<n;i++)
printf("\n arr[%d] = %d", i, arr[i]);
getch();
return 0;
}
*/
#include <stdio.h>
#include <conio.h>
int main()
{
int i, n, j, num, arr[10];
printf("\n Enter the number of elements in the array : ");
scanf("%d", &n);
for(i=0;i<n;i++)
{
printf("\n arr[%d] = ", i);
scanf("%d", &arr[i]);
}
printf("\n Enter the number to be inserted : ");
scanf("%d", &num);
for(i=0;i<n;i++)
{
if(arr[i] > num)
{
for(j=n-1;j>=i;j--)
arr[j+1] = arr[j];
arr[i] = num;
break;
}
}
n = n+1;
printf("\n The array after insertion of %d is : ", num);
for(i=0;i<n;i++)
printf("\n arr[%d] = %d", i, arr[i]);
getch();
return 0;
}