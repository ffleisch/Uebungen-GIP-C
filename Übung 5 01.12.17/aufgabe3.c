//aufgabe3.c
//Übung 5 Aufgabe 3 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945
#include<stdio.h>
#include<math.h>

long sumDigitSquares(long inp){
	long res=0;
	while(inp>0){
		res+=pow(inp%10,2);
		inp/=10;
	}
	return(res);
}

int isHappy(long inp){
	while(!(inp==1||inp==4)){
		inp=sumDigitSquares(inp);
	}
	if(inp==1){
		return(1);
	}else{
		return(0);
	}
}

int main(){
	for(int i=1;i<=500;i++){
		if(isHappy(i)){
			printf("%d\n",i);
		}
	}
	return(0);
}