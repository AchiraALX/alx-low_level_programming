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
struct date
{
	int month;
	int day;
	int year;
};

struct time
{
	int hour;
	int minutes;
	int seconds;
};

/* exercise functions */
FILE *open_file(const char *file, const char *mode);
double f_c(double set);
bool date_check (struct date d_t);
int day_difference(struct date d_now, struct date d_then);
bool d_check (struct date n, struct date t);
void get_number_and_base(void);
void convert_number(void);
void display_converted_number(void);
int array_sum(int set_array[], int set_num);
/* void transpose_matrix(int row, int cols, int matrix[row][cols]); */
void sort(int set_array[], int set_n, int set_a);
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


/* practice functions */

bool equal_strings(const char s1[], const char s2[]);
void concat_r(char result[], const char str1[], const char str2[]);
int string_length (const char string[]);
void concat(char result[], const char str1[], int n1, const char str2[], int n2);
bool is_leap_year(struct date d);
int number_of_days(struct date d);
struct date date_update(struct date d);
struct time time_update(struct time now);

#endif /* HEAD_H */
