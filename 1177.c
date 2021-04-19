//Exercício 1177

#include<stdio.h>

int main(){
	
	int t, i,cont=0, vet[cont] ;
	
	scanf("%d", &t);
	if(t>=2 && t <=50){
		vet[cont] = 0;
		for(i=0; i<1000; i++){
			if(vet[cont] == t){
				vet[cont] = 0;
				cont = 0;
			}
			printf("N[%d] = %d\n", i, vet[cont]);
			vet[cont]++;;
		}
	}
	return 0;
}
