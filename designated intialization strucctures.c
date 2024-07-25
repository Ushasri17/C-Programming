#include<stdio.h>
struct abc{
	int x,y,z;
};
int main(){
	struct abc a={.y=34,.z=23,.x=32	};//here order doesnot matter we access with . operator
	printf("%d %d %d",a.x,a.y,a.z);
}