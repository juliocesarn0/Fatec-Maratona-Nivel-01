#include <stdio.h>
 
int main() {
 
 	int n, res, i ;
 	
    scanf("%i", &n);
    
    for(i=2;i<=n;i+=2){
    	res = i*i;
    	printf("%i^2 = %i\n", i , res);
	}
 
    return 0;
}
