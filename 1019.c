//Exercício 1019

#include<stdio.h>

int main(){
	
	int n, hora, minuto, segundo;
	
	scanf("%d", &n);
	hora = n/3600;
	n %= 3600;
	minuto = n/60;
	segundo = n % 60;
	printf("%d:%d:%d\n", hora, minuto, segundo);
	
	return 0;
}
