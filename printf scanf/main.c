#include <stdio.h>

int main(){
    float x;
    float y;
    float z;
    
    printf("x value input:\n");
    scanf("%f", &x);

    printf("y value input:\n");
    scanf("%f", &y);
    
    z = x*y;

    printf("x = %f\n", x);
    printf("y = %f\n", y);

    printf("z = %f\n", z);
    
    return 0;
}