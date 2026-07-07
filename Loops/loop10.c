#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    int sum = 1;

    for (int i = 1; i <= a; ++i) {
        sum *= i;
    }
    printf("%d\n", sum);
}