#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("Enter size: \n");
    scanf("%d", &n);

    int** arr = (int**)malloc(n * sizeof(int*));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        arr[i] = malloc(n * sizeof(int));
    }

    printf("Enter elements: \n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            sum += arr[i][j];
        }
    }

    printf("Sum = %d\n", sum);

    for (int i = 0; i < n; ++i) {
        free(arr[i]);
    }

    free(arr);
}