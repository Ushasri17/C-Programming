#include<stdio.h>
 struct games{
	char name[20];
	int players;
};
void print(struct games x){
	printf("%s %d\n",x.name,x.players);
}
struct games ret(){
struct games x;
printf("enter game name and players\n");
scanf("%s %d",x.name,x.players);
return x;
}
int main(){
	struct games g1,g2;
	printf("enter game name and no.of players: ");
	scanf("%s %d",g1.name,&g1.players);
	print(  g1);
	g2=ret();
	printf("second game is %s %d",g2.name,g2.players);
}
/*#include <stdio.h>
struct student
{
    char name[50];
    int age;
};
struct student getInformation();
int main()
{
    struct student s;
    s = getInformation();
    printf("\nDisplaying information\n");
    printf("Name: %s", s.name);
    printf("\nRoll: %d", s.age);   
    return 0;
}
struct student getInformation() 
{
  struct student s1;
  printf("Enter name: ");
  scanf ("%[^\n]%*c", s1.name);
  printf("Enter age: ");
  scanf("%d", &s1.age); 
  return s1;
}	*/
