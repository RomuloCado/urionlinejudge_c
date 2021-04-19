//Exercício 1064

#include<stdio.h>

int main(){
	
	float n, soma=0;
	int i, aux=0;
	
	for(i=1; i<=6; i++){
		scanf("%f", &n);
		if(n > 0){
			soma += n;
			aux++;
		}
	}
	printf("%d valores positivos\n", aux);
	printf("%.1f\n", soma/aux );
	
	return 0;
}
