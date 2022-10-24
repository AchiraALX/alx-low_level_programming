#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>

static int _printf(const char *format, ...)

{
        va_list args;
        int i = 0;

        va_start(args, format);
        while (format[i] != '\0')
        {
                if (format[i] == '%')
                {
                        i++;
                        switch (format[i])
                        {
                        case 'c':
                                putchar(va_arg(args, int));
                                break;
                        case 'd':
                                printf("%d", va_arg(args, int));
                                break;
                        case 'f':
                                printf("%f", va_arg(args, double));
                                break;
                        case 's':
                                printf("%s", va_arg(args, char *));
                                break;
                        }
                }
                else
                {
                        putchar(format[i]);
                }
                i++;
        }
        va_end(args);
        return (0);
}

int main(void)
{
        _printf("Hello %s\n", "World");
        _printf("Hello %s %s\n", "World", "Again");
        _printf("Hello %s %s %s\n", "World", "Again", "Again");
        _printf("Hello %s %s %s %s\n", "World", "Again", "Again", "Again");
        _printf("Hello %s %s %s %s %s\n", "World", "Again", "Again", "Again", "Again");
        _printf("Hi%s I am %d years old\n", " there", 25);
        _printf("Hi%s I am %i years old\n", " there", 25);
        _printf("%c %c \n", 'j', '2');
        return (0);
}