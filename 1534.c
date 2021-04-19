//Exercício 1534

#include <stdio.h>

int main(){
	
	int n, i, j , aux = 0;
	
	while(scanf("%d", &n) != EOF){
		int vet[n][n];
		aux = n-1;
		for(i=0; i<n; i++){
			for(j=0; j<n; j++){
				if (aux == j ){
				vet[i][j] = 2;
				}else if (i == j){
				vet[i][j] = 1;
				}else{
				vet[i][j] = 3;
				}
				printf("%d", vet[i][j]);
			}
			printf("\n");
			aux--;
		}
	}
	return 0;	
}
