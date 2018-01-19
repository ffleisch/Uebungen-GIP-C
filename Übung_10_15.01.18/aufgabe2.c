//aufgabe2.c
//Übung 10 Aufgabe 2 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>
#include <stdlib.h>

int test[]={3,1,2,9,8,5,4,7,6,9,9,8,9,7,5,6,1,8,2,6,3};

int linearSearch(int n,int a[],int len){
	for(int i=0;i<len;i++){
		if(a[i]==n){
			return(i);
		}
	}
	return(-1);
}

int binarySearch(int n, int a[],int len){

	int ul=len-1;
	int ll=0;
	while(ul-ll>0){
		int p=(int)((ul-ll)/2.0+.5);
		if(n>=a[ll+p]){
			ll+=p;
		}else{
			ul-=p;
		}
	}
	if(a[ll]==n){
		return(ll);
	}else{
		return(-1);
	}
}

void bubbleSort(int a[], int len){
	for(int i=0;i<len;i++){
		for(int m=0;m<len-1;m++){
			if(a[i]<a[m]){
				int zw =a[i];
				a[i]=a[m];;
				a[m]=zw;
			}
		}
	}
}
 
int* inpIntArr(int len){
	int *out=malloc(len*sizeof(int));
	printf("Bitte Integer-Reihung eingeben:\n");
	for(int i=0;i<len;i++){
		scanf("%d",out+i);
	}
	return(out);
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

int main(){
	int len=20;
	int* array;
	
	printf("Bitte Anzahl der Werte eingeben:\n");
	scanf("%d",&len);
	array=inpIntArr(len);
	bubbleSort(array,len);
	printIntArr(array,len);
	
	int n=0;
	printf("Bitte Zahl eingeben:\n");
	scanf("%d",&n);
	printf("Linear Search findet %d bei %d\n",n,linearSearch(n,array,len));
	printf("Binary Search findet %d bei %d\n",n,binarySearch(n,array,len));
	
	return(0);
}
