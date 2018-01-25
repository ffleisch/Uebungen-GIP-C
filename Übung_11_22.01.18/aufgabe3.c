//aufgabe3.c
//Übung 11 Aufgabe 3 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>
#include <string.h>
#include <ctype.h>



void encipher(char string[],char erg[],int key){
	strcpy(erg,string);
	for(int i=0;string[i]!=0;i++){
		if(isalpha(string[i])){
			erg[i]=(string[i]&(255-32))+key;
			if(erg[i]>'Z'){
				erg[i]-=26;
			}
			if(erg[i]<'A'){
				erg[i]+=26;
			}
		}
	}
}

void decipher(char string[],char erg[],int key){
	strcpy(erg,string);
	for(int i=0;string[i]!=0;i++){
		if(isalpha(string[i])){
			erg[i]=(string[i]&(255-32))-key;
			if(erg[i]>'Z'){
				erg[i]-=26;
			}
			if(erg[i]<'A'){
				erg[i]+=26;
			}
		}
	}
}

int main(){
	int n=0;
	char input[10000];
	char ergebnis[10000];
	
	char aufgabe[1000];
	strcpy(aufgabe,"YLHOH NDPHQ DOOPDHKOLFK CX GHU XHEHUCHXJXQJ HLQHQ JURVVHQ IHKOHU JHPDFKW CX KDEHQ DOV VLH YRQ GHQ EDHXPHQ KHUXQWHUJHNRPPHQ ZDUHQ XQG HLQLJH VDJWHQ VFKRQ GLH EDHXPH VHLHQ HLQ KROCZHJ JHZHVHQ GLH RCHDQH KDHWWH PDQ QLHPDOV YHUODVVHQ GXHUIHQ");
	
	printf("Bitte String eingeben:  ");
	scanf("%s",input);
	printf("Bitte Schluessel eingeben:  ");
	scanf("%d",&n);
	
	decipher(input,ergebnis,n);
	printf("Entschluesselt: %s\n",ergebnis);
	
	encipher(input,ergebnis,n);
	printf("Verschluesselt: %s\n",ergebnis);

	for(int i=0;i<26;i++){
		
		decipher(aufgabe,ergebnis,i);
		printf("\n%s\n\n",ergebnis);	
	}
	
	return(0);	
}


