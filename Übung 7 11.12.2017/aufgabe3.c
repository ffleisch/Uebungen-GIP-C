//aufgabe3.c
//Übung 7 Aufgabe 3 GIP
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<limits.h>

int main(){

	double min=INT_MAX;
	double max=0;
	double m2=0;
	double inp=0;
	double mittel=0;
	int anz=0;
	do{
		anz++;
		printf("Bitte naechsten Sprung eingeben\n");
		scanf("%lf",&inp);
		if(inp>max){
			m2=max;
			max=inp;
			
		}
		if(inp>m2&&inp!=max){
			m2=inp;
		}
		if(inp<min&&inp>0){
			min=inp;
		}
		if(inp>0){
			mittel=mittel*((anz-1.f)/anz)+(double)inp/anz;
		}
	}while(inp>0);
	anz--;
	
	if(max){
		printf("Es wurden %d Spruenge eingegeben\n",anz);
		printf("Die groesste Weite betraegt %.2lf und die Kleinste %.2lf\n",max,min);
		if(m2){
			printf("Die zweitgroesste Weite betraegt %.2lf\n",m2);
		}else{
			printf("Es gibt keine zweitgroesste Weite\n");
		}
		printf("Das Mittel betraegt %.2lf\n",mittel);
		printf("Die Differenz zwischen groesster und kleinster Weite betraegt %.2lf",max-min);
	}else{
		printf("Keine gueltige Eingabe getaetigt\n");
	}
	return(0);
}