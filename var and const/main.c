#include <stdio.h>
#include <stdbool.h>

// defines a constant without taking up space in memory (its a label)
#define label 100

int main(){
    // defines a constant value that take up space in memory
    // this value cannot be modified
    const int constant = 100;
    printf("constant val = %d\n", constant);

    // bool test code with stdbool.h library
    bool cond = false;
    
    if (cond) {
        printf("cond var is true!\n");
    } else {
        printf("conf var is false!\n");
    }

    return 0;
}