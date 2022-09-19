#include <stdio.h>
 
int main() {
 
 double valor;
 int n, resto;
 int cem,cinquenta,vinte,dez,cinco,dois;
 
 int umreal, cinquentacents , vintecents, dezcents, cincocents,umcents ; 
 
    scanf("%lf", &valor);
    
	n = valor;
	
    
    cem = n / 100;
    
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", cem);
    valor -= cem * 100.00;
    resto = n% 100;
    cinquenta = resto/50;
    printf("%i nota(s) de R$ 50.00\n", cinquenta);
    valor -= cinquenta * 50.00;
    
    resto %= 50;
    vinte = resto/20;
    printf("%i nota(s) de R$ 20.00\n", vinte);
    valor -= vinte * 20.00;
    
    resto %= 20;
    dez = resto/10;
    printf("%i nota(s) de R$ 10.00\n", dez);
    valor -= dez * 10.00;
    
    resto %= 10;
    cinco = resto/5;
    printf("%i nota(s) de R$ 5.00\n", cinco);
    valor -= cinco * 5.00;
    
    resto %= 5;
    dois = resto/2;
    printf("%i nota(s) de R$ 2.00\n", dois);
    valor -= dois * 2.00;
    
    
    
	printf("MOEDAS:\n");
	
    valor *= 100.00;
    umreal = valor / 100.00;
    printf("%i moeda(s) de R$ 1.00\n", umreal);
    
    
    
    
    valor = valor - (umreal*100.00);
    cinquentacents = valor/50;
    printf("%i moeda(s) de R$ 0.50\n", cinquentacents);
    
    
    
    valor = valor - (cinquentacents * 50.00);
    vintecents = valor/25;
    printf("%i moeda(s) de R$ 0.25\n", vintecents);
    
    
    
    valor = valor - (vintecents * 25.00);
    dezcents = valor/10;
    printf("%i moeda(s) de R$ 0.10\n", dezcents);
    
    
    
    valor = valor - (dezcents * 10.00);
    cincocents = valor/5.00;
    printf("%i moeda(s) de R$ 0.05\n", cincocents);
    
    
    
 	valor = valor - (cincocents * 5.00);
    umcents = valor/1.00;
    printf("%i moeda(s) de R$ 0.01\n", umcents);   
    
    
    
 
    return 0;
}
