#include <stdio.h>

// int main() {
//     int a = 0;

//     for (int i = 10;  i > a; --i) {
//         printf("%d \n", i);
//     }
// }

// int main() {
//     int a = 10;
//     while (a != 0) {
//         printf("%d \n", a);
//         --a;
//     }
// }

int main() {
    int a = 11;

    do {
        --a;
        printf("%d \n", a);
    } while (a != 0);
}