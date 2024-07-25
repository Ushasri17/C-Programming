/*#include<stdio.h>
struct node {
	int data;
	struct node *link;
};
struct node* add_at_end(struct node *ptr,int data){
	struct node *tem=malloc(sizeof(struct node));
	tem->data=data;
	tem->link=NULL;
	ptr->link=tem;
	return tem;
}
int main(){
	struct node *head=malloc(sizeof(struct node));
	head->data=33;
	head->link=NULL;
	struct node *ptr=head;
	ptr=add_at_end(ptr,17);
	ptr=add_at_end(ptr,18);
	ptr=add_at_end(ptr,1);
	ptr=head;
	while(ptr!=NULL){
		printf("\n%d",ptr->data);
		ptr=ptr->link;
	}
}*/
//method 2 very time consuming
#include<stdio.h>
#include<stdlib.h>
struct node {
	int data;
	struct node *link;
};
//add a node at end 
void add_at_end(struct node *head,int data)	
{
struct node *ptr,*tem;
ptr=head;
tem=(struct node *)malloc(sizeof(struct node));
tem->data=data;
tem->link=NULL;
while(ptr->link!=NULL){
	ptr=ptr->link;
}	
ptr->link=tem;
}
int main(){
	struct node *head=malloc(sizeof(struct node));
	head->data=33;
	head->link=NULL;
	struct node *current=malloc(sizeof(struct node));
	current->data=18;
	current->link=NULL;
	head->link=current;
	current=malloc(sizeof(struct node));
	head->link->link=current;
	current->data=1;
	current->link=NULL;
add_at_end(head,17);
}