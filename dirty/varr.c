#include "head.h"

/**
 * main - variadic
 */

void MyPrintf(const char *format, ...)
{
    va_list args;
    char buffer[BUFSIZ];

    va_start(args, format);
    vsnprintf(buffer, sizeof buffer, format, args);
    va_end(args);
    FlushFunnyStream(buffer);
}