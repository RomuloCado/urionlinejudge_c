//Exercício 1020

#include<stdio.h>

int main(){
	
	int n, ano, mes, dia;
	
	scanf("%d", &n);
	ano = n/365;
	n %= 365;
	mes = n/30;
	dia = n % 30;
	printf("%d ano(s)\n", ano);
	printf("%d mes(es)\n", mes);
	printf("%d dia(s)\n", dia);
	
	return 0;
}
