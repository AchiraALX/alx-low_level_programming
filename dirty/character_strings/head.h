#ifndef HEAD_H
#define HEAD_H

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

struct entry
{
        char word[15];
        char definition[50];
};

bool alphabetic(const char c);
void read_line(char buffer[]);
int count_words(const char string[]);
bool equal_strings(const char s1[], const char s2[]);
int lookup(const struct entry dictionary[], const char search[], const int entries);
int i_lookup(const struct entry dictionary[], const char search[], const int entries);
int compare_strings(const char s1[], const char s2[]);
int str_to_int(const char string[]);

#endif /* HEAD_H */