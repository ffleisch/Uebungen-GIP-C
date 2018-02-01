//aufgabe2.c
//Übung 12 Aufgabe 2 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
	struct node* prev;
};

void printList(struct node* start){
	printf("\n");
	while(start!=NULL){
		printf("%5d",start->data);
		start=start->next;
	}
	printf("\n");
}

void append(int val,struct node* l){
	l->next=malloc(sizeof(struct node));
	l->next->prev=l;
	l->next->data=val;
	l->next->next=NULL;
}

void insertFirst(int val,struct node** list){
	struct node* new=malloc(sizeof(struct node));
	new->data=val;
	new->prev=NULL;//hinzugefügt am Donnerstag nach dem Abgeben
	new->next=*list;
	(*list)->prev=new;
	*list=new;
}

void delete(int val,struct node** list){
	struct node* p=*list;
	while(p!=NULL){
		if(p->data==val){
			if(p->prev!=NULL){
				p->prev->next=p->next;
			}
			if(p->next!=NULL){
				p->next->prev=p->prev;
			}
			if(p==*list){
				*list=p->next;
			}
		}
		p=p->next;
	}
}

int main(){
	struct node* start=malloc(sizeof(struct node));
	start->prev=NULL;
	struct node* list=start;
	start->data=-10;
	for(int i=0;i<3;i++){
		append(i*10,list);
		list=list->next;
	}
	printList(start);
	int i=0;
	
	do{
		printf("\nBitte Zahl eingeben\n");
		int n=0;
		scanf("%d",&n);
		insertFirst(n,&start);
		printList(start);
		printf("\nWeiter? 0/1\n");
		scanf("%d",&i);
	}while(i==1);
	
	do{
		printf("\nBitte Zahl eingeben(loeschen)\n");
		int n=0;
		scanf("%d",&n);
		delete(n,&start);
		printList(start);
		printf("\nWeiter? 0/1\n");
		scanf("%d",&i);
	}while(i==1);
	
	printf("Ende:\n");
	printList(start);
	return(0);
}