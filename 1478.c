//Exercício 1478

#include<stdio.h>

int main(){
	
	int n, i, j, cont;
	
	while(1){
		scanf("%d", &n);
		if (n == 0){
			break;
		}else{
			for(i=1; i<=n; i++){
				for(j=1; j<=n; j++){
					if(i == j){
						cont = 1;
					}else if(j > i){
						cont++;
					}else if(j!=1){
						cont--;
					}else if(j == 1){
						cont = i;
					}
					if (j==1){
						printf("%3d",cont);
					}else{
						printf(" %3d",cont);
					}
				}
				printf("\n");
			}	
		}
		printf("\n");	
	}
	
	return 0;
}
