#include "main.h"
/**
 * print_alphabet_x10 - Print the letters in lowercase 10 time
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
      int i = 0;
      char c;

      while (i < 10)
      {
                  c = 'a';

                  while (c <= 'z')
                  {
                  _putchar(c);
                  c++;
                  }

                  _putchar('\n');
                  i++;
      }
}
