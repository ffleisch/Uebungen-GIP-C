//aufgabe1.c
//Übung 9 Aufgabe 1 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>
#include <stdarg.h>


double quadrat(double x){
	return(x*x);
}

double cubic(double x){
	return(x*x*x+2.0);
}

void werteTabelle(double (*func)(double),double s,double e,double sw){
	for(double d=s;d<=e;d+=sw){
		printf("%.3lf %.3lf\n",d,(*func)(d));
	}
}

//extra Argumente müssen unbedingt vom Type double sein!
void werteTabelle2(double (*func)(double),int anz, double zahl,...){
	va_list list;
	double x=zahl;
	va_start(list,zahl);
	for(int i=0;i<anz;i++){
		//printf("%lf\n",*((double*)list));
		printf("%.3lf %.3lf\n",x,(*func)(x));
		x=va_arg(list,double);
	}
	va_end(list);
}

int main(){
	werteTabelle(quadrat,-5,5,.5);
	printf("\n\n");
	werteTabelle2(cubic,7,10.0,9.0,15.8,1.0,2.0,3.1,5.2);
}