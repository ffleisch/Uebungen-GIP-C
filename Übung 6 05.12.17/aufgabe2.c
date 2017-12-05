//aufgabe2.c
//Übung 6 Aufgabe 2 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<math.h>

int isPrime(long num){
	int isPrime=1;
	long i=0;
	while((num-floor(num/i))!=0){
		i++;
	}
	if(i==num){
		return(1);
	}else{
		return(0);
	}
}


long nextprime(long prime){
	long out=prime;
	return(-1);

}

int main() {

	long inp=0;

	printf("Bitte Zahl eingeben:\n");
	scanf("%ld",&inp);
	int test=isPrime(inp);
	//int test=0;		
	printf("%d\n",test);

	return(0);
}

