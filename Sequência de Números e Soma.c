#include <stdio.h>
 
int main() {
 
 	int m , n , i , soma = 0;
    scanf("%i %i", &m , &n);
    
  
  
	
    if(m>n){
	
	
    for(i = n; i <= m; i++ ){
    	printf("%i ", i);
    	soma += i;
    	
	}
	}
	else if (m<n) {
		for(i = m; i <= n; i++ ){
    	printf("%i ", i);
    	soma += i;
	}
}
	else{
		break;
	}
	printf("Sum=%i\n", soma);



    return 0;
}
