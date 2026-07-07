#include <stdio.h>

// int main() {
//     int a = 10;

//     for (int i = 0; a >= i; ++i) {
//         printf("%d \n", i);
//     }
// }

// int main() {
//     int a = 0;
//     while (a != 11) {
//         a;
//         printf("%d \n", a);
//     }
// }

int main() {
    int a = 0;

    do {
        ++a;
        printf("%d\n", a);
    } while (a != 10);
}