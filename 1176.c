//Exercício 1176

#include<stdio.h>

int main(){
	
	long long int vetfibo[61], aux, a = 0 , b =1;
	int i, n, j, busca;
	
	for(i=0; i<61; i++){
		vetfibo[i] = a;  
		aux = a+b;                 // logica de fibonacci que o proximo numero é a soma dos dois anteriores 
		a = b;
		b = aux;
	}
	
	scanf("%d", &n);
	for(j=0; j<n; j++){
		scanf("%d", &busca);
		if(busca>=0 && busca <= 60){
			printf("Fib(%d) = %lld\n", busca, vetfibo[busca]);	
		}
	}
	
	return 0;
