//aufgabe3.c
//Übung 12 Aufgabe 3 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<stdlib.h>

void push(char val,char** stk){
	(*stk)++;
	**stk=val;
};

char pop(char** stk){
	return(*((*stk)--));
}

int parNum(char c){
	switch(c){
		case '(':
			return(1);
			break;
		case ')':
			return(-1);
			break;
		case '{':
			return(2);
			break;
		case '}':
			return(-2);
			break;
		case '[':
			return(3);
			break;
		case ']':
			return(-3);
			break;
		default:
			return(0);
	}
}

int checkPar(char str[]){
	char* stack=malloc(10000*sizeof(char));
	char* base=stack;
	int erg=1;
	for(int i=0;str[i]!=0;i++){
		int pnum=parNum(str[i]);
		if(pnum>0){
			push(str[i],&stack);
		}
		if(pnum<0){
			if(pnum+parNum(pop(&stack))){
				erg=0;
			}
		}
	}
	if(stack!=base){
		erg=0;
	}
	free(stack);
	return(erg);
}

int main(){
	char inp[10000];
	printf("Bitte String eingeben\n");
	scanf("%s",inp);
	if(checkPar(inp)==0){
		printf("Nicht korrekt geklammert!\n");
	}else{
		printf("Korrekt geklammert!\n");
	}
}