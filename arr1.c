#include <stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,k,rows,cols;
   printf("rows");
   scanf("%d",&rows);
   printf("cols");
   scanf("%d",&cols);
/*   int matrix[rows][cols];
   int transpose[cols][rows];
   printf("enter elements of matrix\n");
   for(i=0;i<rows;i++){
       for(j=0;j<cols;j++){
           scanf("%d",&matrix[i][j]);
       }
   }
   for(i=0;i<cols;i++){
       for(j=0;j<rows;j++){
           transpose[i][j]=matrix[j][i];
       }
   }
printf(" in original matrix\n");
for(i=0;i<rows;i++){
       for(j=0;j<cols;j++){
           printf("%d	",matrix[i][j]);
       }
       printf("\n");
   }
   printf("in transpose matrix\n");

for(i=0;i<cols;i++){
       for(j=0;j<rows;j++){
           printf("%d	",transpose[i][j]);
       }
       printf("\n");
   }

 /*   int dat[2][3][2];
  int i,j,k;
    printf("enter 12 values\n");
    for(i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){ 
                scanf("%d",&dat[i][j][k]);
                
              
            }
        }
    }
    printf("in displaying value\n");
   for (i=0;i<2;i++){
        for(j=0;j<3;j++){
            for(k=0;k<2;k++){ 
                printf("dat[%d][%d][%d]=%d\n",i,j,k,dat[i][j][k]);
            }
        }
   } 
/*int size,i,arr[50];
int large=0, secondLarge=0;
 
printf("Enter the size of array: ");
 
scanf("%d",&size);
for(i=0; i<size; i++){
     
    printf("\n Enter the array element %d ",i+1);
    scanf("%d",&arr[i]);
    if(large<arr[i]){
      secondLarge=large;
      large=arr[i];
    }
    else if(secondLarge<arr[i] && arr[i]<large){
    secondLarge=arr[i];}
}
printf("The largest number in array is %d",large);
printf("\nThe 2nd largest number in array is %d",secondLarge);
/*
int csize,rsize,j,i,arr[50][50];
int large=arr[0][0], secondLarge=arr[0][0];
printf("Enter the row size of array: ");
scanf("%d",&rsize);
printf("Enter the col size of array: ");
scanf("%d",&csize);
for(i=0; i<rsize; i++){
    for(j=0;j<csize;j++) 
   {
	scanf("%d",&arr[i][j]);					//large&2nd large in 2-D array
    if(large<arr[i][j])
	{ 	secondLarge=large;
      	large=arr[i][j];   	}
    else if(secondLarge<arr[i][j] && arr[i][j]<large)
	{   	secondLarge=arr[i][j];		}
}}
printf("The largest number in array is %d",large);
printf("\nThe 2nd largest number in array is %d",secondLarge);  */
}