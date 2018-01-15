//aufgabe1.c
//Übung 9 Aufgabe 1 GIP 
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

//TODO debug this shit
int binarySearch(int n, int a[],int len){
	int pos =len/2;
	for(int h=len/2;h>0;h/=2){
		
		if(a[pos]>n){
			pos-=(h+1)/2;
		}else{
			pos+=(h+1)/2;
		}
	}
	//if(a[pos]==n){
		return(pos);
	//}
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
	printf("Bitte Integer eingeben:\n");
	for(int i=0;i<len;i++){
		scanf("%d",out+i);
	}
	return(out);
}

void printIntArr(int a[],int l){
	for(int i=0;i<l;i++){
		printf("%2d ",*(a+i));
	}
	printf("\n");
	for(int i=0;i<l;i++){
		printf("%2d ",i);
	}
	printf("\n");
}

int main(){
	int len=9;
	//printf("Bitte Anzahl Eingeben:\n");
	//scanf("%d",&len);
	printIntArr(test,len);
	bubbleSort(test,len);
	printf("\n");
	printIntArr(test,len);
	int n=0;
	printf("Bitte Zahl eingeben:\n");
	scanf("%d",&n);
	printf("Linear Search findet %d bei %d\n",n,linearSearch(n,test,len));
	printf("Binary Search findet %d bei %d\n",n,binarySearch(n,test,len));
	return(0);
}
