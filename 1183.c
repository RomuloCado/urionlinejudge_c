//Exercício 1183

#include <stdio.h>

int main(){
	
	int i, j;
	double m[12][12], soma =0.0;
	char resp[2];
	
	scanf("%s", &resp);
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%lf", &m[i][j]);
			if (i < j){
				soma += m[i][j];
			}
		}
	}
	if (resp[0] == 'S'){
		printf("%.1lf\n", soma);
	}else if(resp[0] == 'M'){
		printf("%.1lf\n", soma/66.0);
	}
	
	return 0;
}
