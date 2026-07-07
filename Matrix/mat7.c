#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Enter size N; \n");
    scanf("%d", &n);

    printf("Enter size M: \n");
    scanf("%d", &m);

    printf("Enter elements: \n");
    int** arr = (int**)malloc(n * sizeof(int*));
    if (arr == NULL) {
        return 1;
    }

    for (int i = 0; i < n; ++i) {
        arr[i] = malloc(m * sizeof(int));
        if (arr[i] == NULL) {
            return 1;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    int min = arr[0][0];
    int min_i = 0;
    int min_j = 0;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (arr[i][j] < min) {
                min = arr[i][j];
                min_i = i;
                min_j = j;
            }
        }
    }

    printf("Min in matrix => %d\n", min);
    printf("Min index => [%d] [%d] \n", min_i, min_j);


    for (int i = 0; i < n; ++i) {
        free(arr[i]);
    }
    free(arr);
}