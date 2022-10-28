#ifndef HEAD_H
#define HEAD_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdarg.h>
#include <string.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#define N 10

double f_c(double set);
float poly(float x);
float ex_r(void);
int next(int i, int j);
int gcd(void);
int factorial(int f);
int failing_grades(int numberOfGrades);
float operator(float accumulator, char operator, float operand);

#endif /* HEAD_H */