#include <stdio.h>
 
int main() {
 
 	int n,i,res;
    scanf("%i", &n);
    
    for (i=1;i<=10;i++){
    	res= i * n; 
    	printf("%i x %i = %i\n", i , n ,res);
	}
 
    return 0;
}
