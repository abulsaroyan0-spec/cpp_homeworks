#include <stdio.h>
#include <stdlib.h>

void rev(int** arr, int n);  

void for_null(int** arr, int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (arr[i][j] == 0) {
                arr[i][j] = 1;
            } else {
                arr[i][j] = 0;
            }
        }
    }
    rev(arr, n);

}

void rev(int** arr, int n) {
    for (int i = 0; i < n; ++i) {
        int l = 0;
        int r = n - 1;

        while (l < r) {
            int tmp = arr[i][l];
            arr[i][l] = arr[i][r];
            arr[i][r] = tmp;

            l++;
            r--;
        }
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    
}

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
        if (arr[i] == NULL) {
            return 1;
        }
    }

    printf("Enter elements: \n");
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\n");

    rev(arr, n);

    for (int i = 0; i < n; ++i) {
        free(arr[i]);
    }

    free(arr);

}
