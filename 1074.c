//Exercício 1074

#include<stdio.h>

int main(){
	
	int n1, n2, cont=0;
	
	scanf("%d", &n1);
	if(n1 < 10000){
		while(cont < n1){
			scanf("%d", &n2);
			if (n2 > 0 && n2%2==0){
				printf("EVEN POSITIVE\n");
			}else if(n2 < 0 && n2%2!=0){
				printf("ODD NEGATIVE\n");
			}else if(n2 > 0 && n2%2!=0){
				printf("ODD POSITIVE\n");
			}else if(n2 < 0 && n2%2==0){
				printf("EVEN NEGATIVE\n");
			}else{
				printf("NULL\n");
			}
			cont++;	
		}
	}
	return 0;	
}
