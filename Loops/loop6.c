#include <stdio.h>

int main() {
    int a = 100;

    for (int i = 0; i < a; ++i){
        if (i != 3 && i != 5 && i != 15) {
            printf("%d\n", i);
        }
    }
}