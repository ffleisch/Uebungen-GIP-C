//aufgabe3.c
//Übung 9 Aufgabe 3 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>
#include <stdlib.h>

int loopAround(int in,int n){
	int out=in;
	while(out<0){
		out+=n;
	}
	while(out>=n){
		out-=n;
	}
	return(out);
}

void createSqr(int* arr,int n){
	int x=n/2;
	int y=n-1;
	int sum=1;
	for(int i=0;i<n*n;i++){
		arr[i]=-1;
	}
	for(int i=0;i<n*n;i++){
		*(arr+(n)*y+x)=sum;
		int a,b=0;
		
		a=loopAround(x+1,n);
		b=loopAround(y+1,n);
		if(*(arr+n*b+a)==-1){
			x=a;
			y=b;
		}else{
			do{
				a=loopAround(a-1,n);
				b=loopAround(b+1,n);
			}while((*(arr+n*b+a)!=-1)&&i<n*n-1);
			x=a;
			y=b;
		}
		sum+=1;

	}
}

void prntSqr(int* arr,int n){
	for(int i=0;i<n;i++){
		printf("\n\n");
		for(int m=0;m<n;m++){
			printf("  %5d",*(arr+n*i+m));
		}
		printf("\n\n");
	}
}

int main(){
	int s=0;
	printf("Bitte Seitenlänge eingeben:\n");
	while(!(s%2)){
		scanf("%d",&s);
		if(!(s%2)){
			printf("Zahl ist gerade!\n");
		}
	}
	int* array=malloc(sizeof(int)*s*s);
	createSqr(array,s);
	prntSqr(array,s);
	return(0);
}