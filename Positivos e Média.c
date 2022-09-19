#include <stdio.h>
 
int main() {
 
    double valor, media;
    int pos, i;
    
    for(i=1;i<=6;i++){
    	scanf("%lf", &valor);
    	if(valor>0){
    		pos++;
    		media += valor;
    		
		}
	}
	media = media/pos;
		printf("%i valores positivos\n", pos);
		printf("%.1lf\n", media);
		
 
    return 0;
}
