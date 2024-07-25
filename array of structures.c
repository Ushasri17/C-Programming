#include<stdio.h>
struct car{
	int fuel,seatcap;
	float milage;
};
int main(){
	struct car c[2];
	int i=0;
	for(i=0;i<2;i++){
		printf("enter car %d fuel,seatcapacity,milage",i+1);
		scanf("%d %d %f",&c[i].fuel,&c[i].seatcap,&c[i].milage);
			printf("\n");
	}

	for(i=0;i<2;i++){
		printf("car %d fuel,seatcapacity,milage details are:",i+1);
		printf("%d %d %f",c[i].fuel,c[i].seatcap,c[i].milage);
		printf("\n");
	}
}