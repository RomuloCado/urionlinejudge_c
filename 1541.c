//Exercício 1541

#include<stdio.h>
#include<math.h>

int main(){
	
	int a, b, c, areac = 0, valorlado = 0;
	
	while(1){
		scanf("%d %d %d", &a, &b, &c);
		if(a ==0 || b == 0 || c == 0){
			break;
		}
		areac = a * b;
		valorlado = sqrt((areac * 100)/c); // calculo para descobrir o lado do terreno
		printf("%d\n", valorlado); // que eh a raiz quadrada da area total do terreno
	}
	
	return 0;
}
