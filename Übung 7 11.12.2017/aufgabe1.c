//aufgabe1.c
//Übung 7 Aufgabe 1 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

#define ECKPUNKTE 3


struct point{
	double x;
	double y;
};


int enterPoint(double* x,double* y){
	printf("Bitte Koordinaten eingeben:\n");
	scanf("%lf%lf",x,y);
	return(0);	
}

double gaussTrapez(struct point* in,int num){
	double sum=0;
	for(int i=0;i<num;i++){
		sum+=(in[i].y+in[(i+1)%num].y)*(in[i].x-in[(i+1)%num].x);
	}
	return(sum/2.f);
}

int main(){
	
	struct point points[ECKPUNKTE];
	
	for(int i=0;i<ECKPUNKTE;i++){
		enterPoint(&(points[i].x),&(points[i].y));
	}
	
	printf("Die Flaeche des Dreiecks betraegt %.3lf",gaussTrapez(&points[0],ECKPUNKTE));
	
	return(0);
}
