//aufgabe2addendum.c
//Übung 10 Aufgabe 2 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>
#include<stdlib.h>

#define PNUM 100
#define BLOCKSIZE 100

int isPrime(long long inp){
		long long p=2;
		while(inp%p){
			p++;
		}
		if(inp==p){
			return(1);
		}else{
			return(0);
		}
}

int* createIntArray(int l){
	int* a=malloc(l*sizeof(int));
	return(a);
}

void printIntArr(int a[],int l){
	printf("\n Wert     :");
	for(int i=0;i<l;i++){
		printf("%2d ",*(a+i));
	}
	printf("\n");
	printf(" Position :");
	for(int i=0;i<l;i++){
		printf("%2d ",i);
	}
	printf("\n\n");
}

int* ptrBinarySearch(int n, int a[],int len){

	int* ul=&a[len];
	int* ll=a;
	while(ul-ll>0){
		int p=(int)((ul-ll)/2.0+.5);
		if(n>=*(ll+p)){
			ll+=p;
		}else{
			ul-=p;
		}
	}
	if(*ll==n){
		return(ll);
	}else{
		return(-1);
	}
}

int main(){
	int len=0;
	int* arr;
	arr=createIntArray(BLOCKSIZE);
	
	for(int i=2;i<PNUM;i++){
		if(isPrime(i)){
			arr[len++]=i;
			if(!(len%BLOCKSIZE)){
				arr=realloc(arr,(len+BLOCKSIZE)*sizeof(int));
			}

		}
	}
	
	printIntArr(arr,len);
	printf("\nBitte zu findene Zahl einegben:\n");
	int n=0;
	scanf("%d",&n);
	int* erg=ptrBinarySearch(n,arr,len);
	if(erg!=-1){
		printf("Binary Search fand %d an Position %d\n",*erg,erg-arr);
	}else{
		printf("Zahl wurde nicht gefunden!\n");
	}
	
	return(0);
	
}