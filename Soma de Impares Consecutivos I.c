#include <stdio.h>
 
int main() {
 
 	int x, y, i, soma = 0;
    scanf("%i %i", &x, &y);
    
    
    
    if(x>y){
    	for(i=y+1;i < x;i++){
		
    	if(i%2 != 0){
    	
    		soma += i;
    }
		}
	}
	else {
		for(i=x+1;i < y;i++){
		
    	if(i%2 != 0){
    	
    		soma += i;
    	}
		}	
	}
	

    
    printf("%i\n", soma);
    
    
    
    return 0;
}
