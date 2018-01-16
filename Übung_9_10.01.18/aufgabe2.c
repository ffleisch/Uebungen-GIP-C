//aufgabe2.c
//Übung 9 Aufgabe 2 GIP 
//Felix Fleisch Gruppe Die. 14-18 170945

#include <stdio.h>

#include<time.h>

double eval_time(int (*func)(int),int in,int* out){
	clock_t start,end;
	start=clock();
	*out=(*func)(in);
	end=clock();
	return((double)(end-start)/CLOCKS_PER_SEC);
}

int isPerfect(int n){
	int i=1;
	int sum=0;

	while(i<n){
		if(!(n%i)){
			sum+=i;
		}
		i++;
		if(sum>n){
			break;
		}
	}	
	if(sum==n){
		return(1);
	}else{
		return(0);
	}
}

int main(){
	double time=0;
	int i=0;
	int t=0;
	int out=-1;
	printf("Bitte eine Zahl eingeben:\n");
	scanf("%d",&t);
	printf("isPerfect brauchte %.3lf sec um %d zu pruefen\n",eval_time(isPerfect,t,&out),t);
	if(out){
		printf("%d ist perfekt\n",t);
	}else{
		printf("%d ist nicht perfekt\n",t);
	}
	
	printf("\n");
	
	for(i=1;i<500;i++){
		if(isPerfect(i)){
			printf("%d\n",i);
		}
	}
	
	printf("\n");
	
	clock_t start,end;
	start=clock();
	for(int num=0,i=1;num<5;i++){
		if(isPerfect(i)){
			end=clock();
			printf("%d , %lf\n",i,(double)(end-start)/CLOCKS_PER_SEC);
		}
		if(!(i%100000)){
			end=clock();
			printf("%d %lf Zahlen getestet + Zeit\n",i,(double)(end-start)/CLOCKS_PER_SEC);
		}
	}
	
	return(0);
}