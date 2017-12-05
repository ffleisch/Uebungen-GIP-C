//aufgabe2.c
//Übung 5 Aufgabe 2 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>

long nOverK(long n,long k){
	double res=1;
	if(n>=k){
		for (long i=1;i<=k;i++){
			res*=(n-i+1.f)/i;
		}
	}else{
		res=0;
	}
	return((long)res);
}

int main(){
	long inp1;
	long inp2;
	long outp;
	
	printf("Bitte zwei natuerliche Zahlen n und k eingeben\n");
	scanf("%ld%ld",&inp1,&inp2);
	outp=nOverK(inp1,inp2);
	printf("n ueber k betraegt: %ld\n",outp);
	
	return(0);
}