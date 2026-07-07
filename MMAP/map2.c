#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>


int main() {
    int fd = open("file.txt", O_RDWR);


    char* arr = (char*) mmap (NULL, 30, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);
    arr[6] = 'W';
    arr[0] = 'J';

    munmap(arr, 30);
    
    // msync(arr, MS_SYNC, 30);
    close(fd);
}