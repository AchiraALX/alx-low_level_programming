#include "search_algos.h"

int main(void)
{
    int array[] = {
        0, 1, 2, 3, 4, 5, 6, 7, 8, 9
    };

    size_t size = sizeof(array) / sizeof(array[0]);

    printf("Found %d at index: %d\n", 3, jump_search(array, size, 8));

    return (0);
}
