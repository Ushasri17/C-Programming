#include<stdio.h>
int main(){
	int i=0,j,k,n;
	printf("enter n value\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(k=1;k<=i;k++){
            printf("%d",k);
        }
        for(j=1;j<=n-i;j++){
            printf(" ");
        }for(j=1;j<=n-i;j++){
            printf(" ");
        }
        for(j=i;j>=1;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}