#include <stdio.h>

int main(){
    int x, y;
    long int res = 1;

    printf("Digite o valor de X:");
    scanf("%d", &x);

    printf("Digite o valor de Y:");
    scanf("%d", &y);

    if (y == 0){
        res = 1;
    }
    else{
        for (int i = y; i > 0; i--){
            res = res * x;
        }
    }

    printf("%d elevado a %d é %ld\n", x, y, res);

    return 0;
}