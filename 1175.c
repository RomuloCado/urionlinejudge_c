//Exercício 1175

#include<stdio.h>

int main(){
	
	int vet[20], i, aux=0;
	
	for(i=0; i<20; i++){
		scanf("%d", &vet[i]);
	}
	
	for(i=0; i<10; i++){
		aux = vet[i];
		vet[i] = vet[19-i];
		vet[19-i] = aux;	
	}
	
	for(i=0; i<20; i++){
		printf("N[%d] = %d\n", i, vet[i]);
	}
	
	return 0;
}
