//aufgabe2.c
//Übung 7 Aufgabe 2 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<math.h>

void digitLine(long long num,long long zeile){
	switch(num){
		case 0:
			switch(zeile){
				case 0:printf(" __ ");break;
				case 1:printf("|  |");break;
				case 2:printf("|  |");break;
				case 3:printf("|  |");break;
				case 4:printf("|__|");break;
			}
			break;
		case 1:
			switch(zeile){
				case 0:printf("    ");break;
				case 1:printf("   |");break;
				case 2:printf("   |");break;
				case 3:printf("   |");break;
				case 4:printf("   |");break;
			}
			break;
		case 2:
			switch(zeile){
				case 0:printf(" __ ");break;
				case 1:printf("   |");break;
				case 2:printf(" __|");break;
				case 3:printf("|   ");break;
				case 4:printf("|__ ");break;
			}
			break;
		case 3:
			switch(zeile){
				case 0:printf(" __ ");break;
				case 1:printf("   |");break;
				case 2:printf(" __|");break;
				case 3:printf("   |");break;
				case 4:printf(" __|");break;
			}
			break;
		case 4:
			switch(zeile){
				case 0:printf("    ");break;
				case 1:printf("|  |");break;
				case 2:printf("|__|");break;
				case 3:printf("   |");break;
				case 4:printf("   |");break;
			}
			break;
		case 5:
			switch(zeile){
				case 0:printf(" __ ");break;
				case 1:printf("|   ");break;
				case 2:printf("|__ ");break;
				case 3:printf("   |");break;
				case 4:printf(" __|");break;
			}
			break;
		case 6:
			switch(zeile){
				case 0:printf(" __ ");break;
				case 1:printf("|   ");break;
				case 2:printf("|__ ");break;
				case 3:printf("|  |");break;
				case 4:printf("|__|");break;
			}
			break;
		case 7:
			switch(zeile){
				case 0:printf(" __ ");break;
				case 1:printf("   |");break;
				case 2:printf("   |");break;
				case 3:printf("   |");break;
				case 4:printf("   |");break;
			}
			break;
		case 8:
			switch(zeile){
				case 0:printf(" __ ");break;
				case 1:printf("|  |");break;
				case 2:printf("|__|");break;
				case 3:printf("|  |");break;
				case 4:printf("|__|");break;
			}
			break;
		case 9:
			switch(zeile){
				case 0:printf(" __ ");break;
				case 1:printf("|  |");break;
				case 2:printf("|__|");break;
				case 3:printf("   |");break;
				case 4:printf(" __|");break;
			}
			break;
			
	}
}

int intLen(long long inp){
	int i;
	for(i=0;inp>0;i++){
		inp/=10;
	}
	return(i);
}

int main(void){
	long long number=0;
	int i;
	
	printf("Geben sie die Zahl ein: ");
	scanf("%lld",&number);
	int num;
	num=intLen(number);
	for(int l=0;l<5;l++){
		long long fac=1;
		for(int j=1;j<num;j++){
			fac*=10;
		}
		for(i=num;i>0;i--){
			int d=(number/fac)%10;
			digitLine(d,l);
			fac/=10;
		}
		printf("\n");
	}
	return(0);
}