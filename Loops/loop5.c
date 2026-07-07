#include <stdio.h>

int main() {
    int a = 100;

    for (int i = 0; i < a; ++i) {
        if (i % 2 != 0) {
            printf("kent\n");
        } else {
            printf("%d\n", i);
        }
    }
}