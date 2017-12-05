//aufgabe2b.c 
//Übung 2 Aufgabe 2b GIP
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>

int main(void){
	int n, i, q;
	printf("Geben Sie eine ganze Zahl ein: ");
	scanf("%d", &n);
	q=0;
	for (i = n; i > 0; i = i / 10){
		q += i % 10;
	}
	printf("Die Quersumme von %d ist: %d \n", n, q);
	return(0);
}
