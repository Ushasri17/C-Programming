#include<stdio.h>
#include<stdlib.h>
int main(){
int n,i,*ptr;
printf("enter n value");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
printf("enter values");
for(i=0;i<n;i++){
	scanf("%d",(ptr+i));
}
printf("entered values are:");
for(i=0;i<n;i++){
	printf("%d  ",*(ptr+i));
}
free(ptr);
}