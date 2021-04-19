//Exercício 1101

#include<stdio.h>

int main(){
	
	int m, n, aux=0, i, soma=0;
	
	while(1){
		scanf("%d %d", &m, &n);
		if(m <= 0 || n <= 0){
			break;
		}
		if (m > n){
			aux = m;
			m = n;
			n = aux;
		}
		for(i=m; i<=n; i++){
			soma += i;
			printf("%d ", i);
		}
		printf("Sum=%d\n", soma);
		soma = 0;
	}
	return 0;
}
