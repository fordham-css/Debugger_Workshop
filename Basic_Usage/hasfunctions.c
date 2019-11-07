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
        int g = goodNumber(trail);
        trail = max(g, trail);
    }
}

int goodNumber(int a) {
    int b = a % 2, c = a % 3, d = 0;
    for (int i = 0; i < a; ++i) {
        d += c;
        d -= b;
    }
    return d;
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