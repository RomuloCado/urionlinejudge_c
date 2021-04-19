//Exercício 1047

#include<stdio.h>

int main(){
	
	int hi, hf, mi, mf, totalh = 0, totalm = 0 ;
	
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	
	if(hi >= 0 && hi <= 23 && mi >=0 && mi <= 59 && hf >=0 && hf <=23 && mf >=0 && mf <= 59){
		totalh = hf - hi;
		totalm = mf - mi;
		if (hi >= hf){
			totalh += 24;
		}
		if (mi > mf){
			totalm += 60;
			totalh--;
		}
		if (totalh == 24 && totalm > 0){ // se o total de horas ter resultado 24 e ter minutos sobrando, eh a condicao que ultrapassou o prazo de 24h
			totalh = 0;
		}
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", totalh, totalm);
	}	
		
	return 0;
}
