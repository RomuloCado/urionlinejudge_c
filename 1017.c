//Exercício 1017

#include<stdio.h>

int main(){
	
	float tempo, velocidade, litros;

	scanf("%f %f", &tempo, &velocidade);
	litros = velocidade * tempo/12;
	printf("%.3f\n", litros);
	
	return 0;
}
