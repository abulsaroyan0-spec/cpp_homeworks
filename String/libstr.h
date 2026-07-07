#ifndef LIBSTR_H
#define LIBSTR_H
#include <stdbool.h>

int my_strlen(char* str);

char* my_strcpy(char* str, char* str2, int len);

char* my_strncpy(char* str, char* str2, int len, int n);

char* my_strcat(char* str, char* str2, int len);

int my_strcmp(char* str, char* str2, int len);

int my_strncmp(char* str, char* str2, int len, int n);

char* my_strchr(char* str, int len, int ch);

char* my_strrchr(char *s, int c);

char* my_strstr(char* str, char* str2);

int my_strspn(char* str, char* str2);

int my_strcspn(char* str, char* str2);

char* my_strpbrk(char* str, char* str2);

char* my_strtok(char* str, char* str2);

int my_count_char(char* str, char ch);

bool my_strequal(char* str, char* str2);

char* my_fill_string(char* str, char ch);

int my_strlastindex(char* str, char ch);

char* my_strreverse(char* str);

bool my_strpolindrome(char* str);




#endif