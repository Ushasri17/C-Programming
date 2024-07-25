#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *link;
};

//counting elements with nodes
void count_nodes(struct node *head){
	int count=0;
	if(head==NULL)
		printf("linked list is empty");
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL){
		count++;
		ptr=ptr->link;
	}
	printf("%d\n",count);
}
//printing data
void print(struct node *head){
	if(head==NULL)
		printf("linked list is empty");
	struct node *ptr=NULL;
	ptr=head;
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->link;
	}
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
print(head);
count_nodes(head);	
}