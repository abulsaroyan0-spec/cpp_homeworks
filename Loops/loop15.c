#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);

    int a = 0;
    int b = 1;

    for (int i = 2; i <= n; ++i) {
        int c = a;
        a = b;
        b = c + b;
    }
    printf("%d\n", b);
}
