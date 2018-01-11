int isPrime(long long inp){
	clock_t start,end;
	
	long inp=0;	
	
	printf("Bitte Zahl eingeben:\n");
	
	scanf("%ld",&inp);
	
	start=clock();
	
	long long p=2;
	while(inp%p){
		p++;
	}
	end=clock();
	
	printf("\n%lf Sekunden zum Berechnen gebraucht\n",(double)(end-start)/CLOCKS_PER_SEC);
	if(p==inp){
		return(1);
	}else{
		return(0);
	}
}

long long nextPrime(long long start){
	while(!isPrime(start)){
		start++;
	}
	return(start);
}

int main(){
	long long in;
	scanf("%lld"&in);
	printf("%lld\n",in);
	printf("%d\n",isPrime(in));
	return(0);
}

