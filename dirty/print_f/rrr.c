#include <stdio.h>
#include <stdarg.h>

void print(const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    vprintf(fmt, ap);
    va_end(ap);
}

int main()
{
	print("Hello, %s! %s really great.\n", "jacob", "I am");
	return 0;
}