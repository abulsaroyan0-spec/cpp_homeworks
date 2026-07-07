#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0;
    printf("enter size: \n");
    scanf("%d", &n);

    size_t count = n;

    printf("enter elements: \n");

    int** arr = (int**)malloc(n * sizeof(int*));
    if (arr == NULL) return 1;

    for (int i = 0; i < n; ++i) {
        arr[i] = malloc(n * sizeof(int));
        if (arr[i] == NULL) return 1;
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    int* arr1 = (int*)malloc(count * sizeof(int));
    if (arr1 == NULL) {
        return 1;
    }

    for (int j = 0; j < n; ++j) {
        int sum = 0;
        for (int i = 0; i < n; ++i) {
            sum += arr[j][i];
            arr1[i] = sum;
        }
        printf("%d\n", arr1[j]);
    }

    for (int i = 0; i < n; ++i) {
        free(arr[i]);
    }

    free(arr);
    free(arr1);
}