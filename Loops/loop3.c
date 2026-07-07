#include <stdio.h>

int main() {
    int a = 0;
    scanf("%d", &a);
    int count = 0;
    
    for (int i = 0; i < a; ++i) {
        if (i % 5 == 0) {
            count++;
        }
    }
    printf("%d\n", count);

}