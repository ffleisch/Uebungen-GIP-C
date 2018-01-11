#include<stdio.h>
#include<string.h>
#define LEN 17

int main(){
	char sum[LEN]; //soll rauskommen
	char code[LEN]; //code
	char erg[LEN]; //ausgabe
	for(int i=0;i<LEN;i++){
		int num=sum[i]-code[1];
		while(num<0){
			num+=256;
		}
		erg[i]=num;
		
	}
	printf("%s",erg);
	return(0);
}