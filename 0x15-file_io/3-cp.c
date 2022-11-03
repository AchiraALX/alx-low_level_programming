#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
    int fd;
    char *text_content = "Holberton School!\n";
    int res;

    fd = open("file", O_CREAT | O_WRONLY | O_TRUNC, 0600);
    close(fd);
    res = append_text_to_file("file", text_content);
    printf("-> %i)\n", res);
    res = append_text_to_file("file", NULL);
    printf("-> %i)\n", res);
    res = append_text_to_file(NULL, text_content);
    printf("-> %i)\n", res);
    return (0);
}
