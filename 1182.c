//Exercício 1182

#include <stdio.h>

int main(){
	
	int i, j, n;
	double m[12][12], soma =0.0;
	char resp[2];
	
	scanf("%d", &n);
	scanf("%s", &resp);
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%lf", &m[i][j]);
			if (j == n){
				soma += m[i][j];
			}
		}
	}
	if (resp[0] == 'S'){
		printf("%.1lf\n", soma);
	}else if(resp[0] == 'M'){
		printf("%.1lf\n", soma/12.0);
	}
	
	return 0;
}
