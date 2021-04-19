//Exercício 1589

#include<stdio.h>

int main(){
	
	int vezes, r1, r2, cont = 0, resp =0;
	
	scanf("%d", &vezes);
	while(cont < vezes){
		scanf("%d%d", &r1, &r2);
		resp = r1 + r2;
		printf("%d\n", resp);
		cont++;
	}
	return 0;
}
