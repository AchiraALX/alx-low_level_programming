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
#define true 1
#define false 0

size_t i, j;

double f_c(double set);
int transpose_matrix(int matrix[][], int set_x, int set_y);
int array_sum(int set_array[], int set_num);
int prime(int set_x);
double negative_x(double set_x);
double absolute_value(float set_x);
double square_root(float set_x);
double quadratic_roots(int set_a, int set_b, int set_c);
int lcm(int set_x, int set_y);
int mult(int set_x, int set_y);
int u_gcd(int u, int v);
float poly(float x);
float ex_r(void);
int next(int i, int j);
int gcd(void);
int factorial(int f);
int failing_grades(int numberOfGrades);
float operator(float accumulator, char operator, float operand);

#endif /* HEAD_H */
