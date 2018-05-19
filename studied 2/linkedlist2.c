#include<stdio.h>
#include<stdlib.h>


struct node{
	int val;
	struct node *next;
};

struct list{
	struct node *head;
	struct node *tail;
};


int main(){
	struct list *l = malloc(sizeof(struct list));
	struct node *n1 = malloc(sizeof(struct node));
	n1->val = 10;
	n1->next = NULL;
	
	struct node *n2 = malloc(sizeof(struct node));
	n2->val = 15;
	n2->next = NULL;
	//insert the first node to the list
	l->head = n1;
	l->tail = n1;
	//insert second node to the tail
	n1->next = n2;
	l->tail = n2;

	struct node *n3 = malloc(sizeof(struct node));
	n3->val = 12;
	n3->next = NULL;
	//insert this node in the middle of 10 and 15
	n3->next = l->tail;
	l->head->next = n3;	

	//print values of nodes in linked list
	struct node *temp = malloc(sizeof(struct node));
	temp = l->head;
	//printf("%d\t%d\t%d\n",l->head,temp,n1);
	while(temp != NULL){
		printf("%d -> ",temp->val);
		temp = temp->next;
	}
	return 0;
}
