//aufgabe3.c 
//Übung 3 Aufgabe 3 GIP
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<math.h>

int main(){
	long long ean;
	int pz=0;
	printf("Bitte 13-stellige EAN Nummer eingeben:\n");
	scanf("%lld",&ean);
	pz=ean%10;
	ean/=10;
	int sum=0;
	//Funktioniert nur mit Zahlen mit gerade vielen Ziffern, also z.b. EAN ohne Prüfziffer
	for(int i=1;ean>0;i++){
		if(i%2){
			sum+=3*(ean%10);
		}else{
			sum+=ean%10;
		}
		//printf("%d %lld\n",sum,ean);
		ean/=10;
	}

	int hash=ceil(sum/10.f)*10-sum;
	printf("Die Pruefziffer ist ausgelesen: %d\n",pz);
	printf("Die Pruefziffer ist berechnet : %d\n",hash);
	return(0);
}


