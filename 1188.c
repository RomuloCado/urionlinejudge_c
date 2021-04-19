//Exercício 1188

#include <stdio.h>

int main(){
	
	int i, j, x, y, limite, inicio;
	double m[12][12], soma =0.0;
	char resp[2];
	
	scanf("%s", &resp);
	for(i=0; i<12; i++){
		for(j=0; j<12; j++){
			scanf("%lf", &m[i][j]);
		}
	}
	inicio = 1;
	limite = 10;
	for (x=11 ; x>6; x--){
		for(y=inicio ; y<=limite; y++){
			soma+= m[x][y];
		}
		inicio++;
		limite--;
	}
	if (resp[0] == 'S'){
		printf("%.1lf\n", soma);
	}else if(resp[0] == 'M'){
		printf("%.1lf\n", soma/30.0);
	}
	
	return 0;
}
