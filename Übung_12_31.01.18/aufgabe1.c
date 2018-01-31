//aufgabe1.c
//Übung 12 Aufgabe 1 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

void printList(struct node* start){
	while(start->next!=NULL){

		start=start->next;
		printf("%d\n",start->data);
	}
}

void append(int val,struct node* l){
	l->next=malloc(sizeof(struct node));
	l->next->data=val;
	l->next->next=NULL;
}

int main(){
	struct node* start=malloc(sizeof(struct node));
	struct node* list=start;
	for(int i=0;i<1000;i++){
		append(i,list);
		list=list->next;
	}
	printList(start);
	return(0);
	
}