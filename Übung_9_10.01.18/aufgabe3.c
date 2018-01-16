//aufgabe3.c
//Übung 9 Aufgabe 3 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

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

int getMin(int a[],int l){
	int min=INT_MAX;
	
	for(int i=0;i<l;i++){
		if(a[i]<min){
			min=a[i];
		}
	} 
	return(min);
}

int getMax(int a[],int l){
	int max=INT_MIN;
	
	for(int i=0;i<l;i++){
		if(a[i]>max){
			max=a[i];
		} 
	}
	return(max);
}

double getAvg(int a[],int l){ 
	int sum=0;
	
	for(int i=0;i<l;i++){
		sum+=a[i];
	} 
	return((double)sum/l);
}

int main(){
	int n=0;
	printf("Bitte Anzahl eingeben:\n");
	scanf("%d",&n);
	int test[n];
	readIntArray(test,n);
	printf("Das Maximum ist %d\n",getMax(test,n));
	printf("Das Minimum ist %d\n",getMin(test,n));
	printf("Der Duchschnitt ist %.3lf\n",getAvg(test,n));
	printf("\n");
	printIntArray(test,n);
	printf("\n");
	printIntArray(createIntArray(6),6);
	return(0);
}