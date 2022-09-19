#include <stdio.h>
 
int main() {
 
    int par = 0, num, i;
    
    for(i=1; i<=5; i++){
    	scanf("%i", &num);
    	if(num%2 == 0){
    		par++;
		}
	}
	printf("%i valores pares\n", par);
 
    return 0;
}
