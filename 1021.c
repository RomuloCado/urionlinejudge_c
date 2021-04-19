//Exercício 1021

#include <stdio.h>

int main(){
	
	int n, m, cem, cinquenta, vinte, dez, cinco, dois, m1, m50, m25, m10, m05, m01;
	
	scanf("%d.%d", &n, &m);
	if(n >= 0 && n <= 1000000){
		cem = n/100.00; 
		n -= cem * 100; 
		
		cinquenta = n/50.00;
		n -= cinquenta * 50; 
	
		vinte = n/20.00;
		n -= vinte * 20;
	
		dez = n/10.00;
		n -= dez * 10;	
		
		cinco = n/5.00;
		n -= cinco * 5;
		
		dois = n/2.00;
		n -= dois * 2;
	
		m1 = n/1.00;
		n -= m1 * 1;
	
		m50 = m/50;
		m -= m50 * 50;
	
		m25 = m/25;
		m -= m25 * 25;
	
		m10 = m/10;
		m -= m10 * 10;
	
		m05 = m/5;
		m -= m05 * 5;
	
		m01 = m/1;

		printf("NOTAS:\n");		
		printf("%d nota(s) de R$ 100.00\n", cem);
		printf("%d nota(s) de R$ 50.00\n", cinquenta);
		printf("%d nota(s) de R$ 20.00\n", vinte);
		printf("%d nota(s) de R$ 10.00\n", dez);
		printf("%d nota(s) de R$ 5.00\n", cinco);
		printf("%d nota(s) de R$ 2.00\n", dois);
		printf("MOEDAS:\n");
		printf("%d moeda(s) de R$ 1.00\n", m1);
		printf("%d moeda(s) de R$ 0.50\n", m50);
		printf("%d moeda(s) de R$ 0.25\n", m25);
		printf("%d moeda(s) de R$ 0.10\n", m10);
		printf("%d moeda(s) de R$ 0.05\n", m05);
		printf("%d moeda(s) de R$ 0.01\n", m01);
	}
		
    return 0;
}
