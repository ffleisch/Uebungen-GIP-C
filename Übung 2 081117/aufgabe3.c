//aufgabe3.c 
//Übung 2 Aufgabe 3 GIP
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<math.h>

//Berechnet Kantenlängen aus Koordinaten
void calcEdges(double* punkt1,double* punkt2,double* ausgabe){
	for(int i=0;i<=2;i++){
		*(ausgabe+i)=fabs(*(punkt1+i)-*(punkt2+i));	
	}
}

//Berechnet Volumen
void calcVolume(double* edges,double* out){
	*out=edges[0]*edges[1]*edges[2];
}

//Berechnet Oberfläche
void calcSurface(double* edges,double* out){
	*out=2*edges[0]*edges[1]+2*edges[1]*edges[2]+2*edges[2]*edges[0];	
}

//Berechnet gesamte Kantenlaenge
void calcEdgeLength(double* edges,double* out){
	*out=0;
	for(int i=0;i<=2;i++){
		*out+=*(edges+i)*4;
	}	
}

int main(){
	
	//Variablen
	double p1[3];
	double p2[3];
	double edges[3];
	double vol=0;
	double surf=0;
	double len=0;
	
	//Eingabe
	printf("\n");
	printf("Bitte Koordinaten erster Ecke eingeben:\n");
	scanf("%lf%lf%lf",&p1[0],&p1[1],&p1[2]);
	printf("\n");
	printf("Bitte Koordinaten zweiter Ecke eingeben:\n");
	scanf("%lf%lf%lf",&p2[0],&p2[1],&p2[2]);
	
	//Berechnungen
	calcEdges(&p1[0],&p2[0],&edges[0]);
	
	calcVolume(&edges[0],&vol);
	
	calcSurface(&edges[0],&surf);
	
	calcEdgeLength(&edges[0],&len);
	
	//Ausgabe
	printf("\n");
	printf("Kantenlaengen: %.2f %.2f %.2f\n",edges[0],edges[1],edges[2]);
	printf("Volumen: %.2f\n",vol);
	printf("Oberflaeche: %.2f\n",surf);
	printf("Gesamte Kantenlaenge: %.2f\n",len);
	
	return(0);
}