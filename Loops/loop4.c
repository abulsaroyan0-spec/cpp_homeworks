#include <stdio.h>

int main() {
    int a = 101;

    for (int i = 1; i < a; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            printf("FizzBuzz\n");
        } else if (i % 5 == 0) {
            printf("Fizz\n");
        } else if (i % 3 == 0) {
            printf("Buzz\n");
        } else {
            printf("%d\n", i);
        }
    }
}