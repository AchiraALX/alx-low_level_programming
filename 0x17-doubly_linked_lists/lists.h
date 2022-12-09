#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    char *data;
    struct node *next;
} node_t;

#endif /* LISTS_H */