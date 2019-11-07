#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>


double doesSomething(int aVar) {
    return pow(aVar % 21, 2);
}

int* doesSomethingElse(double first, int count) {
    int* myArr = malloc(count * sizeof(int));
    double trail;
    for(int i = 0; i < count; ++i) {
        myArr[i] = trail - first * 2;
        trail = myArr[i] + first * 3 - floor(first);
    }
}

int main(int argc, char** argv) {
    if (argc != 3) {
        printf("I expected 2 ints!\n");
        exit(2);
    }
    int* arr = doesSomethingElse(doesSomething(atoi(argv[1])), atoi(argv[2]));
    int aval = 1;
    printf("Your first mystery number: %d, and your second: %d", arr[aval], arr[atoi(argv[1])]);
    return 0;
}