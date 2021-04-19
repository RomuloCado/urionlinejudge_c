//Exercício 1094

#include<stdio.h>

int main(){
	
	int nc,  total=0 , tcoelho=0 , trato=0 , tsapo=0;
	double pc, pr, ps;
	int i, n;
	char cobaia;
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d %c", &nc, &cobaia);
		if(nc >= 1 && nc <=15){
			if(cobaia == 'C'){
				tcoelho += nc; 
			}else if(cobaia == 'R'){
				trato += nc;
			}else if(cobaia == 'S'){
				tsapo += nc;
			}
		}
	}
	total = tsapo+tcoelho+trato;
	pc = (tcoelho*100.00)/total;
	pr = (trato*100.00)/total;
	ps = (tsapo*100.00)/total;
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", tcoelho);
	printf("Total de ratos: %d\n", trato);
	printf("Total de sapos: %d\n", tsapo);
	printf("Percentual de coelhos: %.2lf %%\n", pc);
	printf("Percentual de ratos: %.2lf %%\n", pr);
	printf("Percentual de sapos: %.2lf %%\n", ps);
	
	return 0;
}
