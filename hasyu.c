#include<stdio.h>
int main(){
		int n,i,m,j;
	printf("enter no of elements in 1st array:");
	scanf("%d",&m);
	printf("enter no of elements in 2nd array:");
	scanf("%d",&n);
int p=m+n;
	int a[m],b[n];
	int c[p];
	printf("Enter elemnts in sorted order:");
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter elements in sorted order");
	for(i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	for(i=0;i<m;i++){
		c[i]=a[i];
	}
	for(i=0,j=m;i<n && j<p;i++,j++){
		c[j]=b[i];
	}
	printf("merged array:");
	for(i=0;i<m+n;i++){
		printf("%d ",c[i]);
	}
	int min,po;

	for(i=0;i<=m+n-1;i++){
		min=c[i];
		po=i;
		for(j=i+1;j<=m+n-1;j++){
			if(c[i]>c[j]) {
			min=c[j];
			po=j;
			}
			if(po!=i){
					int temp=c[i];
				c[i]=c[po];
				c[po]=temp;
			}
		}
	}
	printf("\nsorted array:");
	for(i=0;i<m+n;i++){
		printf("%d ",c[i]);
	}
	return 0;}
/*int arr1size = 7, arr2size = 7, arr_resultsize, i, j;
    int a[7] = { 1, 2, 3, 4, 5 ,6,7};
    int b[7] = {  8, 9, 10 ,11,22,33,44};
    arr_resultsize = arr1size + arr2size;
    int c[arr_resultsize];
    for (i = 0; i < arr1size; i++) {
        c[i] = a[i];
}
    for (i = 0, j = arr1size;
         j < arr_resultsize && i < arr2size; i++, j++) {
        c[j] = b[i];
    }
    for (i = 0; i < arr_resultsize; i++) {
        printf("%d ", c[i]);
    }
    return 0;

}*/