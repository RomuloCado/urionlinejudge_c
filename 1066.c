//Exercício 1066

#include<stdio.h>

int main(){
	
	int n, i, somap=0, soman=0, somapar=0, somaimp=0;
	
	for(i=1; i<=5; i++){
		scanf("%d", &n);
		if (n < 0){
			soman++;
		}else if (n > 0){
			somap++;
		}
		if (n %2 == 0){
			somapar++;
		}else{
			somaimp++;
		}
	}
	printf("%d valor(es) par(es)\n", somapar);
	printf("%d valor(es) impar(es)\n", somaimp);
	printf("%d valor(es) positivo(s)\n", somap);
	printf("%d valor(es) negativo(s)\n", soman);
	
	return 0;
}
