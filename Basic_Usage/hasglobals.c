#include <stdio.h>
#include <stdlib.h>

int globalVar;
int* globalPtr;

int main() {
    int localVar;

    printf("Hello, welcome to the program!\n");
    printf("Nothing is initialized.\n");
    globalVar = 1337;
    // printf("globalVar is initialized, globalPtr is not.\n");
    globalPtr = malloc(4 * sizeof(int));
    // printf("globalPtr points to a 4-element array.\n");
    *globalPtr = 5;
    // printf("globalPtr[0] has been set.\n");
    localVar = globalVar;
    globalPtr[2] = 9;
    globalVar = 90;
    printf("We've messed with the values, run in debugger to see what happened.\n");
    return 0;
}