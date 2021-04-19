//Exercício 1117

#include<stdio.h>

int main(){
	
	float n1, n2;
	
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
		
		break;
	}
	printf("media = %.2f\n", (n1+n2)/2);
	
	return 0;		
}
