//Exercício 1118

#include<stdio.h>

int main(){
	
	float n1, n2;
	int resposta;
	
	while(1){
		do{
			scanf("%f", &n1);
			if(n1 < 0 || n1 > 10){
				printf("nota invalida\n");
			}
		}while(n1 < 0 || n1 > 10);
		do{
			scanf("%f", &n2);
			if(n2 < 0 || n2 > 10){
				printf("nota invalida\n");
			}
		}while(n2 < 0 || n2 >10);
		printf("media = %.2f\n", (n1+n2)/2);
		do{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &resposta);
		}while(resposta != 1 && resposta != 2);
		if (resposta == 2){
			break;
		}		
	}	
	return 0;		
}
