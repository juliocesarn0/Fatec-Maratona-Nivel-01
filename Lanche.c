#include <stdio.h>
 
int main() {
	
	int id,qtd;
	double preco;
 
    scanf("%i %i", &id ,&qtd);
    
    if(id == 1){
    	
    	preco = qtd * 4.00;
	}
	else if(id == 2){
		preco = qtd * 4.50;
	}
	else if(id == 3){
		preco = qtd * 5.00;
	}
	else if(id == 4){
		preco = qtd * 2.00;
	}
	else if(id == 5){
		preco = qtd * 1.50;
	}
	
	printf("Total: R$ %.2lf\n", preco );
 
    return 0;
}
