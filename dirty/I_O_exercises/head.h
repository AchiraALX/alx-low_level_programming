#ifndef HEAD_H
#define HEAD_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_alpha(const char c);
char low_to_upper(char c);
FILE *open_file(const char *file, const char *mode);
int count_lines(FILE *file);
FILE *most_lines(FILE *file_1, FILE *file_2);
int write_lines(FILE *file_1, FILE *file_2, int lines);

#endif /* HEAD_H */