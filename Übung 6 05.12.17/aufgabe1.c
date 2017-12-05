//aufgabe1.c
//Übung 6 Aufgabe 1 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<math.h>

double zinsFormel(double k,double p,double n){	
	return(k*pow(p+1,n));
}

int main(){
	double k,p,n;
	printf("Bitte Kapital eingeben: \n");
	scanf("%lf",&k);
	printf("Bitte Zinssatz eingeben: \n");
	scanf("%lf",&p);
	printf("Bitte Laufzeit eingeben: \n");
	scanf("%lf",&n);

	p/=100;	

	for(int i=1;i<=n;i++){
		printf("Jahr: %d Kapital: %.2lf\n",i,zinsFormel(k,p,i));
	}

	return(0);
}
