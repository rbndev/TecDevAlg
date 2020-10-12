#include <stdio.h>
 
int main(void){
    float hr, vl, lt;
    
    scanf("%f", &hr);
    scanf("%f", &vl);
    lt = (hr * vl) / 12;
    printf("%.3f\n", lt );
    
    return 0;
}