#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("enter size: \n");
    scanf("%d", &n);

    printf("enter elements: \n");

    int** arr = (int**)calloc(n, sizeof(int*));
    if (arr == NULL) return 1;

    for (int i = 0; i < n; ++i) {
        arr[i] = malloc(sizeof(int));
        if (arr[i] == NULL) return 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; ++i) {
        free(arr[i]);
    }

    free(arr);
}