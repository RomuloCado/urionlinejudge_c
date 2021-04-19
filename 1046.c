//Exercício 1046

#include<stdio.h>

int main(){
	
	int i, f, total = 0;
	
	scanf("%d %d", &i, &f);
	if (i >= 0 && i <=23){
		if(i >= f){
			total = 24 - i + f;  //diminuir o primeiro valor de 24 horas se o jogo iniciou em um dia e terminou no outro
			printf("O JOGO DUROU %d HORA(S)\n", total);
		}else{
			total = f - i;
			printf("O JOGO DUROU %d HORA(S)\n", total);
		}		
	}	
	return 0;
