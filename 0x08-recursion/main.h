#ifndef MAIN_H
#define MAIN_H

/* includes stdio.h String.h */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int _putchar(char c);
void _puts_recursion(char *s);
void _print_rev_recursion(char *s);
int _strlen_recursion(char *s);
int factorial(int n);
int _pow_recursion(int x, int y);
int _sqrt_recursion(int n);
int halp(int c, int i);
int is_prime_number(int n);
int prime_helper(int n, int i);
int _sqrt(int x, int i);
int is_palindrome(char *s);
int is_palindrome_helper(char *s, int i, int j);
int _strlen_recursion(char *s);
int my_pal(char *s, int l);
int wildcmp(char *s1, char *s2);
int findsrc(char *s, char c, int i, int p);

#endif /* MAIN_H */
