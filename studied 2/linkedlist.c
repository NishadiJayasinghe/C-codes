#include<stdio.h>
#include<stdlib.h>


struct node{
	int val;
	link next;
};

typedef struct node *link;

struct list{
	link head;
	link tail;
};


int main(){
	struct list *l = malloc(sizeof(struct list));
	link *n1 = malloc(sizeof(struct node));
	n1->val = 10;
	n1->next = NULL;
	
	link *n2 = malloc(sizeof(struct node));
	n2->val = 15;
	n2->next = NULL;
	
	l->head = n1;
	l->tail = n1;
	
	n1->next = n2;
	l->tail = n2;

	link *temp = malloc(sizeof(struct node));
	temp = l->head;
	//printf("%d\t%d\t%d\n",l->head,temp,n1);
	while(temp != NULL){
		printf("%d -> ",temp->val);
		temp = temp->next;
	}
	return 0;
}
