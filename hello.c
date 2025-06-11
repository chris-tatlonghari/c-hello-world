#include <stdio.h>

int main() {
    int input = 5;
    int output = 1;

    for (int i = 1; i <= input; i++) {
        output *= i;
    }

    printf("The factorial of %d is %d\n", input, output);
    return 0;
}