//aufgabe1.c 
//Übung 2 Aufgabe 1 GIP
//Felix Fleisch Gruppe Die. 14-18 170945


#include<stdio.h>

double fToC(double in){
		return((in-32.0f)*5/9);
}

int main(){
	double tempIn=0;
	printf("Bitte Temperatur in Grad Fahrenheit eingeben:\n");
	scanf("%lf",&tempIn);
	double tempOut=0;
	tempOut=fToC(tempIn);
	printf("Die Temperatur betraegt %.2f Grad Celsius\n",tempOut);
	
	return(0);
}