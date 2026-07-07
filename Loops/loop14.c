#include <stdio.h>
int main() {
    int a = 0;
    scanf("%d", &a);
    int res = 0;
    int pol = a;

    while (a) {
        int digit = a % 10;
        res = res * 10 + digit;
        a = a / 10;
    }
    if (res == pol) {
        printf("your num is polindrom %d\n", pol);
    } else {
        printf("isnt polindrom %d\n", pol);
    }
}