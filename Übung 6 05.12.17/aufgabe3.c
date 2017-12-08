//aufgabe3.c
//Übung 6 Aufgabe 3 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include<stdio.h>
#include<math.h>

#define COMP 0
#define PLAYER 1

int calcOpt(int* stp){
	int out;
	out=(*stp-1)%4;
	if(out==0){
		out=1;
	}
	return(out);	
}

int validate(int inp,int* stp){
	if(inp>=1&&inp<=3){
		if(*stp-inp>=0){
			return(1);
		}else{
			return(0);
		}
	}else{
		return(0);
	}
}

void PlayerMoves(int* stp){
	printf("Wieviele Muenzen willst du nehmen?\n");
	int inp=0;
	while(!inp){
		scanf("%d",&inp);
		if(validate(inp,stp)){
			*stp-=inp;
		}else{
			inp=0;
			printf("Keine gueltige Eingabe, bitte erneut eingeben.\n");
		}
	}
	printf("Du nimmst %d Muenzen.\n",inp);
	printf("Es liegen %d Muenzen auf dem Stapel\n",*stp);
}

void ComputerMoves(int* stp){
	printf("Computer spielt...\n");
	int o=calcOpt(stp);
	if(!validate(o,stp)){
		o=1;
	}
	*stp-=o;
	printf("Computer nimmt %d Muenzen.\n",o);
	printf("Es liegen %d Muenzen auf dem Stapel\n",*stp);
}

 void checkEnd(int* hasEnded,int* stp,int last){
	 if((!*hasEnded)&&*stp==0){
		 if(last==PLAYER){
			 printf("Spieler hat verloren\n");
			 *hasEnded=1;
		 }else{
			 printf("Computer hat verloren\n");
			 *hasEnded=1;
		 }
	 }
	 
 }
 
int main() {
	int stapel=20;
	int start;
	int hasEnded=0;
	printf("Willst Du beginnen (0 fuer Nein oder 1 fuer Ja):\n");
	scanf("%d",&start);
	printf("Es liegen %d Muenzen auf dem Stapel\n",stapel);
	
	while(stapel>0){
		if(start){
			PlayerMoves(&stapel);
			checkEnd(&hasEnded,&stapel,PLAYER);
			if(!hasEnded){
				ComputerMoves(&stapel);
				checkEnd(&hasEnded,&stapel,COMP);
			}
		}else{
			ComputerMoves(&stapel);
			checkEnd(&hasEnded,&stapel,COMP);
			if(!hasEnded){
				PlayerMoves(&stapel);
				checkEnd(&hasEnded,&stapel,PLAYER);
			}
		}
	}
	return(0);	
	
}