#include <stdio.h>

int main(){
    int num, res, x = 0;

    printf("Type a number: ");
    scanf("%d", &num);

    do {
        x += 1;
        res = num * x;
        printf("%d", num);
        printf(" * ");
        printf("%d", x);
        printf(" = ");
        printf("%d\n", res);
    } while (x < 10);

    return 0;
}