#include "libstr.h"

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int my_strlen(char* str) {  // 1
    int len = 0;
    while (str[len] != '\0') len++;
    return len;
}

char* my_strcpy(char* str, char* str2, int len) {  // 2
    int i = 0;

    while (str[len] != '\0') {
        str2[i++] = str[len++];
    }

    str2[i] = '\0';
    return str2;
}

char* my_strncpy(char* str, char* str2, int len, int n) {  // 3
    int i = 0;

    while (str[len] != '\0' && i < n) {
        str2[i++] = str[len++];
    }

    str2[i] = '\0';

    return str2;
}

char* my_strcat(char* str, char* str2, int len) {  // 4
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    int j = 0;

    while (str2[j] != '\0') {
        str[i++] = str2[j++];
    }

    str[i] = '\0';

    return str;
}

int my_strcmp(char* str, char* str2, int len) {  // 5
    while (str[len] != '\0' && str2[len] != '\0') {
        if (str[len] != str2[len]) {
            return -1;
        }
        len++;
    }

    if (str[len] == '\0' && str2[len] == '\0') return 0;

    return -1;
}

int my_strncmp(char* str, char* str2, int len, int n) {  // 6
    int i = 0;

    while (str[len] != '\0' && i < n) {
        if (str[len] != str2[len]) {
            return -1;
        }
        len++;
    }
    if (str[len] == '\0' && str2[len] == '\0') {
        return 0;
    }
    return -1;
}

char* my_strchr(char* str, int len, int ch) {  // 7
    while (str[len] != '\0') {
        if (str[len] == ch) {
            return &str[len];
        }
        len++;
    }
    if (str[len] == '\0') {
        return 0;
    }
    return NULL;
}

char* my_strrchr(char* str, int c) {  // 8

    char* last;

    last = NULL;
    while (*str) {
        if (*str == (char)c) last = (char*)str;
        str++;
    }
    if (*str == (char)c) return ((char*)str);
    return (last);
}

char* my_strstr(char* str, char* str2) {
    int i;
    int j;

    if (str2[0] == '\0') return str;

    i = 0;
    while (str[i]) {
        j = 0;

        while (str2[j] != '\0') {
            if (str[i + j] != str2[j]) break;
            j++;
        }

        if (str2[j] == '\0') return &str[i];

        i++;
    }

    return NULL;
}

int my_strspn(char* str, char* str2) {  // 10
    int i = 0;
    int j;

    while (str[i] != '\0') {
        j = 0;
        while (str2[j] != '\0') {
            if (str[i] == str2[j]) {
                break;
            }

            j++;
        }
        if (str2[j] == '\0') {
            return i;
        }
        i++;
    }

    return i;
}

int my_strcspn(char* str, char* str2) {  // 11
    int count = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        for (int j = 0; str2[j] != '\0'; ++j) {
            if (str[i] == str2[j]) {
                return count;
            }
        }
        count++;
    }
    return count;
}

char* my_strpbrk(char* str, char* str2) {  // 12
    int len = 0;
    for (int i = 0; str[i] != '\0'; ++i) {
        for (int j = 0; str2[j] != '\0'; ++j) {
            if (str[i] == str2[j]) {
                return &str[i];
            }
        }
    }
    return NULL;
}

char* my_strtok(char* str, char* str2) {  // 13
    static char* p;
    char* start;

    if (str != NULL) p = str;

    if (p == NULL) return NULL;

    while (*p) {
        int i = 0, ok = 0;

        while (str2[i])
            if (*p == str2[i++]) ok = 1;
        if (!ok) break;
        p++;
    }
    if (*p == '\0') return NULL;

    start = p;

    while (*p) {
        int i = 0, ok = 0;
        while (str2[i])
            if (*p == str2[i++]) ok = 1;
        if (ok) {
            *p = '\0';
            p++;
            return start;
        }
        p++;
    }
    return start;
}

int my_count_char(char* str, char ch) {  // 14
    int count = 0;
    int i = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }
    return count;
}

bool my_strequal(char* str, char* str2) {  // 15
    int i = 0;
    while (str[i] != '\0' && str2[i] != '\0') {
        if (str[i] != str2[i]) {
            return false;
        }
        i++;
    }
    return str[i] == str2[i];
}

char* my_fill_string(char* str, char ch) {  // 16
    int i = 0;
    while (str[i] != '\0') {
        str[i++] = ch;
    }
    return str;
}

int my_strlastindex(char* str, char ch) {  // 17
    int i = 0;
    int fl = -1;

    while (str[i] != '\0') {
        if (str[i] == ch) {
            fl = i;
        }
        i++;
    }
    return fl;
}

char* my_strreverse(char* str) {  // 18
    int l = 0;
    int r = my_strlen(str) - 1;

    while (l < r) {
        char tmp = str[l];
        str[l] = str[r];
        str[r] = tmp;
        l++;
        r--;
    }
    return str;
}

bool my_strpolindrome(char* str) {
    int l = 0;
    int r = my_strlen(str) - 1;

    while (l < r) {
        if (str[l] != str[r]) return false;

        l++;
        r--;
    }

    return true;
}
