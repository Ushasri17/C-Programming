#include <stdio.h>
int main()
{
/* int size;
 int i,k, j, temp,min,p;
 printf("Enter size of array: ");
 scanf("%d", &size);
 int arr[size];
 printf("\nEnter elements in array: ");
 for(i=0; i<=size-1; i++) {
 scanf("%d	",&arr[i]);}
printf("\nBefore sorting elements in array: ");							selection sort
 for(i=0; i<size; i++) {
 printf("%d\t", arr[i]);
 }
 for(i=0;i<size-1;i++){
min=arr[i];
p=i;
for(j=i+1;j<size;j++)
{
 if(arr[j]<min){
min=arr[j];
p=j;
}
}
if(p!=i){
 temp=arr[i];
 arr[i]=arr[p];
 arr[p]=temp;
}  }
 printf(" \nAt %d iteration elements in array: ",i);
 for(
 k=0; k<size; k++) {
 printf("%d\t", arr[k]);
 }
 printf("\nAfter sorting elements in array: ");
 for(i=0; i<size; i++) {
 printf("%d\t", arr[i]);
} 
int size;
 int i, j, temp;
 printf("Enter size of array: ");
 scanf("%d", &size);
 int arr[size];
 printf("Enter elements in array: ");
 for(i=0; i<size; i++) {
 scanf("%d", &arr[i]);
 }
 for(i=0; i<size; i++){										//bubble sort
 for(j=i+1; j<size; j++){
 if(arr[i] > arr[j]) {
 temp = arr[i];
 arr[i] = arr[j];
 arr[j] = temp;
 }   }
 } 
 printf("\nElements of array in ascending order: ");
 for(i=0; i<size; i++){
 printf("%d\t", arr[i]); } 
   
 int i,j,n,k,mid,ind,flag=0,st,en,a[100];
	printf("Enter the Value of N: ");
	scanf("%d", &n)	;
	printf("Enter the Value of key: ");
	scanf("%d", &k)	;
	printf("Enter the Elements:");
	for(i=0;i<=n-1;i++){
		scanf("%d", &a[i]);
	}
	st=0;
	en=n-1;	
	while(st<en)										//binary search
	{
		mid=(st+en)/2;
		if(a[mid]==k)
		{
			flag=1;
			break;
		}
		if(a[mid]<k)	st=mid+1;
		else en=mid+1;
	}
	if(flag==1)
	printf("the key is found at the position %d",mid);
	else  printf("the key is not found");	
int i,pos,num,n,arr[10];
 printf("Enter size of array: ");
 scanf("%d", &n);
 printf("Enter elements in array: ");
 for(i=0; i<n; i++) {
 scanf("%d", &arr[i]);
 }
 printf("enter position to insert");
 scanf("%d",&pos);													//inserting element
  printf("enter num to insert");
 scanf("%d",&num);
 for(i=n;i>=pos;i--)
 {
 	arr[i+1]=arr[i];
 }arr[pos]=num;
 n+=1;
 printf("elements of array after inserting %d are:",num);
 for(i=0; i<n; i++)
 printf("%d\t", arr[i]);  
 int i,pos,num,n,arr[10];
 printf("Enter size of array: ");
 scanf("%d", &n);
 printf("Enter elements in array: ");
 for(i=0; i<n; i++) {
 scanf("%d", &arr[i]);
 }
 printf("enter position to delete");
 scanf("%d",&pos);													//deleting element
 for(i=pos;i<n;i++)
 {
 	arr[i]=arr[i+1];
 }
 n-=1;
 printf("elements of array after deleting are:");
 for(i=0; i<n; i++)
 printf("%d\t", arr[i]);   */
   }