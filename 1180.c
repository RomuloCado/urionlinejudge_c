//Exercício 1180

#include<stdio.h>

int main(){
	
	int n, cont =0, menor, menorp, i;
	
	scanf("%d", &n);
	int vet[n];
	for(i = 0; i<n; i++){
		scanf("%d", &vet[i]);
	}
	menor = vet[0];
	menorp = 0;
	while(cont < n){
		if(vet[cont]< menor){
			menor = vet[cont];
			menorp = cont;
		}
		cont++;
	}

	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", menorp);
	
	return 0;
}
