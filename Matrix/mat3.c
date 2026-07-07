#include <stdio.h>
#include <stdlib.h>

int mian() {
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

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] % 2 == 0) {
                arr[j] = 0;
            }
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d\n", arr[i][j]);
        }
    }
    for (int i = 0; i < n; ++i) {
        free(arr[i]);
    }

    free(arr);
}