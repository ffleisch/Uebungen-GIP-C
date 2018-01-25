//aufgabe2.c
//Übung 11 Aufgabe 2 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>

int toBinary(int inp){
	if(inp==0)
		return(0);
	return(toBinary(inp/2)*10+inp%2);
}

int toDecimal(int inp){
	if(inp==0)
		return(0);
	return(toDecimal(inp/10)*2+inp%10);
}

int main(){
	int n=0;
	printf("Bitte Zahl eingeben:\n");
	scanf("%d",&n);
	printf("In Binaer: %d\n",toBinary(n));
	printf("In Dezimal: %d\n",toDecimal(n));
}