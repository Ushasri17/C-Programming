#include<stdio.h>
#include<stdlib.h>
int *display(int n){
	int i ,*ptr;
	ptr=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",(ptr+i));
	return ptr;
}
int main(){
	int n,i,*ptr1;
	printf("entrer total no.of values");
	scanf("%d",&n);
	ptr1=display(n);
	printf("entered values are:");
for(i=0;i<n;i++){
	printf("%d  ",*(ptr1+i));
}
//free(ptr);
}