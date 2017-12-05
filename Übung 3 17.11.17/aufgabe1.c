//aufgabe1.c
//Übung 3 Aufgabe 1 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>
#include <string.h>
#include <math.h>

char days[7][15];

int main(){
	strcpy(days[0],"Montag");
	strcpy(days[1],"Dienstag");
	strcpy(days[2],"Mittwoch");
	strcpy(days[3],"Donnerstag");
	strcpy(days[4],"Freitag");
	strcpy(days[5],"Samstag");
	strcpy(days[6],"Sonntag");
	
	int d,m,y,j,k,wd;
	
	scanf("%d%d%d",&d,&m,&y);
	
	if(m<=2){
		m+=10;
	}
	
	j=y/100;
	k=y%100;
	
	wd=(int)(d+floor(13*(m+1)/5.f)+k+floor(k/4.f)+floor(j/4.f)-2*j)%7-1;
	
	if(wd<=0){wd+=7;}
	printf("Der Wochentag ist: %d\n",wd);
	printf("Das ist %s\n",days[wd-1]);
	
}