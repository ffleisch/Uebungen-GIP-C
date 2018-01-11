//aufgabe2.c
//Übung 6 Aufgabe 2 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<math.h>
#include<time.h>


int main() {
	
	clock_t start,end;
	
	long long inp=0;	
	
	printf("Bitte Zahl eingeben:\n");
	
	scanf("%lld",&inp);
	
	start=clock();
	
	long long p=2;
	while(inp>1){
		while(inp%p){
			p++;
		}
		inp/=p;
		printf("%lld ",p);
	}
	end=clock();
	
	printf("\n%lf Sekunden zum Berechnen gebraucht\n",(double)(end-start)/CLOCKS_PER_SEC);
	return(0);
}

