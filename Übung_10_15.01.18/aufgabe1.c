//aufgabe1.c
//Übung 10 Aufgabe 1 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>
#include <stdlib.h>

#define PRINTZERO 0

void hist(unsigned char* inp,int len){
	int count[255];
	for(int i=0;i<255;i++){
		count[i]=0;
	}
	for(int i=0;i<len;i++){
		count[(int)inp[i]]++;
	}
	for(int i=0;i<255;i++){
		if(count[i]||PRINTZERO){
			printf("%3d : %3d |",i,count[i]);
			for(int l=0;l<count[i];l++){
				printf("*");
			}
			printf("\n");
		}
	}
}

unsigned char* inpCharArr(int len){
	unsigned char *out=malloc(len*sizeof(unsigned char));
	printf("Bitte Chars eingeben:\n");
	for(int i=0;i<len;i++){
		scanf("%hhu",out+i);
	}
	return(out);
}

int main(){
	int len=0;
	printf("Bitte Anzahl Eingeben:\n");
	scanf("%d",&len);
	hist(inpCharArr(len),len);
	return(0);
}