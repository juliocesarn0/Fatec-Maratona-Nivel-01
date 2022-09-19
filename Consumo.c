#include <stdio.h>
 
int main() {
 
    int x;
    float y,m;
    
    
    scanf("%i\n", &x);
    scanf("%f\n", &y);
    
    m = x/y;
    
    printf("%.3f km/l\n", m);
    
 
    return 0;
}
