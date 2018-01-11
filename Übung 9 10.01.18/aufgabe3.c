//aufgabe3.c
//Übung 9 Aufgabe 3 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>
#include <stdlib.h>

void readIntArray(int a[],int l){
	for(int i=0;i<l;i++){
		scanf("%d",a+i);
	}
}

void printIntArray(int a[],int l){
	for(int i=0;i<l;i++){
		printf("%d\n",*(a+i));
	}
}

int* createIntArray(int l){
	int* a=malloc(l*sizeof(int));
	for(int i=0;i<l;i++){
		scanf("%d",a+i);
	}
	return(a);
}
int main(){
	int test[100];
	readIntArray(test,5);
	printf("\n");
	printIntArray(test,5);
	printf("\n");
	printIntArray(createIntArray(6),6);
}