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
	printf("\n");
	while(start!=NULL){
		printf("%5d",start->data);
		start=start->next;
	}
	printf("\n");
}

void append(int val,struct node* l){
	l->next=malloc(sizeof(struct node));
	l->next->data=val;
	l->next->next=NULL;
}

void insert(int val,struct node* list){
	struct node* next=list->next;
	append(val,list);
	list->next->next=next;
}

void insertSorted(int val,struct node** start){
	struct node* p=*start;
	struct node* zw=*start;
	if(val>=p->data){
		while(zw!=NULL){
			if(zw->data<val){
				p=zw;
			}
			zw=zw->next;
		}
		insert(val,p);
	}else{
		struct node* new=malloc(sizeof(struct node));
		new->data=val;
		new->next=p;
		*start=new;
	}
};

struct node* reverse(struct node* start){
		//this works
		int num;
		struct node*p=start;
		for(num=1;p->next!=NULL;p=p->next){
			num++;
		}
		void* ptrs[num+1];
		p=start;	
		int i=0;
		while(p!=NULL){
			ptrs[i]=p;
			i++;
			p=p->next;

		}
		struct node* new=malloc(sizeof(struct node));
		new->data=((struct node*)ptrs[num-1])->data;
		
		p=new;
		printf("test");

		for(int i=num-2;i>=0;i--){
			append(((struct node*)ptrs[i])->data,p);
			p=p->next;
		}

		return(new);
};

int main(){
	struct node* start=malloc(sizeof(struct node));
	struct node* list=start;
	start->data=-10;
	for(int i=0;i<10;i++){
		append(i*10,list);
		list=list->next;
	}
	printList(start);
	int i=0;
	do{
		printf("\nBitte Zahl eingeben\n");
		int n=0;
		scanf("%d",&n);
		insertSorted(n,&start);
		printList(start);
		printf("\nWeiter? 0/1\n");
		scanf("%d",&i);
	}while(i==1);
	struct node* test=reverse(start);
	printf("\nUmgekehrt:\n");
	printList(test);
	return(0);
	
}