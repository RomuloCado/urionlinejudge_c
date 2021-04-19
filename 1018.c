//Exercício 1018

#include <stdio.h>

int main(){
	
	int N, cem, cinquenta, vinte, dez, cinco, dois, um;
	
	scanf("%d", &N);
	
	printf ("%d\n", N);
		
	cem = N/100; //primeiro tira a divisao inteira da maior nota 
	N %= 100; //depois o n recebe o que restou da divisao 
		
	cinquenta = N/50;// agora divide-se o o resto da divisao anterior que agora e n pela proxima nota
	N %= 50; // repete o processo o n recebe o que restou da divisao anterior
	
	vinte = N/20;
	N %= 20;
	
	dez = N/10;
	N %= 10;	
		
	cinco = N/5;
	N %= 5;
		
	dois = N/2;
	N %= 2;
		
	um = N; // repete o processo ate a variavel que receber o numero de notas R$1 for igual ao resto da divisao por 2
		
	printf ("%d nota(s) de R$ 100,00\n", cem);
	printf ("%d nota(s) de R$ 50,00\n", cinquenta);
	printf ("%d nota(s) de R$ 20,00\n", vinte);
	printf ("%d nota(s) de R$ 10,00\n", dez);
	printf ("%d nota(s) de R$ 5,00\n", cinco);
	printf ("%d nota(s) de R$ 2,00\n", dois);
	printf ("%d nota(s) de R$ 1,00\n", um);
	
    return 0;
}
