#include <stdio.h>

int main() {
    int n = 0;
    scanf("%d", &n);
    int res = 0;

    while(n) {
        int digit = n % 10;
        res = res * 10 + digit;
        n = n / 10;
    }
    printf("%d\n", res);
}