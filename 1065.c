//Exercício 1065

#include<stdio.h>

int main(){
	
	int i, n, aux=0;
	
	for(i=1; i<=5; i++){
		scanf("%i", &n);
		if(n % 2 == 0){
			aux++;
		}
	}
	printf("%d valores pares\n", aux);
	
	return 0;
}
