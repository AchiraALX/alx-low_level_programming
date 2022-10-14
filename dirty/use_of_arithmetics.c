#include <stdio.h>

int main(void)
{
    int a = 100;
    int b = 2;
    int c = 25;
    int d = 4;
    int result;

    result = a - b;
    printf("a - b = %i\n", result);

    result = b * c;
    printf("%i * %i = %i\n", b, c, result);

    result = a / c;
    printf("%i / %i = %i", a, c, result);

    result = a + b * c;
    printf("%i + %i * %i = %i\n", a, b, c, result);

    printf("a * b + c * d = %i\n", a * b + c * d);

    return (0);
}