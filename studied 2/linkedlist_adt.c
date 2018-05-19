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
void insertHead(struct list *l, struct node *n){
	if(isEmpty()==0){
		l->head = n;
		l->tail = n;
	}
	else{
		n->next = l->head;
		l->head = n;
	}
}

void insertTail(struct list *l, struct node *n){
	if(isEmpty()==0){
		l->head = n;
		l->tail = n;
	}
	else{
		l->tail->next = n;
		l->tail = n;
	}
}

void insertAfter(struct list *l, struct node *n, int v){
	struct node *t1, *t2 = malloc(sizeof(struct node));
	t1 = l->head;
	t2 = NULL;
	while(t1->next!=NULL){
		if(t1->val == v){
			n->next = t1->next;
			t1->next = n;
			break;
		}
		else{
			t2 = t1;
			t1 = t1->next;
		}
	}
	
}

void deleteHead(struct list *l){
	if(isEmpty()!=0){
		struct node *t = l->head;
		l->head = l->head->next;
		t->next = NULL;
		free(t);
	}
}

void deleteTail(struct list *l){
	struct node *t1, *t2;
	t1 = l->head;
	if(isEmpty()!=0){
		while(t1->next != NULL){
			t2 = t1;
			t1 = t1->next;	
		}
		l->tail = t2;
		t2->next = NULL;
		free(t1);
	}
}

void deleteNode(struct list *l, int v){
	struct node *t1,*t2;
	t1=l->head;
	if(isEmpty()){
		while(t1->next != NULL){
			if(t1->val == v){
				t2->next = t1->next;
				t1->next = NULL;
				free(t1);
			}
			else{
				t2 = t1;
				t1 = t1->next;
			}
		}
	}
}

int isEmpty(struct list *l){
	if(l->head == NULL)
		return 0;
	else
		return 1;
}

void display(struct list *l){
	struct node *temp = malloc(sizeof(struct node));
	temp = l->head;
	//printf("%d\t%d\t%d\n",l->head,temp,n1);
	while(temp != NULL){
		printf("%d -> ",temp->val);
		temp = temp->next;
	}
}

struct node * createNode(int v){
	struct node *n = malloc(sizeof(struct node));
	n->val = v;
	n->next = NULL;
	return n;
}

int main(){
	struct list *l = malloc(sizeof(struct list));
	struct node *t = createNode(10);
	
	//insert the first node to the list
	insertHead(l, t);
	printf("\n");
	display(l);

	t = createNode(15);
	//insert second node to the tail
	insertTail(l, t);
	printf("\n");
	display(l);

	t = createNode(12);
	//insert this node in the middle of 10 and 15
	insertAfter(l, t, 10);
	printf("\n");	
	display(l);	

	t = createNode(14);
	insertAfter(l, t, 12);
	printf("\n");
	display(l);
	if(isEmpty(l)==1)
		printf("\nList has items");
	else
		printf("\nEmpty list");

	t = createNode(21);
	insertTail(l, t);
	printf("\n");
	display(l);

	deleteHead(l);
	printf("\n");
	display(l);

	deleteTail(l);
	printf("\n");
	display(l);

	deleteNode(l,14);
	printf("\n");
	display(l);
	return 0;
}
