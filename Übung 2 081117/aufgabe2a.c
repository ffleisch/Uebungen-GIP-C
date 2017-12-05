//aufgabe2a.c 
//Übung 2 Aufgabe 2a GIP
//Felix Fleisch Gruppe Die. 14-18 170945


#include<stdio.h>

int main(void){
int n=0;
	printf("Geben Sie eine positive ganze Zahl ein: ");
	scanf("%d", &n);
	printf("Die Fakultaet von %d ist: ", n);
	int f = 1;
	while(n > 0){
		f = f * n;
		n = n - 1;
	}
	printf("%d\n", f);
	return(0);
}