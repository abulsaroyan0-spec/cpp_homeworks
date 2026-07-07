#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "libstr.h"

int main() {
    char str[100];
    char str2[100];
    puts("Enter string");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = '\0';

    int len = my_strlen(str);  // 1

    // printf("Copy -> %s\n", my_strcpy(str, str2, 0));  2

    // int n;
    //  puts("Enter num for copy");
    //  puts("Enter n for compare");
    //  scanf("%d", &n);
    //  getchar();

    // printf("N copy -> %s\n", my_strncpy(str, str2, 0, n)); 3

    puts("Enter second string");
    fgets(str2, 100, stdin);  // Second String
    str2[strcspn(str2, "\n")] = '\0';

    // printf("Cat -> %s\n", my_strcat(str, str2, 0)); 4

    // if (my_strcmp(str, str2, 0) == 0) { 5
    //     puts("Are equal");
    // } else {
    //     puts("Isn't equal");
    // }

    // if (my_strncmp(str, str2, 0, n) == 0) { 6
    //     puts("Are equal");
    // } else {
    //     puts("Isn't equal");
    // }

    // char ch = 0;
    // puts("Enter target character");
    // scanf("%c", &ch);
    // getchar();

    // printf("%d\n", my_strrchr(str, ch));

    // char* p = my_strchr(str, 0, ch); 8
    // printf("%p\n", p);

    // char* my_strstr(char* str, char* str2, int len) {}  // ape ushot kanem 🧠
    // 9

    //  printf("%d\n", my_strspn(str, str2)); 10

    // printf("%d\n", my_strcspn(str, str2)); 11

    // printf("%c\n", *my_strpbrk(str, str2)); 12
    // printf("%s\n", my_strpbrk(str, str2)); 12

    char* strtocen = malloc(my_strlen(str) + 1);

    printf("%s\n", my_strtok(str, strtocen));

    char* p;

    p = my_strtok(str, ",");
    printf("%s\n", p);

    p = my_strtok(NULL, ",");
    printf("%s\n", p);

    p = my_strtok(NULL, ",");
    printf("%s\n", p);

    // printf("%d\n", my_count_char(str, ch)); 14

    // printf("%d\n", my_strequal(str, str2)); 15

    // printf("%s\n", my_fill_string(str, ch)); 16

    // printf("%d\n", my_strlastindex(str, ch)); 17

    // printf("%s\n", my_strreverse(str)); 18

    // if (my_strpolindrome(str) == 1) {
    //     puts("Polindrome String");
    // } else {                            19
    //     puts("Isn't Polindrome");
    // }

    // printf("%s\n", my_strstr(str, str2));  20
}
