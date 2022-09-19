#include <stdio.h>
 
int main() {
	
	int n, i;
	double res,med, nt1, nt2, nt3;
	
 
    scanf("%i", &n);
    
    for(i=1;i<=n;i++){
    scanf("%lf %lf %lf", &nt1,&nt2, &nt3);
    
    
    
    res = (nt1*2.0)+(nt2*3.0)+(nt3*5.0);
    med = res/10.0;
    
    printf("%.1lf\n", med);
	}
    
    
 
    return 0;
}
