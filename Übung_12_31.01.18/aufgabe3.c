//aufgabe3.c
//Übung 12 Aufgabe 3 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<stdlib.h>

void push(char val,char** stk){
	**stk=val;
	(*stk)++;
};

char pop(char** stk){
	(*stk)--;
	return(*(*stk+1));
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
			break;
	}
}

int checkPar(char str[]){
	char* stack=malloc(10000*sizeof(char));
	char* base=stack;
	int erg=1;
	for(int i=0;str[i]!=0;i++){
		if(parNum(str[i])>0){
			push(str[i],&stack);
		}
		if(parNum(str[i])<0){
			if(parNum(str[i])+pop(&stack)!=0){
				erg=0;
			}
		}
	}
	if(stack!=base){
		erg=0;
	}
	while(base!=stack){
		char t=pop(&stack);
		printf("%c\n",t);
	}
	free(stack);
	return(erg);
}

int main(){
	char inp[10000];
	printf("Bitte String eingeben\n");

	scanf("%s",inp);
	if(checkPar(inp)){
		printf("Nicht korrekt geklammert!\n");
	}else{
		printf("Korrekt geklammert!\n");
	}

}