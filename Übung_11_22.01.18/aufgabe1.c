//aufgabe1.c
//Übung 11 Aufgabe 1 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>

int fibonacci(int n){
	if(n<=2){
		return(1);
	}else{
		return(fibonacci(n-1)+fibonacci(n-2));
	}
}

int digitNum(int in,int digit){
	if(in<10){
		if(in==digit){
			return(1);
		}else{
			return(0);
		}
	}else{
		if((in%10)==digit){
			return(digitNum(in/10,digit)+1);
		}else{
			return(digitNum(in/10,digit));
		}
	}
}

int square(int n){
	if(n)
		return(square(n-1)+2*n-1);
	return(0);
}

int descending(int n){
	if(n<10)
		return(1);
	return(((n%10)<=((n%100)/10))*descending(n/10));
}

int main(){
	int n,m;
	printf("Fibonacci berechnen:\n");
	scanf("%d",&n);
	printf("%d\n",fibonacci(n));
	printf("\n");
	
	printf("Ziffernzahl von:\n");
	scanf("%d %d",&n,&m);
	printf("%d\n",digitNum(n,m));
	printf("\n");
	
	printf("Quadrat von:\n");
	scanf("%d",&n);
	printf("%d\n",square(n));
	printf("\n");
	
	printf("Ist absteigend:\n");
	scanf("%d",&n);
	printf("%d\n",descending(n));
	printf("\n");
	
	return(0);
}