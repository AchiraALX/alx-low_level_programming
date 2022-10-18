#include "head.h"

int main(void)
{
        int n = 98;
        int *p = &n;

        *p++;

        printf("%i\n", *p);

        return (0);
}