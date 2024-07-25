#include<stdio.h>
#pragma pack(1)						//for structure padding to save memory
struct abc{
	char c;
	int x,y;
}b;
int main(){
	struct abc a={'u',0,1};
	struct abc *ptr=&a;										// ptr-> is equvivalent to (*ptr).x==a.x
	printf("%d %d\n",ptr->x,ptr->y);
	printf("%d",sizeof(b));
}