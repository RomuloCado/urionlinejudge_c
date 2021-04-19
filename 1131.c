//Exercício 1131

#include<stdio.h>

int main(){
	
	int gre, inter, resposta, vitoriaint=0, vitoriagre=0, empate=0, total=0;
	
	do{
		scanf("%d %d", &inter, &gre);
		if(inter > gre){
			vitoriaint ++;
		}else if(gre > inter){
			vitoriagre ++;
		}else{
			empate ++;
		}
		total ++;
		do{
			printf("Novo grenal (1-sim 2-nao)\n");
			scanf("%d", &resposta);
		}while(resposta != 1 && resposta != 2);	
	}while(resposta != 2);
	printf("%d grenais\n", total);
	printf("Inter:%d\n", vitoriaint);
	printf("Gremio:%d\n", vitoriagre);
	printf("Empates:%d\n", empate);
	if(vitoriaint > vitoriagre){
		printf("Inter venceu mais\n");
	}else if(vitoriagre > vitoriaint){
		printf("Gremio venceu mais\n");
	}
	return 0;	
}
