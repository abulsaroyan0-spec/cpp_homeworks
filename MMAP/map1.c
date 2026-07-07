#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>


int main() {
    int n = 100;
    // int* arr = (int*)malloc(n * sizeof(4));

    int* arr = (int*)mmap(NULL, n * sizeof(int), PROT_READ | PROT_WRITE,
                          MAP_ANON | MAP_PRIVATE, -1, 0);
    if (arr == MAP_FAILED) {
        exit(1);
    }

    for (int i = 0; i < n; ++i) {
        arr[i] = i * i;
    }

    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    munmap(arr, n * sizeof(int));
    
}