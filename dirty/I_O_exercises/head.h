#ifndef HEAD_H
#define HEAD_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool is_alpha(const char c);
char low_to_upper(char c);
FILE *open_file(const char *file, const char *mode);
int file_length(const char *file);

#endif /* HEAD_H */